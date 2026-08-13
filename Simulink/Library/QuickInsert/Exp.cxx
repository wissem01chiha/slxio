#include "Exp.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Exp::Exp() {}

Exp::~Exp() {}

const std::string& Exp::GetOperator() const
{
    return m_Operator;
}

void Exp::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Exp::GetAlgorithmmethod() const
{
    return m_Algorithmmethod;
}

void Exp::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& Exp::GetSignedpower() const
{
    return m_Signedpower;
}

void Exp::SetSignedpower(const std::string& value)
{
    m_Signedpower = value;
}

const std::string& Exp::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Exp::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Exp::GetSampletime() const
{
    return m_Sampletime;
}

void Exp::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Exp::GetOutmin() const
{
    return m_Outmin;
}

void Exp::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Exp::GetOutmax() const
{
    return m_Outmax;
}

void Exp::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Exp::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Exp::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Exp::GetLockscale() const
{
    return m_Lockscale;
}

void Exp::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Exp::GetRndmeth() const
{
    return m_Rndmeth;
}

void Exp::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Exp::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Exp::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Exp::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void Exp::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& Exp::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void Exp::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& Exp::GetIterations() const
{
    return m_Iterations;
}

void Exp::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
