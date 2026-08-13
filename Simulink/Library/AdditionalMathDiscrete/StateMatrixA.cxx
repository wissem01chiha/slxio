#include "StateMatrixA.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

StateMatrixA::StateMatrixA() {}

StateMatrixA::~StateMatrixA() {}

const std::string& StateMatrixA::GetGain() const
{
    return m_Gain;
}

void StateMatrixA::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& StateMatrixA::GetMultiplication() const
{
    return m_Multiplication;
}

void StateMatrixA::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& StateMatrixA::GetParammin() const
{
    return m_Parammin;
}

void StateMatrixA::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& StateMatrixA::GetParammax() const
{
    return m_Parammax;
}

void StateMatrixA::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& StateMatrixA::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void StateMatrixA::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& StateMatrixA::GetOutmin() const
{
    return m_Outmin;
}

void StateMatrixA::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& StateMatrixA::GetOutmax() const
{
    return m_Outmax;
}

void StateMatrixA::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& StateMatrixA::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void StateMatrixA::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& StateMatrixA::GetLockscale() const
{
    return m_Lockscale;
}

void StateMatrixA::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& StateMatrixA::GetRndmeth() const
{
    return m_Rndmeth;
}

void StateMatrixA::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& StateMatrixA::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void StateMatrixA::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& StateMatrixA::GetSampletime() const
{
    return m_Sampletime;
}

void StateMatrixA::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
