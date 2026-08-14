#include "Ln.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Ln::Ln() {}

Ln::~Ln() {}

const std::string& Ln::GetOperator() const { return m_Operator; }

void Ln::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Ln::GetAlgorithmmethod() const { return m_Algorithmmethod; }

void Ln::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& Ln::GetSignedpower() const { return m_Signedpower; }

void Ln::SetSignedpower(const std::string& value) { m_Signedpower = value; }

const std::string& Ln::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Ln::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Ln::GetSampletime() const { return m_Sampletime; }

void Ln::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Ln::GetOutmin() const { return m_Outmin; }

void Ln::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Ln::GetOutmax() const { return m_Outmax; }

void Ln::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Ln::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Ln::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Ln::GetLockscale() const { return m_Lockscale; }

void Ln::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Ln::GetRndmeth() const { return m_Rndmeth; }

void Ln::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Ln::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Ln::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Ln::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void Ln::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& Ln::GetAlgorithmtype() const { return m_Algorithmtype; }

void Ln::SetAlgorithmtype(const std::string& value) { m_Algorithmtype = value; }

const std::string& Ln::GetIterations() const { return m_Iterations; }

void Ln::SetIterations(const std::string& value) { m_Iterations = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
