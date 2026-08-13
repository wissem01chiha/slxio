#include "Numcoef.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Numcoef::Numcoef() {}

Numcoef::~Numcoef() {}

const std::string& Numcoef::GetGain() const
{
    return m_Gain;
}

void Numcoef::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Numcoef::GetMultiplication() const
{
    return m_Multiplication;
}

void Numcoef::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Numcoef::GetParammin() const
{
    return m_Parammin;
}

void Numcoef::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Numcoef::GetParammax() const
{
    return m_Parammax;
}

void Numcoef::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Numcoef::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Numcoef::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Numcoef::GetOutmin() const
{
    return m_Outmin;
}

void Numcoef::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Numcoef::GetOutmax() const
{
    return m_Outmax;
}

void Numcoef::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Numcoef::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Numcoef::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Numcoef::GetLockscale() const
{
    return m_Lockscale;
}

void Numcoef::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Numcoef::GetRndmeth() const
{
    return m_Rndmeth;
}

void Numcoef::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Numcoef::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Numcoef::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Numcoef::GetSampletime() const
{
    return m_Sampletime;
}

void Numcoef::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
