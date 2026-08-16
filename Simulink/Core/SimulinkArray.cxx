#include "SimulinkArray.h"
#include "SimulinkECH.h"
#include "SimulinkObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArray::~SimulinkArray() = default;

SimulinkArray::SimulinkArray() {}

ISimulinkElement* SimulinkArray::New() const { return new SimulinkArray(); }

std::string SimulinkArray::ToString() const
{
    std::ostringstream oss;

    oss << "SimulinkArray {\n";
    oss << "  Id: " << m_id << "\n";
    oss << "  Type: " << m_type << "\n";
    oss << "  Name: " << m_name << "\n";
    oss << "  Dimension: " << m_dimension << "\n";

    oss << "  Object Ids:\n";
    for (const auto& m_id : m_objects)
    {
        oss << "    - " << m_id << "\n";
    }

    oss << "  m_arrays:\n";
    for (const auto& children : m_childrenOrder)
    {
        if (children != nullptr)
        {
            oss << "    - " << children->ToString() << "\n";
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

HError SimulinkArray::AcceptInsert(ISimulinkElement& parent)
{

    auto* array = dynamic_cast<SimulinkArray*>(&parent);

    if (array == nullptr)
    {
        auto* object = dynamic_cast<SimulinkObject*>(&parent);
        if (object == nullptr)
        {
            return E_OPERATION_NOT_SUPPORTED;
        }
        object->Insert(std::make_shared<SimulinkArray>(*this));
    }
    array->Insert(std::make_shared<SimulinkArray>(*this));
    return E_OK;
}

HError SimulinkArray::Insert(const std::shared_ptr<ISimulinkElement>& element)
{
    if (element == nullptr)
    {
        return E_CHILD_NULLPTR_RECEIVED;
    }
    HError status = element->AcceptInsert(*this);
    if (status != E_OK)
    {
        return status;
    }
    m_children[element->GetId()] = element;
    m_childrenOrder.push_back(element);
    return E_OK;
}

SId SimulinkArray::GetId() const { return m_id; }

void SimulinkArray::AddParam(const std::string& name,
                             const std::shared_ptr<IParameterObjectBase>& p)
{
    if (!p)
        return;
    m_parameters.push_back(p);
}

void SimulinkArray::SetParam(const std::string& name,
                             const std::shared_ptr<IParameterObjectBase>& p)
{
    if (!p)
        return;
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
SimulinkArray::GetParam(const std::string& name)
{
    for (auto& param : m_parameters)
    {
        if (param->GetName() == name)
        {
            return param;
        }
    }
    return nullptr;
}

std::string SimulinkArray::GetName() const { return m_name; }

std::string SimulinkArray::GetDimension() const { return m_dimension; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
