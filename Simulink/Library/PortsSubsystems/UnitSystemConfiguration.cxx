#include "UnitSystemConfiguration.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UnitSystemConfiguration::UnitSystemConfiguration() {}

UnitSystemConfiguration::~UnitSystemConfiguration() {}

const std::string& UnitSystemConfiguration::GetUnitsystems() const
{
    return m_Unitsystems;
}

void UnitSystemConfiguration::SetUnitsystems(const std::string& value)
{
    m_Unitsystems = value;
}

const std::string& UnitSystemConfiguration::GetAllowallunitsystems() const
{
    return m_Allowallunitsystems;
}

void UnitSystemConfiguration::SetAllowallunitsystems(const std::string& value)
{
    m_Allowallunitsystems = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
