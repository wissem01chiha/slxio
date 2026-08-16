#include "SimulinkObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkObject::SimulinkObject() {}

ISimulinkElement* SimulinkObject::New() const { return new SimulinkObject(); }

HError SimulinkObject::AcceptInsert(ISimulinkElement& parent) { return E_OK; }

HError SimulinkObject::Insert(const std::shared_ptr<ISimulinkElement>& element)
{
    return E_OK;
}

SId SimulinkObject::GetId() const { return SId(); }

void SimulinkObject::AddParam(const std::string& name,
                              const std::shared_ptr<IParameterObjectBase>& p)
{
}

void SimulinkObject::SetParam(const std::string& name,
                              const std::shared_ptr<IParameterObjectBase>& p)
{
}

std::shared_ptr<IParameterObjectBase>
SimulinkObject::GetParam(const std::string& name)
{
    return std::shared_ptr<IParameterObjectBase>();
}

std::string SimulinkObject::GetName() const { return std::string(); }

std::string SimulinkObject::GetDimension() const { return std::string(); }

std::string SimulinkObject::GetVersion() const { return std::string(); }

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

SLXIO_ABI_NAMESPACE_END

}; // namespace slxio
