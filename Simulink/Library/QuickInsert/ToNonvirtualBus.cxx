#include "ToNonvirtualBus.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ToNonvirtualBus::ToNonvirtualBus() {}

ToNonvirtualBus::~ToNonvirtualBus() {}

const std::string& ToNonvirtualBus::GetConversionoutput() const
{
    return m_Conversionoutput;
}

void ToNonvirtualBus::SetConversionoutput(const std::string& value)
{
    m_Conversionoutput = value;
}

const std::string& ToNonvirtualBus::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ToNonvirtualBus::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ToNonvirtualBus::GetOverrideopt() const
{
    return m_Overrideopt;
}

void ToNonvirtualBus::SetOverrideopt(const std::string& value)
{
    m_Overrideopt = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
