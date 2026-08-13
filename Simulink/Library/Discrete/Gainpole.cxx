#include "Gainpole.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Gainpole::Gainpole() {}

Gainpole::~Gainpole() {}

const std::string& Gainpole::GetGain() const
{
    return m_Gain;
}

void Gainpole::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Gainpole::GetMultiplication() const
{
    return m_Multiplication;
}

void Gainpole::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Gainpole::GetParammin() const
{
    return m_Parammin;
}

void Gainpole::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Gainpole::GetParammax() const
{
    return m_Parammax;
}

void Gainpole::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Gainpole::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Gainpole::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Gainpole::GetOutmin() const
{
    return m_Outmin;
}

void Gainpole::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Gainpole::GetOutmax() const
{
    return m_Outmax;
}

void Gainpole::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Gainpole::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Gainpole::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Gainpole::GetLockscale() const
{
    return m_Lockscale;
}

void Gainpole::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Gainpole::GetRndmeth() const
{
    return m_Rndmeth;
}

void Gainpole::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Gainpole::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Gainpole::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Gainpole::GetSampletime() const
{
    return m_Sampletime;
}

void Gainpole::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
