#include "Dencoef.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Dencoef::Dencoef() {}

Dencoef::~Dencoef() {}

const std::string& Dencoef::GetGain() const
{
    return m_Gain;
}

void Dencoef::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Dencoef::GetMultiplication() const
{
    return m_Multiplication;
}

void Dencoef::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Dencoef::GetParammin() const
{
    return m_Parammin;
}

void Dencoef::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Dencoef::GetParammax() const
{
    return m_Parammax;
}

void Dencoef::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Dencoef::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Dencoef::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Dencoef::GetOutmin() const
{
    return m_Outmin;
}

void Dencoef::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Dencoef::GetOutmax() const
{
    return m_Outmax;
}

void Dencoef::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Dencoef::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Dencoef::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Dencoef::GetLockscale() const
{
    return m_Lockscale;
}

void Dencoef::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Dencoef::GetRndmeth() const
{
    return m_Rndmeth;
}

void Dencoef::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Dencoef::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Dencoef::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Dencoef::GetSampletime() const
{
    return m_Sampletime;
}

void Dencoef::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
