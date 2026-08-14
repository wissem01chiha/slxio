#include "SinCordic.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SinCordic::SinCordic() {}

SinCordic::~SinCordic() {}

const std::string& SinCordic::GetOperator() const
{
  return m_Operator;
}

void SinCordic::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& SinCordic::GetApproximationmethod() const
{
  return m_Approximationmethod;
}

void SinCordic::SetApproximationmethod(const std::string& value)
{
  m_Approximationmethod = value;
}

const std::string& SinCordic::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void SinCordic::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& SinCordic::GetOutputsignaltype() const
{
  return m_Outputsignaltype;
}

void SinCordic::SetOutputsignaltype(const std::string& value)
{
  m_Outputsignaltype = value;
}

const std::string& SinCordic::GetInterpmethod() const
{
  return m_Interpmethod;
}

void SinCordic::SetInterpmethod(const std::string& value)
{
  m_Interpmethod = value;
}

const std::string& SinCordic::GetAngleunit() const
{
  return m_Angleunit;
}

void SinCordic::SetAngleunit(const std::string& value)
{
  m_Angleunit = value;
}

const std::string& SinCordic::GetNumberofdatapoints() const
{
  return m_Numberofdatapoints;
}

void SinCordic::SetNumberofdatapoints(const std::string& value)
{
  m_Numberofdatapoints = value;
}

const std::string& SinCordic::GetTabledatatypestr() const
{
  return m_Tabledatatypestr;
}

void SinCordic::SetTabledatatypestr(const std::string& value)
{
  m_Tabledatatypestr = value;
}

const std::string& SinCordic::GetRemoveprotectionagainstoutofrangeinput() const
{
  return m_Removeprotectionagainstoutofrangeinput;
}

void SinCordic::SetRemoveprotectionagainstoutofrangeinput(
  const std::string& value)
{
  m_Removeprotectionagainstoutofrangeinput = value;
}

const std::string& SinCordic::GetSampletime() const
{
  return m_Sampletime;
}

void SinCordic::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
