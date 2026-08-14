#include "CheckStaticGap.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CheckStaticGap::CheckStaticGap() {}

CheckStaticGap::~CheckStaticGap() {}

const std::string& CheckStaticGap::GetMax() const
{
  return m_Max;
}

void CheckStaticGap::SetMax(const std::string& value)
{
  m_Max = value;
}

const std::string& CheckStaticGap::GetMaxIncluded() const
{
  return m_MaxIncluded;
}

void CheckStaticGap::SetMaxIncluded(const std::string& value)
{
  m_MaxIncluded = value;
}

const std::string& CheckStaticGap::GetMin() const
{
  return m_Min;
}

void CheckStaticGap::SetMin(const std::string& value)
{
  m_Min = value;
}

const std::string& CheckStaticGap::GetMinIncluded() const
{
  return m_MinIncluded;
}

void CheckStaticGap::SetMinIncluded(const std::string& value)
{
  m_MinIncluded = value;
}

const std::string& CheckStaticGap::GetEnabled() const
{
  return m_Enabled;
}

void CheckStaticGap::SetEnabled(const std::string& value)
{
  m_Enabled = value;
}

const std::string& CheckStaticGap::GetCallback() const
{
  return m_Callback;
}

void CheckStaticGap::SetCallback(const std::string& value)
{
  m_Callback = value;
}

const std::string& CheckStaticGap::GetStopwhenassertionfail() const
{
  return m_Stopwhenassertionfail;
}

void CheckStaticGap::SetStopwhenassertionfail(const std::string& value)
{
  m_Stopwhenassertionfail = value;
}

const std::string& CheckStaticGap::GetExport() const
{
  return m_Export;
}

void CheckStaticGap::SetExport(const std::string& value)
{
  m_Export = value;
}

const std::string& CheckStaticGap::GetIcon() const
{
  return m_Icon;
}

void CheckStaticGap::SetIcon(const std::string& value)
{
  m_Icon = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
