#include "Castu16en16.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Castu16en16::Castu16en16() {}

Castu16en16::~Castu16en16() {}

const std::string& Castu16en16::GetOutmin() const
{
    return m_Outmin;
}

void Castu16en16::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Castu16en16::GetOutmax() const
{
    return m_Outmax;
}

void Castu16en16::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Castu16en16::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Castu16en16::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Castu16en16::GetLockscale() const
{
    return m_Lockscale;
}

void Castu16en16::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Castu16en16::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void Castu16en16::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& Castu16en16::GetRndmeth() const
{
    return m_Rndmeth;
}

void Castu16en16::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Castu16en16::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Castu16en16::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Castu16en16::GetSampletime() const
{
    return m_Sampletime;
}

void Castu16en16::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
