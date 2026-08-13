#include "SignedSqrt.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SignedSqrt::SignedSqrt() {}

SignedSqrt::~SignedSqrt() {}

const std::string& SignedSqrt::GetOperator() const
{
    return m_Operator;
}

void SignedSqrt::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& SignedSqrt::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void SignedSqrt::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& SignedSqrt::GetSampletime() const
{
    return m_Sampletime;
}

void SignedSqrt::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& SignedSqrt::GetOutmin() const
{
    return m_Outmin;
}

void SignedSqrt::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SignedSqrt::GetOutmax() const
{
    return m_Outmax;
}

void SignedSqrt::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SignedSqrt::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SignedSqrt::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SignedSqrt::GetLockscale() const
{
    return m_Lockscale;
}

void SignedSqrt::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SignedSqrt::GetRndmeth() const
{
    return m_Rndmeth;
}

void SignedSqrt::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SignedSqrt::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SignedSqrt::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& SignedSqrt::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void SignedSqrt::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& SignedSqrt::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void SignedSqrt::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& SignedSqrt::GetIterations() const
{
    return m_Iterations;
}

void SignedSqrt::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
