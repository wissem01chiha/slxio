#include "CheckInputResolution.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CheckInputResolution::CheckInputResolution() {}

CheckInputResolution::~CheckInputResolution() {}

const std::string& CheckInputResolution::GetResolution() const
{
  return m_Resolution;
}

void CheckInputResolution::SetResolution(const std::string& value)
{
  m_Resolution = value;
}

const std::string& CheckInputResolution::GetEnabled() const
{
  return m_Enabled;
}

void CheckInputResolution::SetEnabled(const std::string& value)
{
  m_Enabled = value;
}

const std::string& CheckInputResolution::GetCallback() const
{
  return m_Callback;
}

void CheckInputResolution::SetCallback(const std::string& value)
{
  m_Callback = value;
}

const std::string& CheckInputResolution::GetStopwhenassertionfail() const
{
  return m_Stopwhenassertionfail;
}

void CheckInputResolution::SetStopwhenassertionfail(const std::string& value)
{
  m_Stopwhenassertionfail = value;
}

const std::string& CheckInputResolution::GetExport() const
{
  return m_Export;
}

void CheckInputResolution::SetExport(const std::string& value)
{
  m_Export = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
