#include "FromwsSignal1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FromwsSignal1::FromwsSignal1() {}

FromwsSignal1::~FromwsSignal1() {}

const std::string& FromwsSignal1::GetVariablename() const
{
    return m_Variablename;
}

void FromwsSignal1::SetVariablename(const std::string& value)
{
    m_Variablename = value;
}

const std::string& FromwsSignal1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FromwsSignal1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FromwsSignal1::GetSampletime() const
{
    return m_Sampletime;
}

void FromwsSignal1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FromwsSignal1::GetInterpolate() const
{
    return m_Interpolate;
}

void FromwsSignal1::SetInterpolate(const std::string& value)
{
    m_Interpolate = value;
}

const std::string& FromwsSignal1::GetZerocross() const
{
    return m_Zerocross;
}

void FromwsSignal1::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& FromwsSignal1::GetOutputafterfinalvalue() const
{
    return m_Outputafterfinalvalue;
}

void FromwsSignal1::SetOutputafterfinalvalue(const std::string& value)
{
    m_Outputafterfinalvalue = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
