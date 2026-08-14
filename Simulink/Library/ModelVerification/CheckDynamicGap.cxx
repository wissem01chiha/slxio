#include "CheckDynamicGap.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CheckDynamicGap::CheckDynamicGap() {}

CheckDynamicGap::~CheckDynamicGap() {}

const std::string& CheckDynamicGap::GetEnabled() const
{
  return m_Enabled;
}

void CheckDynamicGap::SetEnabled(const std::string& value)
{
  m_Enabled = value;
}

const std::string& CheckDynamicGap::GetCallback() const
{
  return m_Callback;
}

void CheckDynamicGap::SetCallback(const std::string& value)
{
  m_Callback = value;
}

const std::string& CheckDynamicGap::GetStopwhenassertionfail() const
{
  return m_Stopwhenassertionfail;
}

void CheckDynamicGap::SetStopwhenassertionfail(const std::string& value)
{
  m_Stopwhenassertionfail = value;
}

const std::string& CheckDynamicGap::GetExport() const
{
  return m_Export;
}

void CheckDynamicGap::SetExport(const std::string& value)
{
  m_Export = value;
}

const std::string& CheckDynamicGap::GetIcon() const
{
  return m_Icon;
}

void CheckDynamicGap::SetIcon(const std::string& value)
{
  m_Icon = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
