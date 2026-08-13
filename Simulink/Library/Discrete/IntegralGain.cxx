#include "IntegralGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IntegralGain::IntegralGain() {}

IntegralGain::~IntegralGain() {}

const std::string& IntegralGain::GetGain() const
{
    return m_Gain;
}

void IntegralGain::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& IntegralGain::GetMultiplication() const
{
    return m_Multiplication;
}

void IntegralGain::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& IntegralGain::GetParammin() const
{
    return m_Parammin;
}

void IntegralGain::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& IntegralGain::GetParammax() const
{
    return m_Parammax;
}

void IntegralGain::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& IntegralGain::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void IntegralGain::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& IntegralGain::GetOutmin() const
{
    return m_Outmin;
}

void IntegralGain::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& IntegralGain::GetOutmax() const
{
    return m_Outmax;
}

void IntegralGain::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& IntegralGain::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void IntegralGain::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& IntegralGain::GetLockscale() const
{
    return m_Lockscale;
}

void IntegralGain::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& IntegralGain::GetRndmeth() const
{
    return m_Rndmeth;
}

void IntegralGain::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& IntegralGain::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void IntegralGain::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& IntegralGain::GetSampletime() const
{
    return m_Sampletime;
}

void IntegralGain::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
