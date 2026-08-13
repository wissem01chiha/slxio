#include "VariableTimeDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

VariableTimeDelay::VariableTimeDelay() {}

VariableTimeDelay::~VariableTimeDelay() {}

const std::string& VariableTimeDelay::GetVariabledelaytype() const
{
    return m_Variabledelaytype;
}

void VariableTimeDelay::SetVariabledelaytype(const std::string& value)
{
    m_Variabledelaytype = value;
}

const std::string& VariableTimeDelay::GetMaximumdelay() const
{
    return m_Maximumdelay;
}

void VariableTimeDelay::SetMaximumdelay(const std::string& value)
{
    m_Maximumdelay = value;
}

const std::string& VariableTimeDelay::GetInitialoutput() const
{
    return m_Initialoutput;
}

void VariableTimeDelay::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& VariableTimeDelay::GetMaximumpoints() const
{
    return m_Maximumpoints;
}

void VariableTimeDelay::SetMaximumpoints(const std::string& value)
{
    m_Maximumpoints = value;
}

const std::string& VariableTimeDelay::GetFixedbuffer() const
{
    return m_Fixedbuffer;
}

void VariableTimeDelay::SetFixedbuffer(const std::string& value)
{
    m_Fixedbuffer = value;
}

const std::string& VariableTimeDelay::GetZerodelay() const
{
    return m_Zerodelay;
}

void VariableTimeDelay::SetZerodelay(const std::string& value)
{
    m_Zerodelay = value;
}

const std::string& VariableTimeDelay::GetTransdelayfeedthrough() const
{
    return m_Transdelayfeedthrough;
}

void VariableTimeDelay::SetTransdelayfeedthrough(const std::string& value)
{
    m_Transdelayfeedthrough = value;
}

const std::string& VariableTimeDelay::GetPadeorder() const
{
    return m_Padeorder;
}

void VariableTimeDelay::SetPadeorder(const std::string& value)
{
    m_Padeorder = value;
}

const std::string& VariableTimeDelay::GetAbsolutetolerance() const
{
    return m_Absolutetolerance;
}

void VariableTimeDelay::SetAbsolutetolerance(const std::string& value)
{
    m_Absolutetolerance = value;
}

const std::string& VariableTimeDelay::GetContinuousstateattributes() const
{
    return m_Continuousstateattributes;
}

void VariableTimeDelay::SetContinuousstateattributes(const std::string& value)
{
    m_Continuousstateattributes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
