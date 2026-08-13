#include "ModifyScalingOnly.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ModifyScalingOnly::ModifyScalingOnly() {}

ModifyScalingOnly::~ModifyScalingOnly() {}

const std::string& ModifyScalingOnly::GetOutmin() const
{
    return m_Outmin;
}

void ModifyScalingOnly::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ModifyScalingOnly::GetOutmax() const
{
    return m_Outmax;
}

void ModifyScalingOnly::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ModifyScalingOnly::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ModifyScalingOnly::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ModifyScalingOnly::GetLockscale() const
{
    return m_Lockscale;
}

void ModifyScalingOnly::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ModifyScalingOnly::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void ModifyScalingOnly::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& ModifyScalingOnly::GetRndmeth() const
{
    return m_Rndmeth;
}

void ModifyScalingOnly::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& ModifyScalingOnly::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void ModifyScalingOnly::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& ModifyScalingOnly::GetSampletime() const
{
    return m_Sampletime;
}

void ModifyScalingOnly::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
