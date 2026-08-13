#include "ConnectionPort.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ConnectionPort::ConnectionPort() {}

ConnectionPort::~ConnectionPort() {}

const std::string& ConnectionPort::GetPort() const
{
    return m_Port;
}

void ConnectionPort::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& ConnectionPort::GetSide() const
{
    return m_Side;
}

void ConnectionPort::SetSide(const std::string& value)
{
    m_Side = value;
}

const std::string& ConnectionPort::GetConnectiontype() const
{
    return m_Connectiontype;
}

void ConnectionPort::SetConnectiontype(const std::string& value)
{
    m_Connectiontype = value;
}

const std::string& ConnectionPort::GetSampletime() const
{
    return m_Sampletime;
}

void ConnectionPort::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
