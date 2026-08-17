#include "ToVirtualBus.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ToVirtualBus::ToVirtualBus() {}

ToVirtualBus::~ToVirtualBus() {}

const std::string& ToVirtualBus::GetConversionoutput() const
{
    return m_Conversionoutput;
}

void ToVirtualBus::SetConversionoutput(const std::string& value)
{
    m_Conversionoutput = value;
}

const std::string& ToVirtualBus::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ToVirtualBus::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ToVirtualBus::GetOverrideopt() const
{
    return m_Overrideopt;
}

void ToVirtualBus::SetOverrideopt(const std::string& value)
{
    m_Overrideopt = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
