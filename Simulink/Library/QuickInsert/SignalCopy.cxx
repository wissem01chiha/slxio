#include "SignalCopy.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SignalCopy::SignalCopy() {}

SignalCopy::~SignalCopy() {}

const std::string& SignalCopy::GetConversionoutput() const
{
    return m_Conversionoutput;
}

void SignalCopy::SetConversionoutput(const std::string& value)
{
    m_Conversionoutput = value;
}

const std::string& SignalCopy::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SignalCopy::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SignalCopy::GetOverrideopt() const
{
    return m_Overrideopt;
}

void SignalCopy::SetOverrideopt(const std::string& value)
{
    m_Overrideopt = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
