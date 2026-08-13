#include "FixptConstant.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptConstant::FixptConstant() {}

FixptConstant::~FixptConstant() {}

const std::string& FixptConstant::GetValue() const
{
    return m_Value;
}

void FixptConstant::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& FixptConstant::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void FixptConstant::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& FixptConstant::GetOutmin() const
{
    return m_Outmin;
}

void FixptConstant::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& FixptConstant::GetOutmax() const
{
    return m_Outmax;
}

void FixptConstant::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& FixptConstant::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptConstant::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptConstant::GetLockscale() const
{
    return m_Lockscale;
}

void FixptConstant::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FixptConstant::GetSampletime() const
{
    return m_Sampletime;
}

void FixptConstant::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FixptConstant::GetFrameperiod() const
{
    return m_Frameperiod;
}

void FixptConstant::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
