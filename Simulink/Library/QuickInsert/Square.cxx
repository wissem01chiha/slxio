#include "Square.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Square::Square() {}

Square::~Square() {}

const std::string& Square::GetOperator() const
{
  return m_Operator;
}

void Square::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Square::GetAlgorithmmethod() const
{
  return m_Algorithmmethod;
}

void Square::SetAlgorithmmethod(const std::string& value)
{
  m_Algorithmmethod = value;
}

const std::string& Square::GetSignedpower() const
{
  return m_Signedpower;
}

void Square::SetSignedpower(const std::string& value)
{
  m_Signedpower = value;
}

const std::string& Square::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Square::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Square::GetSampletime() const
{
  return m_Sampletime;
}

void Square::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Square::GetOutmin() const
{
  return m_Outmin;
}

void Square::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Square::GetOutmax() const
{
  return m_Outmax;
}

void Square::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Square::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Square::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Square::GetLockscale() const
{
  return m_Lockscale;
}

void Square::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Square::GetRndmeth() const
{
  return m_Rndmeth;
}

void Square::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Square::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Square::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Square::GetIntermediateresultsdatatypestr() const
{
  return m_Intermediateresultsdatatypestr;
}

void Square::SetIntermediateresultsdatatypestr(const std::string& value)
{
  m_Intermediateresultsdatatypestr = value;
}

const std::string& Square::GetAlgorithmtype() const
{
  return m_Algorithmtype;
}

void Square::SetAlgorithmtype(const std::string& value)
{
  m_Algorithmtype = value;
}

const std::string& Square::GetIterations() const
{
  return m_Iterations;
}

void Square::SetIterations(const std::string& value)
{
  m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
