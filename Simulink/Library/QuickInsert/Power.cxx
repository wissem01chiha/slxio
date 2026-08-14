#include "Power.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Power::Power() {}

Power::~Power() {}

const std::string& Power::GetOperator() const
{
  return m_Operator;
}

void Power::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Power::GetAlgorithmmethod() const
{
  return m_Algorithmmethod;
}

void Power::SetAlgorithmmethod(const std::string& value)
{
  m_Algorithmmethod = value;
}

const std::string& Power::GetSignedpower() const
{
  return m_Signedpower;
}

void Power::SetSignedpower(const std::string& value)
{
  m_Signedpower = value;
}

const std::string& Power::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Power::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Power::GetSampletime() const
{
  return m_Sampletime;
}

void Power::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Power::GetOutmin() const
{
  return m_Outmin;
}

void Power::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Power::GetOutmax() const
{
  return m_Outmax;
}

void Power::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Power::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Power::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Power::GetLockscale() const
{
  return m_Lockscale;
}

void Power::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Power::GetRndmeth() const
{
  return m_Rndmeth;
}

void Power::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Power::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Power::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Power::GetIntermediateresultsdatatypestr() const
{
  return m_Intermediateresultsdatatypestr;
}

void Power::SetIntermediateresultsdatatypestr(const std::string& value)
{
  m_Intermediateresultsdatatypestr = value;
}

const std::string& Power::GetAlgorithmtype() const
{
  return m_Algorithmtype;
}

void Power::SetAlgorithmtype(const std::string& value)
{
  m_Algorithmtype = value;
}

const std::string& Power::GetIterations() const
{
  return m_Iterations;
}

void Power::SetIterations(const std::string& value)
{
  m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
