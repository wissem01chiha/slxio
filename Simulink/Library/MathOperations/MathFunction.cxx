#include "MathFunction.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

MathFunction::MathFunction() {}

MathFunction::~MathFunction() {}

const std::string& MathFunction::GetOperator() const { return m_Operator; }

void MathFunction::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& MathFunction::GetAlgorithmmethod() const
{
    return m_Algorithmmethod;
}

void MathFunction::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& MathFunction::GetSignedpower() const
{
    return m_Signedpower;
}

void MathFunction::SetSignedpower(const std::string& value)
{
    m_Signedpower = value;
}

const std::string& MathFunction::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void MathFunction::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& MathFunction::GetSampletime() const { return m_Sampletime; }

void MathFunction::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& MathFunction::GetOutmin() const { return m_Outmin; }

void MathFunction::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& MathFunction::GetOutmax() const { return m_Outmax; }

void MathFunction::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& MathFunction::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MathFunction::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MathFunction::GetLockscale() const { return m_Lockscale; }

void MathFunction::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& MathFunction::GetRndmeth() const { return m_Rndmeth; }

void MathFunction::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& MathFunction::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void MathFunction::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& MathFunction::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void MathFunction::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& MathFunction::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void MathFunction::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& MathFunction::GetIterations() const { return m_Iterations; }

void MathFunction::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
