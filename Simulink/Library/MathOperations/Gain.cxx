#include "Gain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Gain::Gain() {}

Gain::~Gain() {}

const std::string& Gain::GetGain() const
{
    return m_Gain;
}

void Gain::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Gain::GetMultiplication() const
{
    return m_Multiplication;
}

void Gain::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Gain::GetParammin() const
{
    return m_Parammin;
}

void Gain::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Gain::GetParammax() const
{
    return m_Parammax;
}

void Gain::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Gain::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Gain::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Gain::GetOutmin() const
{
    return m_Outmin;
}

void Gain::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Gain::GetOutmax() const
{
    return m_Outmax;
}

void Gain::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Gain::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Gain::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Gain::GetLockscale() const
{
    return m_Lockscale;
}

void Gain::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Gain::GetRndmeth() const
{
    return m_Rndmeth;
}

void Gain::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Gain::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Gain::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Gain::GetSampletime() const
{
    return m_Sampletime;
}

void Gain::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
