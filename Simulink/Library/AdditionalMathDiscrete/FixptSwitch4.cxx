#include "FixptSwitch4.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptSwitch4::FixptSwitch4() {}

FixptSwitch4::~FixptSwitch4() {}

const std::string& FixptSwitch4::GetCriteria() const
{
    return m_Criteria;
}

void FixptSwitch4::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& FixptSwitch4::GetThreshold() const
{
    return m_Threshold;
}

void FixptSwitch4::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& FixptSwitch4::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void FixptSwitch4::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& FixptSwitch4::GetOutmin() const
{
    return m_Outmin;
}

void FixptSwitch4::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& FixptSwitch4::GetOutmax() const
{
    return m_Outmax;
}

void FixptSwitch4::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& FixptSwitch4::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptSwitch4::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptSwitch4::GetLockscale() const
{
    return m_Lockscale;
}

void FixptSwitch4::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FixptSwitch4::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixptSwitch4::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& FixptSwitch4::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void FixptSwitch4::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& FixptSwitch4::GetZerocross() const
{
    return m_Zerocross;
}

void FixptSwitch4::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& FixptSwitch4::GetSampletime() const
{
    return m_Sampletime;
}

void FixptSwitch4::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FixptSwitch4::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void FixptSwitch4::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
