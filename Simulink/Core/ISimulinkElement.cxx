#include "ISimulinkElement.h"
#include "SimulinkECH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

HError
ISimulinkElement::Insert(const std::shared_ptr<ISimulinkElement>& element)
{

    return E_OPERATION_NOT_SUPPORTED;
}

std::shared_ptr<ISimulinkElement> ISimulinkElement::Find(const SId& id) const
{
    auto it = m_children.find(id);
    if (it != m_children.end())
    {
        return it->second;
    }
    return nullptr;
}

std::shared_ptr<ISimulinkElement>
ISimulinkElement::FindRecursive(const SId& id) const
{
    auto direct = Find(id);
    if (direct)
        return direct;
    for (auto& child : m_childrenOrder)
    {
        auto nested = child->FindRecursive(id);
        if (nested)
            return nested;
    }
    return nullptr;
}

HError ISimulinkElement::Erase(const SId& id)
{
    auto it = m_children.find(id);
    if (it == m_children.end())
    {
        return E_CHILD_NOT_FOUND;
    }

    m_children.erase(it);

    m_childrenOrder.erase(
        std::remove_if(m_childrenOrder.begin(), m_childrenOrder.end(),
                       [&](const std::shared_ptr<ISimulinkElement>& child)
                       { return child->GetId() == id; }),
        m_childrenOrder.end());

    return E_OK;
}

void ISimulinkElement::Clear() { m_children.clear(); }

bool ISimulinkElement::Contains(const SId& id) const
{
    return m_children.find(id) != m_children.end();
}

std::weak_ptr<ISimulinkElement> ISimulinkElement::GetParent() const
{
    return m_parent;
}

HError ISimulinkElement::SetLogger(ILogger* logger)
{
    if (logger == nullptr)
    {
        return E_ILOGGER_NULLPTR_RECEIVED;
    }
    m_logger = logger;
    for (const auto& child : m_childrenOrder)
    {
        child->SetLogger(logger);
    }
    return E_OK;
}

const ILogger* ISimulinkElement::GetLogger() const { return m_logger; }

HError ISimulinkElement::SetErrorHandler(IErrorHandler* handler)
{
    if (handler == nullptr)
    {
        return E_IERRORHANDLER_NULLPTR_RECEIVED;
    }
    m_error = handler;
    return E_OK;
}

const IErrorHandler* ISimulinkElement::GetErrorHandler() const
{
    return m_error;
}

std::string ISimulinkElement::ToString() const { return std::string(""); }

void ISimulinkElement::SetParent(
    const std::shared_ptr<ISimulinkElement>& parent)
{
    m_parent = parent;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio