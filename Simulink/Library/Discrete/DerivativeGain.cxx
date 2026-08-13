#include "DerivativeGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DerivativeGain::DerivativeGain() {}

DerivativeGain::~DerivativeGain() {}

const std::string& DerivativeGain::GetGain() const
{
    return m_Gain;
}

void DerivativeGain::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& DerivativeGain::GetMultiplication() const
{
    return m_Multiplication;
}

void DerivativeGain::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& DerivativeGain::GetParammin() const
{
    return m_Parammin;
}

void DerivativeGain::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& DerivativeGain::GetParammax() const
{
    return m_Parammax;
}

void DerivativeGain::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& DerivativeGain::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void DerivativeGain::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& DerivativeGain::GetOutmin() const
{
    return m_Outmin;
}

void DerivativeGain::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DerivativeGain::GetOutmax() const
{
    return m_Outmax;
}

void DerivativeGain::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DerivativeGain::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DerivativeGain::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DerivativeGain::GetLockscale() const
{
    return m_Lockscale;
}

void DerivativeGain::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DerivativeGain::GetRndmeth() const
{
    return m_Rndmeth;
}

void DerivativeGain::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DerivativeGain::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DerivativeGain::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DerivativeGain::GetSampletime() const
{
    return m_Sampletime;
}

void DerivativeGain::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
