#include "Cos.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Cos::Cos() {}

Cos::~Cos() {}

const std::string& Cos::GetOperator() const
{
  return m_Operator;
}

void Cos::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Cos::GetApproximationmethod() const
{
  return m_Approximationmethod;
}

void Cos::SetApproximationmethod(const std::string& value)
{
  m_Approximationmethod = value;
}

const std::string& Cos::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void Cos::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& Cos::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Cos::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Cos::GetInterpmethod() const
{
  return m_Interpmethod;
}

void Cos::SetInterpmethod(const std::string& value)
{
  m_Interpmethod = value;
}

const std::string& Cos::GetAngleunit() const
{
  return m_Angleunit;
}

void Cos::SetAngleunit(const std::string& value)
{
  m_Angleunit = value;
}

const std::string& Cos::GetNumberofdatapoints() const
{
  return m_Numberofdatapoints;
}

void Cos::SetNumberofdatapoints(const std::string& value)
{
  m_Numberofdatapoints = value;
}

const std::string& Cos::GetTabledatatypestr() const
{
  return m_Tabledatatypestr;
}

void Cos::SetTabledatatypestr(const std::string& value)
{
  m_Tabledatatypestr = value;
}

const std::string& Cos::GetRemoveprotectionagainstoutofrangeinput() const
{
  return m_Removeprotectionagainstoutofrangeinput;
}

void Cos::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
  m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Cos::GetSampletime() const
{
  return m_Sampletime;
}

void Cos::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
