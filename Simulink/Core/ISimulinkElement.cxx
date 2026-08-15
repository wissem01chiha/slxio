#include "ISimulinkElement.h"

namespace slxio
{
HError
ISimulinkElement::Insert(const std::shared_ptr<ISimulinkElement>& element)
{

    return E_OPERATION_NOT_SUPPORTED;
}

std::shared_ptr<ISimulinkElement> ISimulinkElement::Find(const SId& id)
{
    auto it = m_children.find(id);
    if (it != m_children.end())
    {
        return it->second;
    }
    return nullptr;
}

std::weak_ptr<ISimulinkElement> ISimulinkElement::GetParent() const
{
    return m_parent;
}

SLXIO_ABI_NAMESPACE_BEGIN

HError ISimulinkElement::SetLogger(ILogger* logger)
{
    m_logger = logger;
    for (auto& child : m_childrenOrder)
    {
        child->SetLogger(logger);
    }
    return E_OK;
}

const ILogger* ISimulinkElement::GetLogger() const { return m_logger; }

HError ISimulinkElement::SetErrorHandler(IErrorHandler* handler)
{
    return E_OK;
}

const IErrorHandler* ISimulinkElement::GetErrorHandler() const
{
    return m_error;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio