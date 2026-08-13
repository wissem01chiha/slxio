#include "ResolutionType.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ResolutionType::ResolutionType() {}

ResolutionType::~ResolutionType() {}

const std::string& ResolutionType::GetOutmin() const
{
    return m_Outmin;
}

void ResolutionType::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ResolutionType::GetOutmax() const
{
    return m_Outmax;
}

void ResolutionType::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ResolutionType::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ResolutionType::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ResolutionType::GetLockscale() const
{
    return m_Lockscale;
}

void ResolutionType::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ResolutionType::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void ResolutionType::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& ResolutionType::GetRndmeth() const
{
    return m_Rndmeth;
}

void ResolutionType::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& ResolutionType::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void ResolutionType::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& ResolutionType::GetSampletime() const
{
    return m_Sampletime;
}

void ResolutionType::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
