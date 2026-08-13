#include "DowncastOutputY.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DowncastOutputY::DowncastOutputY() {}

DowncastOutputY::~DowncastOutputY() {}

const std::string& DowncastOutputY::GetOutmin() const
{
    return m_Outmin;
}

void DowncastOutputY::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DowncastOutputY::GetOutmax() const
{
    return m_Outmax;
}

void DowncastOutputY::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DowncastOutputY::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DowncastOutputY::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DowncastOutputY::GetLockscale() const
{
    return m_Lockscale;
}

void DowncastOutputY::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DowncastOutputY::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void DowncastOutputY::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& DowncastOutputY::GetRndmeth() const
{
    return m_Rndmeth;
}

void DowncastOutputY::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DowncastOutputY::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DowncastOutputY::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DowncastOutputY::GetSampletime() const
{
    return m_Sampletime;
}

void DowncastOutputY::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
