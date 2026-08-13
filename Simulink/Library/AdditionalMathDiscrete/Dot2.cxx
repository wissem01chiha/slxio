#include "Dot2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Dot2::Dot2() {}

Dot2::~Dot2() {}

const std::string& Dot2::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Dot2::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Dot2::GetOutmin() const
{
    return m_Outmin;
}

void Dot2::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Dot2::GetOutmax() const
{
    return m_Outmax;
}

void Dot2::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Dot2::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Dot2::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Dot2::GetLockscale() const
{
    return m_Lockscale;
}

void Dot2::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Dot2::GetRndmeth() const
{
    return m_Rndmeth;
}

void Dot2::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Dot2::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Dot2::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Dot2::GetSampletime() const
{
    return m_Sampletime;
}

void Dot2::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
