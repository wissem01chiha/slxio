#include "VariableTransportDelay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

VariableTransportDelay::VariableTransportDelay() {}

VariableTransportDelay::~VariableTransportDelay() {}

const std::string& VariableTransportDelay::GetVariabledelaytype() const
{
    return m_Variabledelaytype;
}

void VariableTransportDelay::SetVariabledelaytype(const std::string& value)
{
    m_Variabledelaytype = value;
}

const std::string& VariableTransportDelay::GetMaximumdelay() const
{
    return m_Maximumdelay;
}

void VariableTransportDelay::SetMaximumdelay(const std::string& value)
{
    m_Maximumdelay = value;
}

const std::string& VariableTransportDelay::GetInitialoutput() const
{
    return m_Initialoutput;
}

void VariableTransportDelay::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& VariableTransportDelay::GetMaximumpoints() const
{
    return m_Maximumpoints;
}

void VariableTransportDelay::SetMaximumpoints(const std::string& value)
{
    m_Maximumpoints = value;
}

const std::string& VariableTransportDelay::GetFixedbuffer() const
{
    return m_Fixedbuffer;
}

void VariableTransportDelay::SetFixedbuffer(const std::string& value)
{
    m_Fixedbuffer = value;
}

const std::string& VariableTransportDelay::GetZerodelay() const
{
    return m_Zerodelay;
}

void VariableTransportDelay::SetZerodelay(const std::string& value)
{
    m_Zerodelay = value;
}

const std::string& VariableTransportDelay::GetTransdelayfeedthrough() const
{
    return m_Transdelayfeedthrough;
}

void VariableTransportDelay::SetTransdelayfeedthrough(const std::string& value)
{
    m_Transdelayfeedthrough = value;
}

const std::string& VariableTransportDelay::GetPadeorder() const
{
    return m_Padeorder;
}

void VariableTransportDelay::SetPadeorder(const std::string& value)
{
    m_Padeorder = value;
}

const std::string& VariableTransportDelay::GetAbsolutetolerance() const
{
    return m_Absolutetolerance;
}

void VariableTransportDelay::SetAbsolutetolerance(const std::string& value)
{
    m_Absolutetolerance = value;
}

const std::string& VariableTransportDelay::GetContinuousstateattributes() const
{
    return m_Continuousstateattributes;
}

void VariableTransportDelay::SetContinuousstateattributes(const std::string& value)
{
    m_Continuousstateattributes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
