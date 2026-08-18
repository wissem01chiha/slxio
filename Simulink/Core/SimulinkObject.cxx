#include "SimulinkObject.h"
#include "SimulinkECH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkObject::~SimulinkObject() = default;

ISimulinkElement* SimulinkObject::New() const { return new SimulinkObject(); }

HError SimulinkObject::AcceptInsert(ISimulinkElement& parent)
{

    auto* object = dynamic_cast<SimulinkObject*>(&parent);
    if (object != nullptr)
    {
        object->Insert(shared_from_this());
    }
    else
    {
        return E_OPERATION_NOT_SUPPORTED;
    }
    return E_OK;
}

HError SimulinkObject::Insert(const std::shared_ptr<ISimulinkElement>& element)
{
    if (element == nullptr)
    {
        return E_CHILD_NULLPTR_RECEIVED;
    }
    m_children[element->GetId()] = element;
    m_childrenOrder.push_back(element);
    // tell the element how is his parent
    element->SetParent(shared_from_this());
    return E_OK;
}

SId SimulinkObject::GetId() const { return m_id; }

void SimulinkObject::SetId(const SId& id) { m_id = id; }

void SimulinkObject::AddParam(const std::string& name,
                              const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
    m_parameters.push_back(p);
}

void SimulinkObject::SetParam(const std::string& name,
                              const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }

    for (auto& param : m_parameters)
    {
        if (param->GetName() == name)
        {
            param = p;
            return;
        }
    }
    AddParam(name, p);
}

std::shared_ptr<IParameterObjectBase>
SimulinkObject::GetParam(const std::string& name)
{
    for (const auto& param : m_parameters)
    {
        if (param->GetName() == name)
        {

            return param;
        }
    }
    return nullptr;
}

std::string SimulinkObject::GetName() const { return m_propName; }

void SimulinkObject::SetName(const std::string& name)
{
    if (!name.empty())
    {
        m_propName = name;
    }
}

std::string SimulinkObject::GetClassName() const { return m_className; }

std::string SimulinkObject::GetVersion() const { return m_version; }

std::string SimulinkObject::ToString() const
{

    std::ostringstream oss;

    oss << "SimulinkObject {\n";
    oss << "  ID: " << m_id << "\n";
    oss << "  Version: " << m_version << "\n";
    oss << "  Name: " << m_propName << "\n";
    oss << "  Class: " << m_className << "\n";

    oss << "  Objects:\n";
    for (const auto& obj : m_childrenOrder)
    {
        if (obj)
        {
            oss << "    - " << obj->ToString() << "\n";
        }
    }

    oss << "  Arrays:\n";
    for (const auto& arr : m_arrays)
    {
        if (arr)
        {
            oss << "    - " << arr->ToString() << "\n";
        }
    }

    oss << "  Parameters:\n";
    for (const auto& param : m_parameters)
    {
        if (param)
        {
            oss << "    - " << param->ToString() << "\n";
        }
    }

    oss << "}";

    return oss.str();
}

std::shared_ptr<ISimulinkElement> SimulinkObject::GetArray(const SId& id) const
{
    for (const auto& arr : m_arrays)
    {
        if (arr->GetId() == id)
        {

            return arr;
        }
    }
    return nullptr;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
