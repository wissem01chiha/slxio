#include "Hermitian.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Hermitian::Hermitian() {}

Hermitian::~Hermitian() {}

const std::string& Hermitian::GetOperator() const
{
  return m_Operator;
}

void Hermitian::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Hermitian::GetAlgorithmmethod() const
{
  return m_Algorithmmethod;
}

void Hermitian::SetAlgorithmmethod(const std::string& value)
{
  m_Algorithmmethod = value;
}

const std::string& Hermitian::GetSignedpower() const
{
  return m_Signedpower;
}

void Hermitian::SetSignedpower(const std::string& value)
{
  m_Signedpower = value;
}

const std::string& Hermitian::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Hermitian::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Hermitian::GetSampletime() const
{
  return m_Sampletime;
}

void Hermitian::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Hermitian::GetOutmin() const
{
  return m_Outmin;
}

void Hermitian::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Hermitian::GetOutmax() const
{
  return m_Outmax;
}

void Hermitian::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Hermitian::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Hermitian::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Hermitian::GetLockscale() const
{
  return m_Lockscale;
}

void Hermitian::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Hermitian::GetRndmeth() const
{
  return m_Rndmeth;
}

void Hermitian::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Hermitian::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Hermitian::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Hermitian::GetIntermediateresultsdatatypestr() const
{
  return m_Intermediateresultsdatatypestr;
}

void Hermitian::SetIntermediateresultsdatatypestr(const std::string& value)
{
  m_Intermediateresultsdatatypestr = value;
}

const std::string& Hermitian::GetAlgorithmtype() const
{
  return m_Algorithmtype;
}

void Hermitian::SetAlgorithmtype(const std::string& value)
{
  m_Algorithmtype = value;
}

const std::string& Hermitian::GetIterations() const
{
  return m_Iterations;
}

void Hermitian::SetIterations(const std::string& value)
{
  m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
