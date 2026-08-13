#include "ForceToBeScalar.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ForceToBeScalar::ForceToBeScalar() {}

ForceToBeScalar::~ForceToBeScalar() {}

const std::string& ForceToBeScalar::GetOutmin() const
{
    return m_Outmin;
}

void ForceToBeScalar::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ForceToBeScalar::GetOutmax() const
{
    return m_Outmax;
}

void ForceToBeScalar::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ForceToBeScalar::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ForceToBeScalar::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ForceToBeScalar::GetLockscale() const
{
    return m_Lockscale;
}

void ForceToBeScalar::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ForceToBeScalar::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void ForceToBeScalar::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& ForceToBeScalar::GetUnit() const
{
    return m_Unit;
}

void ForceToBeScalar::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& ForceToBeScalar::GetDimensions() const
{
    return m_Dimensions;
}

void ForceToBeScalar::SetDimensions(const std::string& value)
{
    m_Dimensions = value;
}

const std::string& ForceToBeScalar::GetVarsizesig() const
{
    return m_Varsizesig;
}

void ForceToBeScalar::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& ForceToBeScalar::GetSampletime() const
{
    return m_Sampletime;
}

void ForceToBeScalar::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& ForceToBeScalar::GetSignaltype() const
{
    return m_Signaltype;
}

void ForceToBeScalar::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
