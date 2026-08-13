#include "FixptGatewayOut.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptGatewayOut::FixptGatewayOut() {}

FixptGatewayOut::~FixptGatewayOut() {}

const std::string& FixptGatewayOut::GetOutmin() const
{
    return m_Outmin;
}

void FixptGatewayOut::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& FixptGatewayOut::GetOutmax() const
{
    return m_Outmax;
}

void FixptGatewayOut::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& FixptGatewayOut::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptGatewayOut::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptGatewayOut::GetLockscale() const
{
    return m_Lockscale;
}

void FixptGatewayOut::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FixptGatewayOut::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void FixptGatewayOut::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& FixptGatewayOut::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixptGatewayOut::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& FixptGatewayOut::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void FixptGatewayOut::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& FixptGatewayOut::GetSampletime() const
{
    return m_Sampletime;
}

void FixptGatewayOut::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
