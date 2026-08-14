#include "Hypot.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Hypot::Hypot() {}

Hypot::~Hypot() {}

const std::string& Hypot::GetOperator() const { return m_Operator; }

void Hypot::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Hypot::GetAlgorithmmethod() const
{
    return m_Algorithmmethod;
}

void Hypot::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& Hypot::GetSignedpower() const { return m_Signedpower; }

void Hypot::SetSignedpower(const std::string& value) { m_Signedpower = value; }

const std::string& Hypot::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Hypot::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Hypot::GetSampletime() const { return m_Sampletime; }

void Hypot::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Hypot::GetOutmin() const { return m_Outmin; }

void Hypot::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Hypot::GetOutmax() const { return m_Outmax; }

void Hypot::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Hypot::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Hypot::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Hypot::GetLockscale() const { return m_Lockscale; }

void Hypot::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Hypot::GetRndmeth() const { return m_Rndmeth; }

void Hypot::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Hypot::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Hypot::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Hypot::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void Hypot::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& Hypot::GetAlgorithmtype() const { return m_Algorithmtype; }

void Hypot::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& Hypot::GetIterations() const { return m_Iterations; }

void Hypot::SetIterations(const std::string& value) { m_Iterations = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
