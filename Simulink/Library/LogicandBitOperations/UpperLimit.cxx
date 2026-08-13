#include "UpperLimit.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UpperLimit::UpperLimit() {}

UpperLimit::~UpperLimit() {}

const std::string& UpperLimit::GetValue() const
{
    return m_Value;
}

void UpperLimit::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& UpperLimit::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void UpperLimit::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& UpperLimit::GetOutmin() const
{
    return m_Outmin;
}

void UpperLimit::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& UpperLimit::GetOutmax() const
{
    return m_Outmax;
}

void UpperLimit::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& UpperLimit::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void UpperLimit::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& UpperLimit::GetLockscale() const
{
    return m_Lockscale;
}

void UpperLimit::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& UpperLimit::GetSampletime() const
{
    return m_Sampletime;
}

void UpperLimit::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& UpperLimit::GetFrameperiod() const
{
    return m_Frameperiod;
}

void UpperLimit::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
