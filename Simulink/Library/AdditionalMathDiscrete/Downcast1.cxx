#include "Downcast1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Downcast1::Downcast1() {}

Downcast1::~Downcast1() {}

const std::string& Downcast1::GetOutmin() const
{
    return m_Outmin;
}

void Downcast1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Downcast1::GetOutmax() const
{
    return m_Outmax;
}

void Downcast1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Downcast1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Downcast1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Downcast1::GetLockscale() const
{
    return m_Lockscale;
}

void Downcast1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Downcast1::GetConvertrealworld() const
{
    return m_Convertrealworld;
}

void Downcast1::SetConvertrealworld(const std::string& value)
{
    m_Convertrealworld = value;
}

const std::string& Downcast1::GetRndmeth() const
{
    return m_Rndmeth;
}

void Downcast1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Downcast1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Downcast1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Downcast1::GetSampletime() const
{
    return m_Sampletime;
}

void Downcast1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
