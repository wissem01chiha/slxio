#include "ProportionalGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ProportionalGain::ProportionalGain() {}

ProportionalGain::~ProportionalGain() {}

const std::string& ProportionalGain::GetGain() const
{
    return m_Gain;
}

void ProportionalGain::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& ProportionalGain::GetMultiplication() const
{
    return m_Multiplication;
}

void ProportionalGain::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& ProportionalGain::GetParammin() const
{
    return m_Parammin;
}

void ProportionalGain::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& ProportionalGain::GetParammax() const
{
    return m_Parammax;
}

void ProportionalGain::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& ProportionalGain::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void ProportionalGain::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& ProportionalGain::GetOutmin() const
{
    return m_Outmin;
}

void ProportionalGain::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ProportionalGain::GetOutmax() const
{
    return m_Outmax;
}

void ProportionalGain::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ProportionalGain::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ProportionalGain::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ProportionalGain::GetLockscale() const
{
    return m_Lockscale;
}

void ProportionalGain::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ProportionalGain::GetRndmeth() const
{
    return m_Rndmeth;
}

void ProportionalGain::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& ProportionalGain::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void ProportionalGain::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& ProportionalGain::GetSampletime() const
{
    return m_Sampletime;
}

void ProportionalGain::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
