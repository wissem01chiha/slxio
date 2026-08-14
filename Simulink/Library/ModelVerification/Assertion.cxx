#include "Assertion.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Assertion::Assertion() {}

Assertion::~Assertion() {}

const std::string& Assertion::GetEnabled() const
{
  return m_Enabled;
}

void Assertion::SetEnabled(const std::string& value)
{
  m_Enabled = value;
}

const std::string& Assertion::GetAssertionfailfcn() const
{
  return m_Assertionfailfcn;
}

void Assertion::SetAssertionfailfcn(const std::string& value)
{
  m_Assertionfailfcn = value;
}

const std::string& Assertion::GetStopwhenassertionfail() const
{
  return m_Stopwhenassertionfail;
}

void Assertion::SetStopwhenassertionfail(const std::string& value)
{
  m_Stopwhenassertionfail = value;
}

const std::string& Assertion::GetSampletime() const
{
  return m_Sampletime;
}

void Assertion::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
