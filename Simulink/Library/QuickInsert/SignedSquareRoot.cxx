#include "SignedSquareRoot.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SignedSquareRoot::SignedSquareRoot() {}

SignedSquareRoot::~SignedSquareRoot() {}

const std::string& SignedSquareRoot::GetOperator() const { return m_Operator; }

void SignedSquareRoot::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& SignedSquareRoot::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void SignedSquareRoot::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& SignedSquareRoot::GetSampletime() const
{
    return m_Sampletime;
}

void SignedSquareRoot::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& SignedSquareRoot::GetOutmin() const { return m_Outmin; }

void SignedSquareRoot::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& SignedSquareRoot::GetOutmax() const { return m_Outmax; }

void SignedSquareRoot::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& SignedSquareRoot::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SignedSquareRoot::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SignedSquareRoot::GetLockscale() const
{
    return m_Lockscale;
}

void SignedSquareRoot::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SignedSquareRoot::GetRndmeth() const { return m_Rndmeth; }

void SignedSquareRoot::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& SignedSquareRoot::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SignedSquareRoot::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& SignedSquareRoot::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void SignedSquareRoot::SetIntermediateresultsdatatypestr(
    const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& SignedSquareRoot::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void SignedSquareRoot::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& SignedSquareRoot::GetIterations() const
{
    return m_Iterations;
}

void SignedSquareRoot::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
