#include "Point75.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Point75::Point75() {}

Point75::~Point75() {}

const std::string& Point75::GetValue() const
{
    return m_Value;
}

void Point75::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Point75::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Point75::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Point75::GetOutmin() const
{
    return m_Outmin;
}

void Point75::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Point75::GetOutmax() const
{
    return m_Outmax;
}

void Point75::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Point75::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Point75::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Point75::GetLockscale() const
{
    return m_Lockscale;
}

void Point75::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Point75::GetSampletime() const
{
    return m_Sampletime;
}

void Point75::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Point75::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Point75::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
