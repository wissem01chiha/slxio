#include "GradientVal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

GradientVal::GradientVal() {}

GradientVal::~GradientVal() {}

const std::string& GradientVal::GetValue() const
{
    return m_Value;
}

void GradientVal::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& GradientVal::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void GradientVal::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& GradientVal::GetOutmin() const
{
    return m_Outmin;
}

void GradientVal::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& GradientVal::GetOutmax() const
{
    return m_Outmax;
}

void GradientVal::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& GradientVal::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void GradientVal::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& GradientVal::GetLockscale() const
{
    return m_Lockscale;
}

void GradientVal::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& GradientVal::GetSampletime() const
{
    return m_Sampletime;
}

void GradientVal::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& GradientVal::GetFrameperiod() const
{
    return m_Frameperiod;
}

void GradientVal::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
