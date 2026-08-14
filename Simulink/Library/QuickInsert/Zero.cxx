#include "Zero.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Zero::Zero() {}

Zero::~Zero() {}

const std::string& Zero::GetValue() const { return m_Value; }

void Zero::SetValue(const std::string& value) { m_Value = value; }

const std::string& Zero::GetVectorparams1d() const { return m_Vectorparams1d; }

void Zero::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Zero::GetOutmin() const { return m_Outmin; }

void Zero::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Zero::GetOutmax() const { return m_Outmax; }

void Zero::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Zero::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Zero::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Zero::GetLockscale() const { return m_Lockscale; }

void Zero::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Zero::GetSampletime() const { return m_Sampletime; }

void Zero::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Zero::GetFrameperiod() const { return m_Frameperiod; }

void Zero::SetFrameperiod(const std::string& value) { m_Frameperiod = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
