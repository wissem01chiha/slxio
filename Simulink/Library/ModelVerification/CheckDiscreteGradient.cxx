#include "CheckDiscreteGradient.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CheckDiscreteGradient::CheckDiscreteGradient() {}

CheckDiscreteGradient::~CheckDiscreteGradient() {}

const std::string& CheckDiscreteGradient::GetGradient() const
{
    return m_Gradient;
}

void CheckDiscreteGradient::SetGradient(const std::string& value)
{
    m_Gradient = value;
}

const std::string& CheckDiscreteGradient::GetEnabled() const
{
    return m_Enabled;
}

void CheckDiscreteGradient::SetEnabled(const std::string& value)
{
    m_Enabled = value;
}

const std::string& CheckDiscreteGradient::GetCallback() const
{
    return m_Callback;
}

void CheckDiscreteGradient::SetCallback(const std::string& value)
{
    m_Callback = value;
}

const std::string& CheckDiscreteGradient::GetStopwhenassertionfail() const
{
    return m_Stopwhenassertionfail;
}

void CheckDiscreteGradient::SetStopwhenassertionfail(const std::string& value)
{
    m_Stopwhenassertionfail = value;
}

const std::string& CheckDiscreteGradient::GetExport() const
{
    return m_Export;
}

void CheckDiscreteGradient::SetExport(const std::string& value)
{
    m_Export = value;
}

const std::string& CheckDiscreteGradient::GetIcon() const
{
    return m_Icon;
}

void CheckDiscreteGradient::SetIcon(const std::string& value)
{
    m_Icon = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
