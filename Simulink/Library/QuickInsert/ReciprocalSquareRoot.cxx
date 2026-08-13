#include "ReciprocalSquareRoot.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ReciprocalSquareRoot::ReciprocalSquareRoot() {}

ReciprocalSquareRoot::~ReciprocalSquareRoot() {}

const std::string& ReciprocalSquareRoot::GetOperator() const
{
    return m_Operator;
}

void ReciprocalSquareRoot::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& ReciprocalSquareRoot::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void ReciprocalSquareRoot::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& ReciprocalSquareRoot::GetSampletime() const
{
    return m_Sampletime;
}

void ReciprocalSquareRoot::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& ReciprocalSquareRoot::GetOutmin() const
{
    return m_Outmin;
}

void ReciprocalSquareRoot::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ReciprocalSquareRoot::GetOutmax() const
{
    return m_Outmax;
}

void ReciprocalSquareRoot::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ReciprocalSquareRoot::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ReciprocalSquareRoot::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ReciprocalSquareRoot::GetLockscale() const
{
    return m_Lockscale;
}

void ReciprocalSquareRoot::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ReciprocalSquareRoot::GetRndmeth() const
{
    return m_Rndmeth;
}

void ReciprocalSquareRoot::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& ReciprocalSquareRoot::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void ReciprocalSquareRoot::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& ReciprocalSquareRoot::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void ReciprocalSquareRoot::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& ReciprocalSquareRoot::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void ReciprocalSquareRoot::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& ReciprocalSquareRoot::GetIterations() const
{
    return m_Iterations;
}

void ReciprocalSquareRoot::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
