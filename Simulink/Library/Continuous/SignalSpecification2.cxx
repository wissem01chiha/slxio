#include "SignalSpecification2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SignalSpecification2::SignalSpecification2() {}

SignalSpecification2::~SignalSpecification2() {}

const std::string& SignalSpecification2::GetOutmin() const
{
    return m_Outmin;
}

void SignalSpecification2::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& SignalSpecification2::GetOutmax() const
{
    return m_Outmax;
}

void SignalSpecification2::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& SignalSpecification2::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void SignalSpecification2::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& SignalSpecification2::GetLockscale() const
{
    return m_Lockscale;
}

void SignalSpecification2::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& SignalSpecification2::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void SignalSpecification2::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& SignalSpecification2::GetUnit() const
{
    return m_Unit;
}

void SignalSpecification2::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& SignalSpecification2::GetDimensions() const
{
    return m_Dimensions;
}

void SignalSpecification2::SetDimensions(const std::string& value)
{
    m_Dimensions = value;
}

const std::string& SignalSpecification2::GetVarsizesig() const
{
    return m_Varsizesig;
}

void SignalSpecification2::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& SignalSpecification2::GetSampletime() const
{
    return m_Sampletime;
}

void SignalSpecification2::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& SignalSpecification2::GetSignaltype() const
{
    return m_Signaltype;
}

void SignalSpecification2::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
