#include "SetpointWeightingDerivative.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SetpointWeightingDerivative::SetpointWeightingDerivative() {}

SetpointWeightingDerivative::~SetpointWeightingDerivative() {}

const std::string& SetpointWeightingDerivative::GetGain() const
{
    return m_Gain;
}

void SetpointWeightingDerivative::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& SetpointWeightingDerivative::GetMultiplication() const
{
    return m_Multiplication;
}

void SetpointWeightingDerivative::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& SetpointWeightingDerivative::GetParammin() const
{
    return m_Parammin;
}

void SetpointWeightingDerivative::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& SetpointWeightingDerivative::GetParammax() const
{
    return m_Parammax;
}

void SetpointWeightingDerivative::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& SetpointWeightingDerivative::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void SetpointWeightingDerivative::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& SetpointWeightingDerivative::GetOutmin() const
{
    return m_Outmin;
}

void SetpointWeightingDerivative::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SetpointWeightingDerivative::GetOutmax() const
{
    return m_Outmax;
}

void SetpointWeightingDerivative::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SetpointWeightingDerivative::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SetpointWeightingDerivative::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SetpointWeightingDerivative::GetLockscale() const
{
    return m_Lockscale;
}

void SetpointWeightingDerivative::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SetpointWeightingDerivative::GetRndmeth() const
{
    return m_Rndmeth;
}

void SetpointWeightingDerivative::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SetpointWeightingDerivative::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SetpointWeightingDerivative::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& SetpointWeightingDerivative::GetSampletime() const
{
    return m_Sampletime;
}

void SetpointWeightingDerivative::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
