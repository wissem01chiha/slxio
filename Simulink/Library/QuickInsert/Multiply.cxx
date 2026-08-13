#include "Multiply.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Multiply::Multiply() {}

Multiply::~Multiply() {}

const std::string& Multiply::GetGain() const
{
    return m_Gain;
}

void Multiply::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Multiply::GetMultiplication() const
{
    return m_Multiplication;
}

void Multiply::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Multiply::GetParammin() const
{
    return m_Parammin;
}

void Multiply::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Multiply::GetParammax() const
{
    return m_Parammax;
}

void Multiply::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Multiply::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Multiply::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Multiply::GetOutmin() const
{
    return m_Outmin;
}

void Multiply::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Multiply::GetOutmax() const
{
    return m_Outmax;
}

void Multiply::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Multiply::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Multiply::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Multiply::GetLockscale() const
{
    return m_Lockscale;
}

void Multiply::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Multiply::GetRndmeth() const
{
    return m_Rndmeth;
}

void Multiply::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Multiply::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Multiply::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Multiply::GetSampletime() const
{
    return m_Sampletime;
}

void Multiply::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
