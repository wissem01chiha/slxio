#include "SquareRoot.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SquareRoot::SquareRoot() {}

SquareRoot::~SquareRoot() {}

const std::string& SquareRoot::GetOperator() const { return m_Operator; }

void SquareRoot::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& SquareRoot::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void SquareRoot::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& SquareRoot::GetSampletime() const { return m_Sampletime; }

void SquareRoot::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& SquareRoot::GetOutmin() const { return m_Outmin; }

void SquareRoot::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& SquareRoot::GetOutmax() const { return m_Outmax; }

void SquareRoot::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& SquareRoot::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SquareRoot::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SquareRoot::GetLockscale() const { return m_Lockscale; }

void SquareRoot::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& SquareRoot::GetRndmeth() const { return m_Rndmeth; }

void SquareRoot::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& SquareRoot::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void SquareRoot::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& SquareRoot::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void SquareRoot::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& SquareRoot::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void SquareRoot::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& SquareRoot::GetIterations() const { return m_Iterations; }

void SquareRoot::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
