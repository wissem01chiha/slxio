#include "SignalSpecification4.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SignalSpecification4::SignalSpecification4() {}

SignalSpecification4::~SignalSpecification4() {}

const std::string& SignalSpecification4::GetOutmin() const
{
    return m_Outmin;
}

void SignalSpecification4::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SignalSpecification4::GetOutmax() const
{
    return m_Outmax;
}

void SignalSpecification4::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SignalSpecification4::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SignalSpecification4::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SignalSpecification4::GetLockscale() const
{
    return m_Lockscale;
}

void SignalSpecification4::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SignalSpecification4::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void SignalSpecification4::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& SignalSpecification4::GetUnit() const
{
    return m_Unit;
}

void SignalSpecification4::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& SignalSpecification4::GetDimensions() const
{
    return m_Dimensions;
}

void SignalSpecification4::SetDimensions(const std::string& value)
{
    m_Dimensions = value;
}

const std::string& SignalSpecification4::GetVarsizesig() const
{
    return m_Varsizesig;
}

void SignalSpecification4::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& SignalSpecification4::GetSampletime() const
{
    return m_Sampletime;
}

void SignalSpecification4::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& SignalSpecification4::GetSignaltype() const
{
    return m_Signaltype;
}

void SignalSpecification4::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
