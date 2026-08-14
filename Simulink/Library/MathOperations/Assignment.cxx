#include "Assignment.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Assignment::Assignment() {}

Assignment::~Assignment() {}

const std::string& Assignment::GetNumberofdimensions() const
{
  return m_Numberofdimensions;
}

void Assignment::SetNumberofdimensions(const std::string& value)
{
  m_Numberofdimensions = value;
}

const std::string& Assignment::GetIndexmode() const
{
  return m_Indexmode;
}

void Assignment::SetIndexmode(const std::string& value)
{
  m_Indexmode = value;
}

const std::string& Assignment::GetOutputinitialize() const
{
  return m_Outputinitialize;
}

void Assignment::SetOutputinitialize(const std::string& value)
{
  m_Outputinitialize = value;
}

const std::string& Assignment::GetIndexoptionarray() const
{
  return m_Indexoptionarray;
}

void Assignment::SetIndexoptionarray(const std::string& value)
{
  m_Indexoptionarray = value;
}

const std::string& Assignment::GetIndexparamarray() const
{
  return m_Indexparamarray;
}

void Assignment::SetIndexparamarray(const std::string& value)
{
  m_Indexparamarray = value;
}

const std::string& Assignment::GetOutputsizearray() const
{
  return m_Outputsizearray;
}

void Assignment::SetOutputsizearray(const std::string& value)
{
  m_Outputsizearray = value;
}

const std::string& Assignment::GetDiagnosticfordimensions() const
{
  return m_Diagnosticfordimensions;
}

void Assignment::SetDiagnosticfordimensions(const std::string& value)
{
  m_Diagnosticfordimensions = value;
}

const std::string& Assignment::GetSampletime() const
{
  return m_Sampletime;
}

void Assignment::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Assignment::GetIndexoptions() const
{
  return m_Indexoptions;
}

void Assignment::SetIndexoptions(const std::string& value)
{
  m_Indexoptions = value;
}

const std::string& Assignment::GetIndices() const
{
  return m_Indices;
}

void Assignment::SetIndices(const std::string& value)
{
  m_Indices = value;
}

const std::string& Assignment::GetOutputsizes() const
{
  return m_Outputsizes;
}

void Assignment::SetOutputsizes(const std::string& value)
{
  m_Outputsizes = value;
}

const std::string& Assignment::GetRuntimerangechecks() const
{
  return m_Runtimerangechecks;
}

void Assignment::SetRuntimerangechecks(const std::string& value)
{
  m_Runtimerangechecks = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
