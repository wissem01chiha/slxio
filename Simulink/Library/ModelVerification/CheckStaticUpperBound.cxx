#include "CheckStaticUpperBound.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

CheckStaticUpperBound::CheckStaticUpperBound() {}

CheckStaticUpperBound::~CheckStaticUpperBound() {}

const std::string& CheckStaticUpperBound::GetMax() const { return m_Max; }

void CheckStaticUpperBound::SetMax(const std::string& value) { m_Max = value; }

const std::string& CheckStaticUpperBound::GetMaxIncluded() const
{
    return m_MaxIncluded;
}

void CheckStaticUpperBound::SetMaxIncluded(const std::string& value)
{
    m_MaxIncluded = value;
}

const std::string& CheckStaticUpperBound::GetEnabled() const
{
    return m_Enabled;
}

void CheckStaticUpperBound::SetEnabled(const std::string& value)
{
    m_Enabled = value;
}

const std::string& CheckStaticUpperBound::GetCallback() const
{
    return m_Callback;
}

void CheckStaticUpperBound::SetCallback(const std::string& value)
{
    m_Callback = value;
}

const std::string& CheckStaticUpperBound::GetStopwhenassertionfail() const
{
    return m_Stopwhenassertionfail;
}

void CheckStaticUpperBound::SetStopwhenassertionfail(const std::string& value)
{
    m_Stopwhenassertionfail = value;
}

const std::string& CheckStaticUpperBound::GetExport() const { return m_Export; }

void CheckStaticUpperBound::SetExport(const std::string& value)
{
    m_Export = value;
}

const std::string& CheckStaticUpperBound::GetIcon() const { return m_Icon; }

void CheckStaticUpperBound::SetIcon(const std::string& value)
{
    m_Icon = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
