#include "DeadResolution.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DeadResolution::DeadResolution() {}

DeadResolution::~DeadResolution() {}

const std::string& DeadResolution::GetValue() const
{
    return m_Value;
}

void DeadResolution::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& DeadResolution::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void DeadResolution::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& DeadResolution::GetOutmin() const
{
    return m_Outmin;
}

void DeadResolution::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DeadResolution::GetOutmax() const
{
    return m_Outmax;
}

void DeadResolution::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DeadResolution::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DeadResolution::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DeadResolution::GetLockscale() const
{
    return m_Lockscale;
}

void DeadResolution::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DeadResolution::GetSampletime() const
{
    return m_Sampletime;
}

void DeadResolution::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DeadResolution::GetFrameperiod() const
{
    return m_Frameperiod;
}

void DeadResolution::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
