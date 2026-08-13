#include "Output.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Output::Output() {}

Output::~Output() {}

const std::string& Output::GetGain() const
{
    return m_Gain;
}

void Output::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& Output::GetMultiplication() const
{
    return m_Multiplication;
}

void Output::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& Output::GetParammin() const
{
    return m_Parammin;
}

void Output::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& Output::GetParammax() const
{
    return m_Parammax;
}

void Output::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& Output::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void Output::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& Output::GetOutmin() const
{
    return m_Outmin;
}

void Output::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Output::GetOutmax() const
{
    return m_Outmax;
}

void Output::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Output::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Output::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Output::GetLockscale() const
{
    return m_Lockscale;
}

void Output::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Output::GetRndmeth() const
{
    return m_Rndmeth;
}

void Output::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Output::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Output::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Output::GetSampletime() const
{
    return m_Sampletime;
}

void Output::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
