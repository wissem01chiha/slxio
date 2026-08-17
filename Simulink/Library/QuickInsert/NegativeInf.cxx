#include "NegativeInf.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

NegativeInf::NegativeInf() {}

NegativeInf::~NegativeInf() {}

const std::string& NegativeInf::GetValue() const { return m_Value; }

void NegativeInf::SetValue(const std::string& value) { m_Value = value; }

const std::string& NegativeInf::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void NegativeInf::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& NegativeInf::GetOutmin() const { return m_Outmin; }

void NegativeInf::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& NegativeInf::GetOutmax() const { return m_Outmax; }

void NegativeInf::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& NegativeInf::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void NegativeInf::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& NegativeInf::GetLockscale() const { return m_Lockscale; }

void NegativeInf::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& NegativeInf::GetSampletime() const { return m_Sampletime; }

void NegativeInf::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& NegativeInf::GetFrameperiod() const { return m_Frameperiod; }

void NegativeInf::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
