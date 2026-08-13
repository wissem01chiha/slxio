#include "Relay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Relay::Relay() {}

Relay::~Relay() {}

const std::string& Relay::GetOnswitchvalue() const
{
    return m_Onswitchvalue;
}

void Relay::SetOnswitchvalue(const std::string& value)
{
    m_Onswitchvalue = value;
}

const std::string& Relay::GetOffswitchvalue() const
{
    return m_Offswitchvalue;
}

void Relay::SetOffswitchvalue(const std::string& value)
{
    m_Offswitchvalue = value;
}

const std::string& Relay::GetOnoutputvalue() const
{
    return m_Onoutputvalue;
}

void Relay::SetOnoutputvalue(const std::string& value)
{
    m_Onoutputvalue = value;
}

const std::string& Relay::GetOffoutputvalue() const
{
    return m_Offoutputvalue;
}

void Relay::SetOffoutputvalue(const std::string& value)
{
    m_Offoutputvalue = value;
}

const std::string& Relay::GetOutmin() const
{
    return m_Outmin;
}

void Relay::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Relay::GetOutmax() const
{
    return m_Outmax;
}

void Relay::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Relay::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Relay::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Relay::GetLockscale() const
{
    return m_Lockscale;
}

void Relay::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Relay::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void Relay::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& Relay::GetZerocross() const
{
    return m_Zerocross;
}

void Relay::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Relay::GetSampletime() const
{
    return m_Sampletime;
}

void Relay::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
