#include "Dot1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Dot1::Dot1() {}

Dot1::~Dot1() {}

const std::string& Dot1::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Dot1::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Dot1::GetOutmin() const
{
    return m_Outmin;
}

void Dot1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Dot1::GetOutmax() const
{
    return m_Outmax;
}

void Dot1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Dot1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Dot1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Dot1::GetLockscale() const
{
    return m_Lockscale;
}

void Dot1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Dot1::GetRndmeth() const
{
    return m_Rndmeth;
}

void Dot1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Dot1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Dot1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Dot1::GetSampletime() const
{
    return m_Sampletime;
}

void Dot1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
