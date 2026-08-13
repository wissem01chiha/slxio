#include "MaxVal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MaxVal::MaxVal() {}

MaxVal::~MaxVal() {}

const std::string& MaxVal::GetValue() const
{
    return m_Value;
}

void MaxVal::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& MaxVal::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void MaxVal::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& MaxVal::GetOutmin() const
{
    return m_Outmin;
}

void MaxVal::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& MaxVal::GetOutmax() const
{
    return m_Outmax;
}

void MaxVal::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& MaxVal::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MaxVal::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MaxVal::GetLockscale() const
{
    return m_Lockscale;
}

void MaxVal::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& MaxVal::GetSampletime() const
{
    return m_Sampletime;
}

void MaxVal::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& MaxVal::GetFrameperiod() const
{
    return m_Frameperiod;
}

void MaxVal::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
