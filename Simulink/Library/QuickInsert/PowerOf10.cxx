#include "PowerOf10.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

PowerOf10::PowerOf10() {}

PowerOf10::~PowerOf10() {}

const std::string& PowerOf10::GetOperator() const { return m_Operator; }

void PowerOf10::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& PowerOf10::GetAlgorithmmethod() const
{
    return m_Algorithmmethod;
}

void PowerOf10::SetAlgorithmmethod(const std::string& value)
{
    m_Algorithmmethod = value;
}

const std::string& PowerOf10::GetSignedpower() const { return m_Signedpower; }

void PowerOf10::SetSignedpower(const std::string& value)
{
    m_Signedpower = value;
}

const std::string& PowerOf10::GetOutputsignaltype() const
{
    return m_Outputsignaltype;
}

void PowerOf10::SetOutputsignaltype(const std::string& value)
{
    m_Outputsignaltype = value;
}

const std::string& PowerOf10::GetSampletime() const { return m_Sampletime; }

void PowerOf10::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& PowerOf10::GetOutmin() const { return m_Outmin; }

void PowerOf10::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& PowerOf10::GetOutmax() const { return m_Outmax; }

void PowerOf10::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& PowerOf10::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void PowerOf10::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& PowerOf10::GetLockscale() const { return m_Lockscale; }

void PowerOf10::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& PowerOf10::GetRndmeth() const { return m_Rndmeth; }

void PowerOf10::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& PowerOf10::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void PowerOf10::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& PowerOf10::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void PowerOf10::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

const std::string& PowerOf10::GetAlgorithmtype() const
{
    return m_Algorithmtype;
}

void PowerOf10::SetAlgorithmtype(const std::string& value)
{
    m_Algorithmtype = value;
}

const std::string& PowerOf10::GetIterations() const { return m_Iterations; }

void PowerOf10::SetIterations(const std::string& value)
{
    m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
