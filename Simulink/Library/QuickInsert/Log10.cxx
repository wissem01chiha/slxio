#include "Log10.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Log10::Log10() {}

Log10::~Log10() {}

const std::string& Log10::GetOperator() const
{
  return m_Operator;
}

void Log10::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Log10::GetAlgorithmmethod() const
{
  return m_Algorithmmethod;
}

void Log10::SetAlgorithmmethod(const std::string& value)
{
  m_Algorithmmethod = value;
}

const std::string& Log10::GetSignedpower() const
{
  return m_Signedpower;
}

void Log10::SetSignedpower(const std::string& value)
{
  m_Signedpower = value;
}

const std::string& Log10::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Log10::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Log10::GetSampletime() const
{
  return m_Sampletime;
}

void Log10::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Log10::GetOutmin() const
{
  return m_Outmin;
}

void Log10::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Log10::GetOutmax() const
{
  return m_Outmax;
}

void Log10::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Log10::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Log10::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Log10::GetLockscale() const
{
  return m_Lockscale;
}

void Log10::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Log10::GetRndmeth() const
{
  return m_Rndmeth;
}

void Log10::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Log10::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Log10::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Log10::GetIntermediateresultsdatatypestr() const
{
  return m_Intermediateresultsdatatypestr;
}

void Log10::SetIntermediateresultsdatatypestr(const std::string& value)
{
  m_Intermediateresultsdatatypestr = value;
}

const std::string& Log10::GetAlgorithmtype() const
{
  return m_Algorithmtype;
}

void Log10::SetAlgorithmtype(const std::string& value)
{
  m_Algorithmtype = value;
}

const std::string& Log10::GetIterations() const
{
  return m_Iterations;
}

void Log10::SetIterations(const std::string& value)
{
  m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
