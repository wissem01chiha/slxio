#include "Saturation.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Saturation::Saturation() {}

Saturation::~Saturation() {}

const std::string& Saturation::GetUpperlimit() const
{
    return m_Upperlimit;
}

void Saturation::SetUpperlimit(const std::string& value)
{
    m_Upperlimit = value;
}

const std::string& Saturation::GetLowerlimit() const
{
    return m_Lowerlimit;
}

void Saturation::SetLowerlimit(const std::string& value)
{
    m_Lowerlimit = value;
}

const std::string& Saturation::GetLinearizeasgain() const
{
    return m_Linearizeasgain;
}

void Saturation::SetLinearizeasgain(const std::string& value)
{
    m_Linearizeasgain = value;
}

const std::string& Saturation::GetZerocross() const
{
    return m_Zerocross;
}

void Saturation::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Saturation::GetSampletime() const
{
    return m_Sampletime;
}

void Saturation::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Saturation::GetOutmin() const
{
    return m_Outmin;
}

void Saturation::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Saturation::GetOutmax() const
{
    return m_Outmax;
}

void Saturation::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Saturation::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Saturation::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Saturation::GetLockscale() const
{
    return m_Lockscale;
}

void Saturation::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Saturation::GetRndmeth() const
{
    return m_Rndmeth;
}

void Saturation::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
