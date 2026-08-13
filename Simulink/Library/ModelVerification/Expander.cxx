#include "Expander.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Expander::Expander() {}

Expander::~Expander() {}

const std::string& Expander::GetGain() const
{
    return m_Gain;
}

void Expander::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Expander::GetMultiplication() const
{
    return m_Multiplication;
}

void Expander::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Expander::GetParammin() const
{
    return m_Parammin;
}

void Expander::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Expander::GetParammax() const
{
    return m_Parammax;
}

void Expander::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Expander::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Expander::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Expander::GetOutmin() const
{
    return m_Outmin;
}

void Expander::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Expander::GetOutmax() const
{
    return m_Outmax;
}

void Expander::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Expander::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Expander::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Expander::GetLockscale() const
{
    return m_Lockscale;
}

void Expander::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Expander::GetRndmeth() const
{
    return m_Rndmeth;
}

void Expander::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Expander::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Expander::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Expander::GetSampletime() const
{
    return m_Sampletime;
}

void Expander::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
