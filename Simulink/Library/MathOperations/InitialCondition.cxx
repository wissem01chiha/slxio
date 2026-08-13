#include "InitialCondition.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

InitialCondition::InitialCondition() {}

InitialCondition::~InitialCondition() {}

const std::string& InitialCondition::GetValue() const
{
    return m_Value;
}

void InitialCondition::SetValue(const std::string& value)
{
    m_Value = value;
}

const std::string& InitialCondition::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void InitialCondition::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

const std::string& InitialCondition::GetOutmin() const
{
    return m_Outmin;
}

void InitialCondition::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& InitialCondition::GetOutmax() const
{
    return m_Outmax;
}

void InitialCondition::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& InitialCondition::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void InitialCondition::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& InitialCondition::GetLockscale() const
{
    return m_Lockscale;
}

void InitialCondition::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& InitialCondition::GetSampletime() const
{
    return m_Sampletime;
}

void InitialCondition::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& InitialCondition::GetFrameperiod() const
{
    return m_Frameperiod;
}

void InitialCondition::SetFrameperiod(const std::string& value)
{
    m_Frameperiod = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
