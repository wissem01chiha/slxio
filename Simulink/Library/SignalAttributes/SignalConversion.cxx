#include "SignalConversion.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SignalConversion::SignalConversion() {}

SignalConversion::~SignalConversion() {}

const std::string& SignalConversion::GetConversionoutput() const
{
    return m_Conversionoutput;
}

void SignalConversion::SetConversionoutput(const std::string& value)
{
    m_Conversionoutput = value;
}

const std::string& SignalConversion::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SignalConversion::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SignalConversion::GetOverrideopt() const
{
    return m_Overrideopt;
}

void SignalConversion::SetOverrideopt(const std::string& value)
{
    m_Overrideopt = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
