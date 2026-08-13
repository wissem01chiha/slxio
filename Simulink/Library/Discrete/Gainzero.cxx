#include "Gainzero.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Gainzero::Gainzero() {}

Gainzero::~Gainzero() {}

const std::string& Gainzero::GetGain() const
{
    return m_Gain;
}

void Gainzero::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Gainzero::GetMultiplication() const
{
    return m_Multiplication;
}

void Gainzero::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Gainzero::GetParammin() const
{
    return m_Parammin;
}

void Gainzero::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Gainzero::GetParammax() const
{
    return m_Parammax;
}

void Gainzero::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Gainzero::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Gainzero::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Gainzero::GetOutmin() const
{
    return m_Outmin;
}

void Gainzero::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Gainzero::GetOutmax() const
{
    return m_Outmax;
}

void Gainzero::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Gainzero::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Gainzero::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Gainzero::GetLockscale() const
{
    return m_Lockscale;
}

void Gainzero::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Gainzero::GetRndmeth() const
{
    return m_Rndmeth;
}

void Gainzero::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Gainzero::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Gainzero::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Gainzero::GetSampletime() const
{
    return m_Sampletime;
}

void Gainzero::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
