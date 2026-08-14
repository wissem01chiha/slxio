#include "CheckStaticLowerBound.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

CheckStaticLowerBound::CheckStaticLowerBound() {}

CheckStaticLowerBound::~CheckStaticLowerBound() {}

const std::string& CheckStaticLowerBound::GetMin() const { return m_Min; }

void CheckStaticLowerBound::SetMin(const std::string& value) { m_Min = value; }

const std::string& CheckStaticLowerBound::GetMinIncluded() const
{
    return m_MinIncluded;
}

void CheckStaticLowerBound::SetMinIncluded(const std::string& value)
{
    m_MinIncluded = value;
}

const std::string& CheckStaticLowerBound::GetEnabled() const
{
    return m_Enabled;
}

void CheckStaticLowerBound::SetEnabled(const std::string& value)
{
    m_Enabled = value;
}

const std::string& CheckStaticLowerBound::GetCallback() const
{
    return m_Callback;
}

void CheckStaticLowerBound::SetCallback(const std::string& value)
{
    m_Callback = value;
}

const std::string& CheckStaticLowerBound::GetStopwhenassertionfail() const
{
    return m_Stopwhenassertionfail;
}

void CheckStaticLowerBound::SetStopwhenassertionfail(const std::string& value)
{
    m_Stopwhenassertionfail = value;
}

const std::string& CheckStaticLowerBound::GetExport() const { return m_Export; }

void CheckStaticLowerBound::SetExport(const std::string& value)
{
    m_Export = value;
}

const std::string& CheckStaticLowerBound::GetIcon() const { return m_Icon; }

void CheckStaticLowerBound::SetIcon(const std::string& value)
{
    m_Icon = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
