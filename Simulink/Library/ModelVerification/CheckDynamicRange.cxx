#include "CheckDynamicRange.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

CheckDynamicRange::CheckDynamicRange() {}

CheckDynamicRange::~CheckDynamicRange() {}

const std::string& CheckDynamicRange::GetEnabled() const { return m_Enabled; }

void CheckDynamicRange::SetEnabled(const std::string& value)
{
    m_Enabled = value;
}

const std::string& CheckDynamicRange::GetCallback() const { return m_Callback; }

void CheckDynamicRange::SetCallback(const std::string& value)
{
    m_Callback = value;
}

const std::string& CheckDynamicRange::GetStopwhenassertionfail() const
{
    return m_Stopwhenassertionfail;
}

void CheckDynamicRange::SetStopwhenassertionfail(const std::string& value)
{
    m_Stopwhenassertionfail = value;
}

const std::string& CheckDynamicRange::GetExport() const { return m_Export; }

void CheckDynamicRange::SetExport(const std::string& value)
{
    m_Export = value;
}

const std::string& CheckDynamicRange::GetIcon() const { return m_Icon; }

void CheckDynamicRange::SetIcon(const std::string& value) { m_Icon = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
