#include "InputMatrixB.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

InputMatrixB::InputMatrixB() {}

InputMatrixB::~InputMatrixB() {}

const std::string& InputMatrixB::GetGain() const
{
    return m_Gain;
}

void InputMatrixB::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& InputMatrixB::GetMultiplication() const
{
    return m_Multiplication;
}

void InputMatrixB::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& InputMatrixB::GetParammin() const
{
    return m_Parammin;
}

void InputMatrixB::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& InputMatrixB::GetParammax() const
{
    return m_Parammax;
}

void InputMatrixB::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& InputMatrixB::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void InputMatrixB::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& InputMatrixB::GetOutmin() const
{
    return m_Outmin;
}

void InputMatrixB::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& InputMatrixB::GetOutmax() const
{
    return m_Outmax;
}

void InputMatrixB::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& InputMatrixB::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void InputMatrixB::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& InputMatrixB::GetLockscale() const
{
    return m_Lockscale;
}

void InputMatrixB::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& InputMatrixB::GetRndmeth() const
{
    return m_Rndmeth;
}

void InputMatrixB::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& InputMatrixB::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void InputMatrixB::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& InputMatrixB::GetSampletime() const
{
    return m_Sampletime;
}

void InputMatrixB::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
