#include "OutputMatrixC.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

OutputMatrixC::OutputMatrixC() {}

OutputMatrixC::~OutputMatrixC() {}

const std::string& OutputMatrixC::GetGain() const
{
    return m_Gain;
}

void OutputMatrixC::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& OutputMatrixC::GetMultiplication() const
{
    return m_Multiplication;
}

void OutputMatrixC::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& OutputMatrixC::GetParammin() const
{
    return m_Parammin;
}

void OutputMatrixC::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& OutputMatrixC::GetParammax() const
{
    return m_Parammax;
}

void OutputMatrixC::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& OutputMatrixC::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void OutputMatrixC::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& OutputMatrixC::GetOutmin() const
{
    return m_Outmin;
}

void OutputMatrixC::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& OutputMatrixC::GetOutmax() const
{
    return m_Outmax;
}

void OutputMatrixC::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& OutputMatrixC::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void OutputMatrixC::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& OutputMatrixC::GetLockscale() const
{
    return m_Lockscale;
}

void OutputMatrixC::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& OutputMatrixC::GetRndmeth() const
{
    return m_Rndmeth;
}

void OutputMatrixC::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& OutputMatrixC::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void OutputMatrixC::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& OutputMatrixC::GetSampletime() const
{
    return m_Sampletime;
}

void OutputMatrixC::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
