#include "SignalSpecification1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SignalSpecification1::SignalSpecification1() {}

SignalSpecification1::~SignalSpecification1() {}

const std::string& SignalSpecification1::GetOutmin() const
{
    return m_Outmin;
}

void SignalSpecification1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SignalSpecification1::GetOutmax() const
{
    return m_Outmax;
}

void SignalSpecification1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SignalSpecification1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SignalSpecification1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SignalSpecification1::GetLockscale() const
{
    return m_Lockscale;
}

void SignalSpecification1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SignalSpecification1::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void SignalSpecification1::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& SignalSpecification1::GetUnit() const
{
    return m_Unit;
}

void SignalSpecification1::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& SignalSpecification1::GetDimensions() const
{
    return m_Dimensions;
}

void SignalSpecification1::SetDimensions(const std::string& value)
{
    m_Dimensions = value;
}

const std::string& SignalSpecification1::GetVarsizesig() const
{
    return m_Varsizesig;
}

void SignalSpecification1::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& SignalSpecification1::GetSampletime() const
{
    return m_Sampletime;
}

void SignalSpecification1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& SignalSpecification1::GetSignaltype() const
{
    return m_Signaltype;
}

void SignalSpecification1::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
