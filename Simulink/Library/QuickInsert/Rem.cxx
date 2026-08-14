#include "Rem.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Rem::Rem() {}

Rem::~Rem() {}

const std::string& Rem::GetOperator() const { return m_Operator; }

void Rem::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Rem::GetAlgorithmmethod() const { return m_Algorithmmethod; }

void Rem::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& Rem::GetSignedpower() const { return m_Signedpower; }

void Rem::SetSignedpower(const std::string& value) { m_Signedpower = value; }

const std::string& Rem::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Rem::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Rem::GetSampletime() const { return m_Sampletime; }

void Rem::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Rem::GetOutmin() const { return m_Outmin; }

void Rem::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Rem::GetOutmax() const { return m_Outmax; }

void Rem::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Rem::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Rem::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Rem::GetLockscale() const { return m_Lockscale; }

void Rem::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Rem::GetRndmeth() const { return m_Rndmeth; }

void Rem::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Rem::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Rem::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Rem::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void Rem::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& Rem::GetAlgorithmtype() const { return m_Algorithmtype; }

void Rem::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& Rem::GetIterations() const { return m_Iterations; }

void Rem::SetIterations(const std::string& value) { m_Iterations = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
