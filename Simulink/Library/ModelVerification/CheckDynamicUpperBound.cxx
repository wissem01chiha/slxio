#include "CheckDynamicUpperBound.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

CheckDynamicUpperBound::CheckDynamicUpperBound() {}

CheckDynamicUpperBound::~CheckDynamicUpperBound() {}

const std::string& CheckDynamicUpperBound::GetEnabled() const
{
    return m_Enabled;
}

void CheckDynamicUpperBound::SetEnabled(const std::string& value)
{
    m_Enabled = value;
}

const std::string& CheckDynamicUpperBound::GetCallback() const
{
    return m_Callback;
}

void CheckDynamicUpperBound::SetCallback(const std::string& value)
{
    m_Callback = value;
}

const std::string& CheckDynamicUpperBound::GetStopwhenassertionfail() const
{
    return m_Stopwhenassertionfail;
}

void CheckDynamicUpperBound::SetStopwhenassertionfail(const std::string& value)
{
    m_Stopwhenassertionfail = value;
}

const std::string& CheckDynamicUpperBound::GetExport() const
{
    return m_Export;
}

void CheckDynamicUpperBound::SetExport(const std::string& value)
{
    m_Export = value;
}

const std::string& CheckDynamicUpperBound::GetIcon() const { return m_Icon; }

void CheckDynamicUpperBound::SetIcon(const std::string& value)
{
    m_Icon = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
