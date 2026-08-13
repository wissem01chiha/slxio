#include "Point50.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Point50::Point50() {}

Point50::~Point50() {}

const std::string& Point50::GetValue() const
{
    return m_Value;
}

void Point50::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Point50::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Point50::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Point50::GetOutmin() const
{
    return m_Outmin;
}

void Point50::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Point50::GetOutmax() const
{
    return m_Outmax;
}

void Point50::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Point50::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Point50::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Point50::GetLockscale() const
{
    return m_Lockscale;
}

void Point50::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Point50::GetSampletime() const
{
    return m_Sampletime;
}

void Point50::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Point50::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Point50::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
