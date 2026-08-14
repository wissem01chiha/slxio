#include "ReciprocalSqrt.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ReciprocalSqrt::ReciprocalSqrt() {}

ReciprocalSqrt::~ReciprocalSqrt() {}

const std::string& ReciprocalSqrt::GetOperator() const
{
  return m_Operator;
}

void ReciprocalSqrt::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& ReciprocalSqrt::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void ReciprocalSqrt::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& ReciprocalSqrt::GetSampletime() const
{
  return m_Sampletime;
}

void ReciprocalSqrt::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& ReciprocalSqrt::GetOutmin() const
{
  return m_Outmin;
}

void ReciprocalSqrt::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& ReciprocalSqrt::GetOutmax() const
{
  return m_Outmax;
}

void ReciprocalSqrt::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& ReciprocalSqrt::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void ReciprocalSqrt::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& ReciprocalSqrt::GetLockscale() const
{
  return m_Lockscale;
}

void ReciprocalSqrt::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& ReciprocalSqrt::GetRndmeth() const
{
  return m_Rndmeth;
}

void ReciprocalSqrt::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& ReciprocalSqrt::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void ReciprocalSqrt::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& ReciprocalSqrt::GetIntermediateresultsdatatypestr() const
{
  return m_Intermediateresultsdatatypestr;
}

void ReciprocalSqrt::SetIntermediateresultsdatatypestr(const std::string& value)
{
  m_Intermediateresultsdatatypestr = value;
}

const std::string& ReciprocalSqrt::GetAlgorithmtype() const
{
  return m_Algorithmtype;
}

void ReciprocalSqrt::SetAlgorithmtype(const std::string& value)
{
  m_Algorithmtype = value;
}

const std::string& ReciprocalSqrt::GetIterations() const
{
  return m_Iterations;
}

void ReciprocalSqrt::SetIterations(const std::string& value)
{
  m_Iterations = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
