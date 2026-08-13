#include "Switch.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Switch::Switch() {}

Switch::~Switch() {}

const std::string& Switch::GetCriteria() const
{
    return m_Criteria;
}

void Switch::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Switch::GetThreshold() const
{
    return m_Threshold;
}

void Switch::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Switch::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Switch::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Switch::GetOutmin() const
{
    return m_Outmin;
}

void Switch::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Switch::GetOutmax() const
{
    return m_Outmax;
}

void Switch::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Switch::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Switch::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Switch::GetLockscale() const
{
    return m_Lockscale;
}

void Switch::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Switch::GetRndmeth() const
{
    return m_Rndmeth;
}

void Switch::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Switch::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Switch::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Switch::GetZerocross() const
{
    return m_Zerocross;
}

void Switch::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Switch::GetSampletime() const
{
    return m_Sampletime;
}

void Switch::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Switch::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Switch::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
