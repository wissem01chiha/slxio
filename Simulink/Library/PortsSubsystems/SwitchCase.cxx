#include "SwitchCase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SwitchCase::SwitchCase() {}

SwitchCase::~SwitchCase() {}

const std::string& SwitchCase::GetCaseconditions() const
{
  return m_Caseconditions;
}

void SwitchCase::SetCaseconditions(const std::string& value)
{
  m_Caseconditions = value;
}

const std::string& SwitchCase::GetShowdefaultcase() const
{
  return m_Showdefaultcase;
}

void SwitchCase::SetShowdefaultcase(const std::string& value)
{
  m_Showdefaultcase = value;
}

const std::string& SwitchCase::GetZerocross() const
{
  return m_Zerocross;
}

void SwitchCase::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& SwitchCase::GetSampletime() const
{
  return m_Sampletime;
}

void SwitchCase::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
