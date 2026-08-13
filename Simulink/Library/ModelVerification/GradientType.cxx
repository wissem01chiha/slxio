#include "GradientType.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

GradientType::GradientType() {}

GradientType::~GradientType() {}

const std::string& GradientType::GetOutmin() const
{
    return m_Outmin;
}

void GradientType::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& GradientType::GetOutmax() const
{
    return m_Outmax;
}

void GradientType::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& GradientType::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void GradientType::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& GradientType::GetLockscale() const
{
    return m_Lockscale;
}

void GradientType::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& GradientType::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void GradientType::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& GradientType::GetRndmeth() const
{
    return m_Rndmeth;
}

void GradientType::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& GradientType::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void GradientType::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& GradientType::GetSampletime() const
{
    return m_Sampletime;
}

void GradientType::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
