#include "DowncastNextStateX.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DowncastNextStateX::DowncastNextStateX() {}

DowncastNextStateX::~DowncastNextStateX() {}

const std::string& DowncastNextStateX::GetOutmin() const
{
    return m_Outmin;
}

void DowncastNextStateX::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DowncastNextStateX::GetOutmax() const
{
    return m_Outmax;
}

void DowncastNextStateX::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DowncastNextStateX::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DowncastNextStateX::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DowncastNextStateX::GetLockscale() const
{
    return m_Lockscale;
}

void DowncastNextStateX::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DowncastNextStateX::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void DowncastNextStateX::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& DowncastNextStateX::GetRndmeth() const
{
    return m_Rndmeth;
}

void DowncastNextStateX::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DowncastNextStateX::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DowncastNextStateX::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DowncastNextStateX::GetSampletime() const
{
    return m_Sampletime;
}

void DowncastNextStateX::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
