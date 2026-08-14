#include "Atan2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Atan2::Atan2() {}

Atan2::~Atan2() {}

const std::string& Atan2::GetOperator() const
{
  return m_Operator;
}

void Atan2::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Atan2::GetApproximationmethod() const
{
  return m_Approximationmethod;
}

void Atan2::SetApproximationmethod(const std::string& value)
{
  m_Approximationmethod = value;
}

const std::string& Atan2::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void Atan2::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& Atan2::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void Atan2::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& Atan2::GetInterpmethod() const
{
  return m_Interpmethod;
}

void Atan2::SetInterpmethod(const std::string& value)
{
  m_Interpmethod = value;
}

const std::string& Atan2::GetAngleunit() const
{
  return m_Angleunit;
}

void Atan2::SetAngleunit(const std::string& value)
{
  m_Angleunit = value;
}

const std::string& Atan2::GetNumberofdatapoints() const
{
  return m_Numberofdatapoints;
}

void Atan2::SetNumberofdatapoints(const std::string& value)
{
  m_Numberofdatapoints = value;
}

const std::string& Atan2::GetTabledatatypestr() const
{
  return m_Tabledatatypestr;
}

void Atan2::SetTabledatatypestr(const std::string& value)
{
  m_Tabledatatypestr = value;
}

const std::string& Atan2::GetRemoveprotectionagainstoutofrangeinput() const
{
  return m_Removeprotectionagainstoutofrangeinput;
}

void Atan2::SetRemoveprotectionagainstoutofrangeinput(const std::string& value)
{
  m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& Atan2::GetSampletime() const
{
  return m_Sampletime;
}

void Atan2::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
