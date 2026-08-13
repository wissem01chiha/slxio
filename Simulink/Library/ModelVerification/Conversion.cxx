#include "Conversion.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Conversion::Conversion() {}

Conversion::~Conversion() {}

const std::string& Conversion::GetOutmin() const
{
    return m_Outmin;
}

void Conversion::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Conversion::GetOutmax() const
{
    return m_Outmax;
}

void Conversion::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Conversion::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Conversion::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Conversion::GetLockscale() const
{
    return m_Lockscale;
}

void Conversion::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Conversion::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void Conversion::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& Conversion::GetRndmeth() const
{
    return m_Rndmeth;
}

void Conversion::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Conversion::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Conversion::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Conversion::GetSampletime() const
{
    return m_Sampletime;
}

void Conversion::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
