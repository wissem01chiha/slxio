#include "SimulinkParameter.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkParameter::SimulinkParameter()
    : m_dataType(SimulinkDataType(SimulinkDataType::Auto)),
      m_information(std::make_unique<SimulinkParameterInformation>())
{
}

SimulinkParameter::SimulinkParameter(const std::string& value)
{
    m_value = value;
}

IParameterObjectBase* SimulinkParameter::New()
{
    return new SimulinkParameter();
}

SimulinkParameter::~SimulinkParameter() = default;

std::string& SimulinkParameter::GetValue() { return m_value; }
UInt64 SimulinkParameter::GetValueAsInt() const
{
    return static_cast<UInt64>(std::stoll(m_value));
}
Float32 SimulinkParameter::GetValueAsFloat() const
{
    return std::stof(m_value);
}
Float64 SimulinkParameter::GetValueAsDouble() const
{
    return std::stod(m_value);
}

DataType SimulinkParameter::GetDataType() const
{
    return DataType::SLXIO_TYPE_SIMULINK_PARAM;
}

SimulinkDataType SimulinkParameter::GetSimulinkDataType() const
{
    return m_dataType;
}
void SimulinkParameter::SetSimulinkDataType(SimulinkDataType type)
{
    m_dataType = type;
}

SimulinkParameterInformation&
SimulinkParameter::GetSimulinkParameterInformation() const
{
    return *m_information;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
