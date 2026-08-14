#include "Atan.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Atan::Atan() {}

Atan::~Atan() {}

const std::string& Atan::GetOperator() const
{
  return m_Operator;
}

void Atan::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Atan::GetApproximationmethod() const
{
  return m_Approximationmethod;
}

void Atan::SetApproximationmethod(const std::string& value)
{
  m_Approximationmethod = value;
}

const std::string& Atan::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void Atan::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& Atan::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Atan::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Atan::GetInterpmethod() const
{
  return m_Interpmethod;
}

void Atan::SetInterpmethod(const std::string& value)
{
  m_Interpmethod = value;
}

const std::string& Atan::GetAngleunit() const
{
  return m_Angleunit;
}

void Atan::SetAngleunit(const std::string& value)
{
  m_Angleunit = value;
}

const std::string& Atan::GetNumberofdatapoints() const
{
  return m_Numberofdatapoints;
}

void Atan::SetNumberofdatapoints(const std::string& value)
{
  m_Numberofdatapoints = value;
}

const std::string& Atan::GetTabledatatypestr() const
{
  return m_Tabledatatypestr;
}

void Atan::SetTabledatatypestr(const std::string& value)
{
  m_Tabledatatypestr = value;
}

const std::string& Atan::GetRemoveprotectionagainstoutofrangeinput() const
{
  return m_Removeprotectionagainstoutofrangeinput;
}

void Atan::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
  m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Atan::GetSampletime() const
{
  return m_Sampletime;
}

void Atan::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
