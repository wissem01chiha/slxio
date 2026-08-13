#include "Initialfreq.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Initialfreq::Initialfreq() {}

Initialfreq::~Initialfreq() {}

const std::string& Initialfreq::GetValue() const
{
    return m_Value;
}

void Initialfreq::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Initialfreq::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Initialfreq::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Initialfreq::GetOutmin() const
{
    return m_Outmin;
}

void Initialfreq::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Initialfreq::GetOutmax() const
{
    return m_Outmax;
}

void Initialfreq::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Initialfreq::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Initialfreq::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Initialfreq::GetLockscale() const
{
    return m_Lockscale;
}

void Initialfreq::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Initialfreq::GetSampletime() const
{
    return m_Sampletime;
}

void Initialfreq::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Initialfreq::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Initialfreq::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
