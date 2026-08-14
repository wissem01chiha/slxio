#include "FunctionCallGenerator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FunctionCallGenerator::FunctionCallGenerator() {}

FunctionCallGenerator::~FunctionCallGenerator() {}

const std::string& FunctionCallGenerator::GetSampleTime() const
{
  return m_SampleTime;
}

void FunctionCallGenerator::SetSampleTime(const std::string& value)
{
  m_SampleTime = value;
}

const std::string& FunctionCallGenerator::GetNumberofiterations() const
{
  return m_Numberofiterations;
}

void FunctionCallGenerator::SetNumberofiterations(const std::string& value)
{
  m_Numberofiterations = value;
}

const std::string& FunctionCallGenerator::GetDisallowwideoutput() const
{
  return m_Disallowwideoutput;
}

void FunctionCallGenerator::SetDisallowwideoutput(const std::string& value)
{
  m_Disallowwideoutput = value;
}

const std::string& FunctionCallGenerator::GetShowenableport() const
{
  return m_Showenableport;
}

void FunctionCallGenerator::SetShowenableport(const std::string& value)
{
  m_Showenableport = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
