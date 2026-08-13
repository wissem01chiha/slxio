#include "Constant1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Constant1::Constant1() {}

Constant1::~Constant1() {}

const std::string& Constant1::GetValue() const
{
    return m_Value;
}

void Constant1::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& Constant1::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void Constant1::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& Constant1::GetOutmin() const
{
    return m_Outmin;
}

void Constant1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Constant1::GetOutmax() const
{
    return m_Outmax;
}

void Constant1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Constant1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Constant1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Constant1::GetLockscale() const
{
    return m_Lockscale;
}

void Constant1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Constant1::GetSampletime() const
{
    return m_Sampletime;
}

void Constant1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Constant1::GetFrameperiod() const
{
    return m_Frameperiod;
}

void Constant1::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
