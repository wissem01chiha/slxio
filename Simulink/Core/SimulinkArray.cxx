#include "SimulinkArray.h"
#include "SimulinkECH.h"
#include "SimulinkObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArray::~SimulinkArray() = default;

SimulinkArray::SimulinkArray(): m_id(SId(0)) {}

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
    for (const auto& object : m_objects)
    {
        oss << "    - " << object << "\n";
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

    if (array != nullptr)
    {
        // needs valid copy constructor
        array->Insert(std::make_shared<SimulinkArray>(*this));
        return E_OK;
    }

    auto* object = dynamic_cast<SimulinkObject*>(&parent);
    if (object != nullptr)
    { // needs copy constructor valid
        object->Insert(std::make_shared<SimulinkArray>(*this));
        return E_OK;
    }

    return E_OPERATION_NOT_SUPPORTED;
}

HError SimulinkArray::Insert(const std::shared_ptr<ISimulinkElement>& element)
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

SId SimulinkArray::GetId() const { return m_id; }

void SimulinkArray::AddParam(const std::string& name,
                             const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
    m_parameters.push_back(p);
}

void SimulinkArray::SetParam(const std::string& name,
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
SimulinkArray::GetParam(const std::string& name)
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

std::string SimulinkArray::GetName() const { return m_name; }

void SimulinkArray::SetName(const std::string& name)
{
    if (name.empty())
    {
        return;
    }
    else
    {
        m_name = name;
    }
    m_name = name;
}

std::string SimulinkArray::GetDimension() const { return m_dimension; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
