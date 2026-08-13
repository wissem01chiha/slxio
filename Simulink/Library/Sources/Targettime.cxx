#include "Targettime.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Targettime::Targettime() {}

Targettime::~Targettime() {}

const std::string& Targettime::GetValue() const
{
    return m_Value;
}

void Targettime::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Targettime::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Targettime::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Targettime::GetOutmin() const
{
    return m_Outmin;
}

void Targettime::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Targettime::GetOutmax() const
{
    return m_Outmax;
}

void Targettime::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Targettime::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Targettime::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Targettime::GetLockscale() const
{
    return m_Lockscale;
}

void Targettime::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Targettime::GetSampletime() const
{
    return m_Sampletime;
}

void Targettime::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Targettime::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Targettime::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
