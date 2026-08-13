#include "Deltafreq.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Deltafreq::Deltafreq() {}

Deltafreq::~Deltafreq() {}

const std::string& Deltafreq::GetValue() const
{
    return m_Value;
}

void Deltafreq::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Deltafreq::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Deltafreq::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Deltafreq::GetOutmin() const
{
    return m_Outmin;
}

void Deltafreq::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Deltafreq::GetOutmax() const
{
    return m_Outmax;
}

void Deltafreq::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Deltafreq::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Deltafreq::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Deltafreq::GetLockscale() const
{
    return m_Lockscale;
}

void Deltafreq::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Deltafreq::GetSampletime() const
{
    return m_Sampletime;
}

void Deltafreq::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Deltafreq::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Deltafreq::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
