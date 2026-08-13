#include "FixptGatewayIn.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptGatewayIn::FixptGatewayIn() {}

FixptGatewayIn::~FixptGatewayIn() {}

const std::string& FixptGatewayIn::GetOutmin() const
{
    return m_Outmin;
}

void FixptGatewayIn::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& FixptGatewayIn::GetOutmax() const
{
    return m_Outmax;
}

void FixptGatewayIn::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& FixptGatewayIn::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptGatewayIn::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptGatewayIn::GetLockscale() const
{
    return m_Lockscale;
}

void FixptGatewayIn::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FixptGatewayIn::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void FixptGatewayIn::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& FixptGatewayIn::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixptGatewayIn::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& FixptGatewayIn::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void FixptGatewayIn::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& FixptGatewayIn::GetSampletime() const
{
    return m_Sampletime;
}

void FixptGatewayIn::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
