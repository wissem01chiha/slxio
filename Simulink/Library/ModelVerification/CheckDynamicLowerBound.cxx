#include "CheckDynamicLowerBound.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CheckDynamicLowerBound::CheckDynamicLowerBound() {}

CheckDynamicLowerBound::~CheckDynamicLowerBound() {}

const std::string& CheckDynamicLowerBound::GetEnabled() const
{
    return m_Enabled;
}

void CheckDynamicLowerBound::SetEnabled(const std::string& value)
{
    m_Enabled = value;
}

const std::string& CheckDynamicLowerBound::GetCallback() const
{
    return m_Callback;
}

void CheckDynamicLowerBound::SetCallback(const std::string& value)
{
    m_Callback = value;
}

const std::string& CheckDynamicLowerBound::GetStopwhenassertionfail() const
{
    return m_Stopwhenassertionfail;
}

void CheckDynamicLowerBound::SetStopwhenassertionfail(const std::string& value)
{
    m_Stopwhenassertionfail = value;
}

const std::string& CheckDynamicLowerBound::GetExport() const
{
    return m_Export;
}

void CheckDynamicLowerBound::SetExport(const std::string& value)
{
    m_Export = value;
}

const std::string& CheckDynamicLowerBound::GetIcon() const
{
    return m_Icon;
}

void CheckDynamicLowerBound::SetIcon(const std::string& value)
{
    m_Icon = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
