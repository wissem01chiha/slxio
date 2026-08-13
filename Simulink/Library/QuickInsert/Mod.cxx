#include "Mod.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Mod::Mod() {}

Mod::~Mod() {}

const std::string& Mod::GetOperator() const
{
    return m_Operator;
}

void Mod::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Mod::GetAlgorithmmethod() const
{
    return m_Algorithmmethod;
}

void Mod::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& Mod::GetSignedpower() const
{
    return m_Signedpower;
}

void Mod::SetSignedpower(const std::string& value)
{
    m_Signedpower = value;
}

const std::string& Mod::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void Mod::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& Mod::GetSampletime() const
{
    return m_Sampletime;
}

void Mod::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Mod::GetOutmin() const
{
    return m_Outmin;
}

void Mod::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Mod::GetOutmax() const
{
    return m_Outmax;
}

void Mod::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Mod::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Mod::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Mod::GetLockscale() const
{
    return m_Lockscale;
}

void Mod::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Mod::GetRndmeth() const
{
    return m_Rndmeth;
}

void Mod::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Mod::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Mod::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Mod::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void Mod::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& Mod::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void Mod::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& Mod::GetIterations() const
{
    return m_Iterations;
}

void Mod::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
