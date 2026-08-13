#include "FilterCoefficient.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FilterCoefficient::FilterCoefficient() {}

FilterCoefficient::~FilterCoefficient() {}

const std::string& FilterCoefficient::GetGain() const
{
    return m_Gain;
}

void FilterCoefficient::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& FilterCoefficient::GetMultiplication() const
{
    return m_Multiplication;
}

void FilterCoefficient::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& FilterCoefficient::GetParammin() const
{
    return m_Parammin;
}

void FilterCoefficient::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& FilterCoefficient::GetParammax() const
{
    return m_Parammax;
}

void FilterCoefficient::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& FilterCoefficient::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void FilterCoefficient::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& FilterCoefficient::GetOutmin() const
{
    return m_Outmin;
}

void FilterCoefficient::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& FilterCoefficient::GetOutmax() const
{
    return m_Outmax;
}

void FilterCoefficient::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& FilterCoefficient::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FilterCoefficient::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FilterCoefficient::GetLockscale() const
{
    return m_Lockscale;
}

void FilterCoefficient::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FilterCoefficient::GetRndmeth() const
{
    return m_Rndmeth;
}

void FilterCoefficient::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& FilterCoefficient::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void FilterCoefficient::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& FilterCoefficient::GetSampletime() const
{
    return m_Sampletime;
}

void FilterCoefficient::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
