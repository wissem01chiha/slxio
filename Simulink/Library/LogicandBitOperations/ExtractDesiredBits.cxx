#include "ExtractDesiredBits.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ExtractDesiredBits::ExtractDesiredBits() {}

ExtractDesiredBits::~ExtractDesiredBits() {}

const std::string& ExtractDesiredBits::GetOutmin() const
{
    return m_Outmin;
}

void ExtractDesiredBits::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ExtractDesiredBits::GetOutmax() const
{
    return m_Outmax;
}

void ExtractDesiredBits::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ExtractDesiredBits::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ExtractDesiredBits::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ExtractDesiredBits::GetLockscale() const
{
    return m_Lockscale;
}

void ExtractDesiredBits::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ExtractDesiredBits::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void ExtractDesiredBits::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& ExtractDesiredBits::GetRndmeth() const
{
    return m_Rndmeth;
}

void ExtractDesiredBits::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& ExtractDesiredBits::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void ExtractDesiredBits::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& ExtractDesiredBits::GetSampletime() const
{
    return m_Sampletime;
}

void ExtractDesiredBits::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
