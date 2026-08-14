#include "Transpose.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Transpose::Transpose() {}

Transpose::~Transpose() {}

const std::string& Transpose::GetOperator() const
{
  return m_Operator;
}

void Transpose::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Transpose::GetAlgorithmmethod() const
{
  return m_Algorithmmethod;
}

void Transpose::SetAlgorithmmethod(const std::string& value)
{
  m_Algorithmmethod = value;
}

const std::string& Transpose::GetSignedpower() const
{
  return m_Signedpower;
}

void Transpose::SetSignedpower(const std::string& value)
{
  m_Signedpower = value;
}

const std::string& Transpose::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Transpose::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Transpose::GetSampletime() const
{
  return m_Sampletime;
}

void Transpose::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Transpose::GetOutmin() const
{
  return m_Outmin;
}

void Transpose::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Transpose::GetOutmax() const
{
  return m_Outmax;
}

void Transpose::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Transpose::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Transpose::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Transpose::GetLockscale() const
{
  return m_Lockscale;
}

void Transpose::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Transpose::GetRndmeth() const
{
  return m_Rndmeth;
}

void Transpose::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Transpose::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Transpose::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Transpose::GetIntermediateresultsdatatypestr() const
{
  return m_Intermediateresultsdatatypestr;
}

void Transpose::SetIntermediateresultsdatatypestr(const std::string& value)
{
  m_Intermediateresultsdatatypestr = value;
}

const std::string& Transpose::GetAlgorithmtype() const
{
  return m_Algorithmtype;
}

void Transpose::SetAlgorithmtype(const std::string& value)
{
  m_Algorithmtype = value;
}

const std::string& Transpose::GetIterations() const
{
  return m_Iterations;
}

void Transpose::SetIterations(const std::string& value)
{
  m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
