#include "Converter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Converter::Converter() {}

Converter::~Converter() {}

const std::string& Converter::GetOutmin() const
{
    return m_Outmin;
}

void Converter::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Converter::GetOutmax() const
{
    return m_Outmax;
}

void Converter::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Converter::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Converter::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Converter::GetLockscale() const
{
    return m_Lockscale;
}

void Converter::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Converter::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void Converter::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& Converter::GetRndmeth() const
{
    return m_Rndmeth;
}

void Converter::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Converter::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Converter::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Converter::GetSampletime() const
{
    return m_Sampletime;
}

void Converter::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
