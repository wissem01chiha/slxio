#include "Inf.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Inf::Inf() {}

Inf::~Inf() {}

const std::string& Inf::GetValue() const { return m_Value; }

void Inf::SetValue(const std::string& value) { m_Value = value; }

const std::string& Inf::GetVectorparams1d() const { return m_Vectorparams1d; }

void Inf::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Inf::GetOutmin() const { return m_Outmin; }

void Inf::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Inf::GetOutmax() const { return m_Outmax; }

void Inf::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Inf::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Inf::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Inf::GetLockscale() const { return m_Lockscale; }

void Inf::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Inf::GetSampletime() const { return m_Sampletime; }

void Inf::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Inf::GetFrameperiod() const { return m_Frameperiod; }

void Inf::SetFrameperiod(const std::string& value) { m_Frameperiod = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
