#include "EulersNumber.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

EulersNumber::EulersNumber() {}

EulersNumber::~EulersNumber() {}

const std::string& EulersNumber::GetValue() const { return m_Value; }

void EulersNumber::SetValue(const std::string& value) { m_Value = value; }

const std::string& EulersNumber::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void EulersNumber::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& EulersNumber::GetOutmin() const { return m_Outmin; }

void EulersNumber::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& EulersNumber::GetOutmax() const { return m_Outmax; }

void EulersNumber::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& EulersNumber::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void EulersNumber::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& EulersNumber::GetLockscale() const { return m_Lockscale; }

void EulersNumber::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& EulersNumber::GetSampletime() const { return m_Sampletime; }

void EulersNumber::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& EulersNumber::GetFrameperiod() const
{
    return m_Frameperiod;
}

void EulersNumber::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
