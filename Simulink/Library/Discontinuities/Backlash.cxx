#include "Backlash.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Backlash::Backlash() {}

Backlash::~Backlash() {}

const std::string& Backlash::GetBacklashwidth() const
{
  return m_Backlashwidth;
}

void Backlash::SetBacklashwidth(const std::string& value)
{
  m_Backlashwidth = value;
}

const std::string& Backlash::GetInitialoutput() const
{
  return m_Initialoutput;
}

void Backlash::SetInitialoutput(const std::string& value)
{
  m_Initialoutput = value;
}

const std::string& Backlash::GetInputprocessing() const
{
  return m_Inputprocessing;
}

void Backlash::SetInputprocessing(const std::string& value)
{
  m_Inputprocessing = value;
}

const std::string& Backlash::GetZerocross() const
{
  return m_Zerocross;
}

void Backlash::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Backlash::GetSampletime() const
{
  return m_Sampletime;
}

void Backlash::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
