#include "Conj.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Conj::Conj() {}

Conj::~Conj() {}

const std::string& Conj::GetOperator() const
{
    return m_Operator;
}

void Conj::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Conj::GetAlgorithmmethod() const
{
    return m_Algorithmmethod;
}

void Conj::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& Conj::GetSignedpower() const
{
    return m_Signedpower;
}

void Conj::SetSignedpower(const std::string& value)
{
    m_Signedpower = value;
}

const std::string& Conj::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Conj::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Conj::GetSampletime() const
{
    return m_Sampletime;
}

void Conj::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Conj::GetOutmin() const
{
    return m_Outmin;
}

void Conj::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Conj::GetOutmax() const
{
    return m_Outmax;
}

void Conj::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Conj::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Conj::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Conj::GetLockscale() const
{
    return m_Lockscale;
}

void Conj::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Conj::GetRndmeth() const
{
    return m_Rndmeth;
}

void Conj::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Conj::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Conj::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Conj::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void Conj::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& Conj::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void Conj::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& Conj::GetIterations() const
{
    return m_Iterations;
}

void Conj::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
