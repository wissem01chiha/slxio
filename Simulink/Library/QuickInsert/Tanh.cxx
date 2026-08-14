#include "Tanh.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Tanh::Tanh() {}

Tanh::~Tanh() {}

const std::string& Tanh::GetOperator() const
{
  return m_Operator;
}

void Tanh::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Tanh::GetApproximationmethod() const
{
  return m_Approximationmethod;
}

void Tanh::SetApproximationmethod(const std::string& value)
{
  m_Approximationmethod = value;
}

const std::string& Tanh::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void Tanh::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& Tanh::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Tanh::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Tanh::GetInterpmethod() const
{
  return m_Interpmethod;
}

void Tanh::SetInterpmethod(const std::string& value)
{
  m_Interpmethod = value;
}

const std::string& Tanh::GetAngleunit() const
{
  return m_Angleunit;
}

void Tanh::SetAngleunit(const std::string& value)
{
  m_Angleunit = value;
}

const std::string& Tanh::GetNumberofdatapoints() const
{
  return m_Numberofdatapoints;
}

void Tanh::SetNumberofdatapoints(const std::string& value)
{
  m_Numberofdatapoints = value;
}

const std::string& Tanh::GetTabledatatypestr() const
{
  return m_Tabledatatypestr;
}

void Tanh::SetTabledatatypestr(const std::string& value)
{
  m_Tabledatatypestr = value;
}

const std::string& Tanh::GetRemoveprotectionagainstoutofrangeinput() const
{
  return m_Removeprotectionagainstoutofrangeinput;
}

void Tanh::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
  m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Tanh::GetSampletime() const
{
  return m_Sampletime;
}

void Tanh::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
