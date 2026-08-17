#include "Sqrt.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Sqrt::Sqrt() {}

Sqrt::~Sqrt() {}

const std::string& Sqrt::GetOperator() const { return m_Operator; }

void Sqrt::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Sqrt::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Sqrt::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Sqrt::GetSampletime() const { return m_Sampletime; }

void Sqrt::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Sqrt::GetOutmin() const { return m_Outmin; }

void Sqrt::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Sqrt::GetOutmax() const { return m_Outmax; }

void Sqrt::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Sqrt::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Sqrt::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Sqrt::GetLockscale() const { return m_Lockscale; }

void Sqrt::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Sqrt::GetRndmeth() const { return m_Rndmeth; }

void Sqrt::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Sqrt::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Sqrt::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Sqrt::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void Sqrt::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& Sqrt::GetAlgorithmtype() const { return m_Algorithmtype; }

void Sqrt::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& Sqrt::GetIterations() const { return m_Iterations; }

void Sqrt::SetIterations(const std::string& value) { m_Iterations = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
