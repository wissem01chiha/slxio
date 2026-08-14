#include "CosJsin.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CosJsin::CosJsin() {}

CosJsin::~CosJsin() {}

const std::string& CosJsin::GetOperator() const
{
  return m_Operator;
}

void CosJsin::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& CosJsin::GetApproximationmethod() const
{
  return m_Approximationmethod;
}

void CosJsin::SetApproximationmethod(const std::string& value)
{
  m_Approximationmethod = value;
}

const std::string& CosJsin::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void CosJsin::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& CosJsin::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void CosJsin::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& CosJsin::GetInterpmethod() const
{
  return m_Interpmethod;
}

void CosJsin::SetInterpmethod(const std::string& value)
{
  m_Interpmethod = value;
}

const std::string& CosJsin::GetAngleunit() const
{
  return m_Angleunit;
}

void CosJsin::SetAngleunit(const std::string& value)
{
  m_Angleunit = value;
}

const std::string& CosJsin::GetNumberofdatapoints() const
{
  return m_Numberofdatapoints;
}

void CosJsin::SetNumberofdatapoints(const std::string& value)
{
  m_Numberofdatapoints = value;
}

const std::string& CosJsin::GetTabledatatypestr() const
{
  return m_Tabledatatypestr;
}

void CosJsin::SetTabledatatypestr(const std::string& value)
{
  m_Tabledatatypestr = value;
}

const std::string& CosJsin::GetRemoveprotectionagainstoutofrangeinput() const
{
  return m_Removeprotectionagainstoutofrangeinput;
}

void CosJsin::SetRemoveprotectionagainstoutofrangeinput(
  const std::string& value)
{
  m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& CosJsin::GetSampletime() const
{
  return m_Sampletime;
}

void CosJsin::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
