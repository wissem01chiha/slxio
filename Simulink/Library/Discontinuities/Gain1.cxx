#include "Gain1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Gain1::Gain1() {}

Gain1::~Gain1() {}

const std::string& Gain1::GetGain() const
{
    return m_Gain;
}

void Gain1::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Gain1::GetMultiplication() const
{
    return m_Multiplication;
}

void Gain1::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Gain1::GetParammin() const
{
    return m_Parammin;
}

void Gain1::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Gain1::GetParammax() const
{
    return m_Parammax;
}

void Gain1::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Gain1::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Gain1::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Gain1::GetOutmin() const
{
    return m_Outmin;
}

void Gain1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Gain1::GetOutmax() const
{
    return m_Outmax;
}

void Gain1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Gain1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Gain1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Gain1::GetLockscale() const
{
    return m_Lockscale;
}

void Gain1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Gain1::GetRndmeth() const
{
    return m_Rndmeth;
}

void Gain1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Gain1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Gain1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Gain1::GetSampletime() const
{
    return m_Sampletime;
}

void Gain1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
