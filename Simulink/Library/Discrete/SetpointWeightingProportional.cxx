#include "SetpointWeightingProportional.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SetpointWeightingProportional::SetpointWeightingProportional() {}

SetpointWeightingProportional::~SetpointWeightingProportional() {}

const std::string& SetpointWeightingProportional::GetGain() const
{
    return m_Gain;
}

void SetpointWeightingProportional::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& SetpointWeightingProportional::GetMultiplication() const
{
    return m_Multiplication;
}

void SetpointWeightingProportional::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& SetpointWeightingProportional::GetParammin() const
{
    return m_Parammin;
}

void SetpointWeightingProportional::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& SetpointWeightingProportional::GetParammax() const
{
    return m_Parammax;
}

void SetpointWeightingProportional::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& SetpointWeightingProportional::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void SetpointWeightingProportional::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& SetpointWeightingProportional::GetOutmin() const
{
    return m_Outmin;
}

void SetpointWeightingProportional::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SetpointWeightingProportional::GetOutmax() const
{
    return m_Outmax;
}

void SetpointWeightingProportional::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SetpointWeightingProportional::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SetpointWeightingProportional::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SetpointWeightingProportional::GetLockscale() const
{
    return m_Lockscale;
}

void SetpointWeightingProportional::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SetpointWeightingProportional::GetRndmeth() const
{
    return m_Rndmeth;
}

void SetpointWeightingProportional::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SetpointWeightingProportional::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SetpointWeightingProportional::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& SetpointWeightingProportional::GetSampletime() const
{
    return m_Sampletime;
}

void SetpointWeightingProportional::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
