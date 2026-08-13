#include "Switch2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Switch2::Switch2() {}

Switch2::~Switch2() {}

const std::string& Switch2::GetCriteria() const
{
    return m_Criteria;
}

void Switch2::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Switch2::GetThreshold() const
{
    return m_Threshold;
}

void Switch2::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Switch2::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Switch2::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Switch2::GetOutmin() const
{
    return m_Outmin;
}

void Switch2::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Switch2::GetOutmax() const
{
    return m_Outmax;
}

void Switch2::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Switch2::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Switch2::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Switch2::GetLockscale() const
{
    return m_Lockscale;
}

void Switch2::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Switch2::GetRndmeth() const
{
    return m_Rndmeth;
}

void Switch2::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Switch2::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Switch2::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Switch2::GetZerocross() const
{
    return m_Zerocross;
}

void Switch2::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Switch2::GetSampletime() const
{
    return m_Sampletime;
}

void Switch2::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Switch2::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Switch2::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
