#include "Rising.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Rising::Rising() {}

Rising::~Rising() {}

const std::string& Rising::GetGain() const
{
    return m_Gain;
}

void Rising::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Rising::GetMultiplication() const
{
    return m_Multiplication;
}

void Rising::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Rising::GetParammin() const
{
    return m_Parammin;
}

void Rising::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Rising::GetParammax() const
{
    return m_Parammax;
}

void Rising::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Rising::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Rising::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Rising::GetOutmin() const
{
    return m_Outmin;
}

void Rising::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Rising::GetOutmax() const
{
    return m_Outmax;
}

void Rising::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Rising::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Rising::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Rising::GetLockscale() const
{
    return m_Lockscale;
}

void Rising::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Rising::GetRndmeth() const
{
    return m_Rndmeth;
}

void Rising::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Rising::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Rising::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Rising::GetSampletime() const
{
    return m_Sampletime;
}

void Rising::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
