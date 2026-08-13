#include "MinVal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MinVal::MinVal() {}

MinVal::~MinVal() {}

const std::string& MinVal::GetValue() const
{
    return m_Value;
}

void MinVal::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& MinVal::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void MinVal::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& MinVal::GetOutmin() const
{
    return m_Outmin;
}

void MinVal::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& MinVal::GetOutmax() const
{
    return m_Outmax;
}

void MinVal::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& MinVal::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MinVal::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MinVal::GetLockscale() const
{
    return m_Lockscale;
}

void MinVal::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& MinVal::GetSampletime() const
{
    return m_Sampletime;
}

void MinVal::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& MinVal::GetFrameperiod() const
{
    return m_Frameperiod;
}

void MinVal::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
