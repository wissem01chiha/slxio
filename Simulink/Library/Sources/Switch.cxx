#include "Switch.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Switch::Switch() {}

Switch::~Switch() {}

const std::string& Switch::GetValue() const
{
    return m_Value;
}

void Switch::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Switch::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Switch::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Switch::GetOutmin() const
{
    return m_Outmin;
}

void Switch::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Switch::GetOutmax() const
{
    return m_Outmax;
}

void Switch::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Switch::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Switch::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Switch::GetLockscale() const
{
    return m_Lockscale;
}

void Switch::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Switch::GetSampletime() const
{
    return m_Sampletime;
}

void Switch::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Switch::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Switch::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
