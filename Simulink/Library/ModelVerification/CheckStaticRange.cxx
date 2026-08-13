#include "CheckStaticRange.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CheckStaticRange::CheckStaticRange() {}

CheckStaticRange::~CheckStaticRange() {}

const std::string& CheckStaticRange::GetMax() const
{
    return m_Max;
}

void CheckStaticRange::SetMax(const std::string& value)
{
    m_Max = value;
}

const std::string& CheckStaticRange::GetMaxIncluded() const
{
    return m_MaxIncluded;
}

void CheckStaticRange::SetMaxIncluded(const std::string& value)
{
    m_MaxIncluded = value;
}

const std::string& CheckStaticRange::GetMin() const
{
    return m_Min;
}

void CheckStaticRange::SetMin(const std::string& value)
{
    m_Min = value;
}

const std::string& CheckStaticRange::GetMinIncluded() const
{
    return m_MinIncluded;
}

void CheckStaticRange::SetMinIncluded(const std::string& value)
{
    m_MinIncluded = value;
}

const std::string& CheckStaticRange::GetEnabled() const
{
    return m_Enabled;
}

void CheckStaticRange::SetEnabled(const std::string& value)
{
    m_Enabled = value;
}

const std::string& CheckStaticRange::GetCallback() const
{
    return m_Callback;
}

void CheckStaticRange::SetCallback(const std::string& value)
{
    m_Callback = value;
}

const std::string& CheckStaticRange::GetStopwhenassertionfail() const
{
    return m_Stopwhenassertionfail;
}

void CheckStaticRange::SetStopwhenassertionfail(const std::string& value)
{
    m_Stopwhenassertionfail = value;
}

const std::string& CheckStaticRange::GetExport() const
{
    return m_Export;
}

void CheckStaticRange::SetExport(const std::string& value)
{
    m_Export = value;
}

const std::string& CheckStaticRange::GetIcon() const
{
    return m_Icon;
}

void CheckStaticRange::SetIcon(const std::string& value)
{
    m_Icon = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
