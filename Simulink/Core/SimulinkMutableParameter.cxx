#include "SimulinkMutableParameter.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

void SimulinkMutableParameter::SetValue(const std::string& value)
{
    m_value = value;
}

DataType SimulinkMutableParameter::GetDataType() const
{
    return DataType::SLXIO_TYPE_SIMULINK_PARAM;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio