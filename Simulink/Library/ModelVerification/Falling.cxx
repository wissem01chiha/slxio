#include "Falling.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Falling::Falling() {}

Falling::~Falling() {}

const std::string& Falling::GetGain() const
{
    return m_Gain;
}

void Falling::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Falling::GetMultiplication() const
{
    return m_Multiplication;
}

void Falling::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Falling::GetParammin() const
{
    return m_Parammin;
}

void Falling::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Falling::GetParammax() const
{
    return m_Parammax;
}

void Falling::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Falling::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Falling::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Falling::GetOutmin() const
{
    return m_Outmin;
}

void Falling::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Falling::GetOutmax() const
{
    return m_Outmax;
}

void Falling::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Falling::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Falling::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Falling::GetLockscale() const
{
    return m_Lockscale;
}

void Falling::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Falling::GetRndmeth() const
{
    return m_Rndmeth;
}

void Falling::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Falling::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Falling::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Falling::GetSampletime() const
{
    return m_Sampletime;
}

void Falling::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
