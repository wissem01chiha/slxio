#include "Cosh.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Cosh::Cosh() {}

Cosh::~Cosh() {}

const std::string& Cosh::GetOperator() const
{
  return m_Operator;
}

void Cosh::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Cosh::GetApproximationmethod() const
{
  return m_Approximationmethod;
}

void Cosh::SetApproximationmethod(const std::string& value)
{
  m_Approximationmethod = value;
}

const std::string& Cosh::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void Cosh::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& Cosh::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Cosh::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Cosh::GetInterpmethod() const
{
  return m_Interpmethod;
}

void Cosh::SetInterpmethod(const std::string& value)
{
  m_Interpmethod = value;
}

const std::string& Cosh::GetAngleunit() const
{
  return m_Angleunit;
}

void Cosh::SetAngleunit(const std::string& value)
{
  m_Angleunit = value;
}

const std::string& Cosh::GetNumberofdatapoints() const
{
  return m_Numberofdatapoints;
}

void Cosh::SetNumberofdatapoints(const std::string& value)
{
  m_Numberofdatapoints = value;
}

const std::string& Cosh::GetTabledatatypestr() const
{
  return m_Tabledatatypestr;
}

void Cosh::SetTabledatatypestr(const std::string& value)
{
  m_Tabledatatypestr = value;
}

const std::string& Cosh::GetRemoveprotectionagainstoutofrangeinput() const
{
  return m_Removeprotectionagainstoutofrangeinput;
}

void Cosh::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
  m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Cosh::GetSampletime() const
{
  return m_Sampletime;
}

void Cosh::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
