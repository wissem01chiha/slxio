#include "LowerLimit.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

LowerLimit::LowerLimit() {}

LowerLimit::~LowerLimit() {}

const std::string& LowerLimit::GetValue() const
{
    return m_Value;
}

void LowerLimit::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& LowerLimit::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void LowerLimit::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& LowerLimit::GetOutmin() const
{
    return m_Outmin;
}

void LowerLimit::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& LowerLimit::GetOutmax() const
{
    return m_Outmax;
}

void LowerLimit::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& LowerLimit::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void LowerLimit::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& LowerLimit::GetLockscale() const
{
    return m_Lockscale;
}

void LowerLimit::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& LowerLimit::GetSampletime() const
{
    return m_Sampletime;
}

void LowerLimit::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& LowerLimit::GetFrameperiod() const
{
    return m_Frameperiod;
}

void LowerLimit::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
