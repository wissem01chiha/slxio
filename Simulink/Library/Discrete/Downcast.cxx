#include "Downcast.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Downcast::Downcast() {}

Downcast::~Downcast() {}

const std::string& Downcast::GetOutmin() const
{
    return m_Outmin;
}

void Downcast::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Downcast::GetOutmax() const
{
    return m_Outmax;
}

void Downcast::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Downcast::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Downcast::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Downcast::GetLockscale() const
{
    return m_Lockscale;
}

void Downcast::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Downcast::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void Downcast::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& Downcast::GetRndmeth() const
{
    return m_Rndmeth;
}

void Downcast::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Downcast::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Downcast::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Downcast::GetSampletime() const
{
    return m_Sampletime;
}

void Downcast::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
