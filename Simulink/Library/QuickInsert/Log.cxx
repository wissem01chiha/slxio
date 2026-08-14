#include "Log.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Log::Log() {}

Log::~Log() {}

const std::string& Log::GetOperator() const
{
  return m_Operator;
}

void Log::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Log::GetAlgorithmmethod() const
{
  return m_Algorithmmethod;
}

void Log::SetAlgorithmmethod(const std::string& value)
{
  m_Algorithmmethod = value;
}

const std::string& Log::GetSignedpower() const
{
  return m_Signedpower;
}

void Log::SetSignedpower(const std::string& value)
{
  m_Signedpower = value;
}

const std::string& Log::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Log::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Log::GetSampletime() const
{
  return m_Sampletime;
}

void Log::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Log::GetOutmin() const
{
  return m_Outmin;
}

void Log::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& Log::GetOutmax() const
{
  return m_Outmax;
}

void Log::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& Log::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Log::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Log::GetLockscale() const
{
  return m_Lockscale;
}

void Log::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& Log::GetRndmeth() const
{
  return m_Rndmeth;
}

void Log::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& Log::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void Log::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& Log::GetIntermediateresultsdatatypestr() const
{
  return m_Intermediateresultsdatatypestr;
}

void Log::SetIntermediateresultsdatatypestr(const std::string& value)
{
  m_Intermediateresultsdatatypestr = value;
}

const std::string& Log::GetAlgorithmtype() const
{
  return m_Algorithmtype;
}

void Log::SetAlgorithmtype(const std::string& value)
{
  m_Algorithmtype = value;
}

const std::string& Log::GetIterations() const
{
  return m_Iterations;
}

void Log::SetIterations(const std::string& value)
{
  m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
