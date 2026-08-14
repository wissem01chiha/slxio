#include "MagnitudeSquared.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

MagnitudeSquared::MagnitudeSquared() {}

MagnitudeSquared::~MagnitudeSquared() {}

const std::string& MagnitudeSquared::GetOperator() const { return m_Operator; }

void MagnitudeSquared::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& MagnitudeSquared::GetAlgorithmmethod() const
{
    return m_Algorithmmethod;
}

void MagnitudeSquared::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& MagnitudeSquared::GetSignedpower() const
{
    return m_Signedpower;
}

void MagnitudeSquared::SetSignedpower(const std::string& value)
{
    m_Signedpower = value;
}

const std::string& MagnitudeSquared::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void MagnitudeSquared::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& MagnitudeSquared::GetSampletime() const
{
    return m_Sampletime;
}

void MagnitudeSquared::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& MagnitudeSquared::GetOutmin() const { return m_Outmin; }

void MagnitudeSquared::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& MagnitudeSquared::GetOutmax() const { return m_Outmax; }

void MagnitudeSquared::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& MagnitudeSquared::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MagnitudeSquared::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MagnitudeSquared::GetLockscale() const
{
    return m_Lockscale;
}

void MagnitudeSquared::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& MagnitudeSquared::GetRndmeth() const { return m_Rndmeth; }

void MagnitudeSquared::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& MagnitudeSquared::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void MagnitudeSquared::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& MagnitudeSquared::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void MagnitudeSquared::SetIntermediateresultsdatatypestr(
    const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& MagnitudeSquared::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void MagnitudeSquared::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& MagnitudeSquared::GetIterations() const
{
    return m_Iterations;
}

void MagnitudeSquared::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
