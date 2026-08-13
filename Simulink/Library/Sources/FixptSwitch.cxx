#include "FixptSwitch.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptSwitch::FixptSwitch() {}

FixptSwitch::~FixptSwitch() {}

const std::string& FixptSwitch::GetCriteria() const
{
    return m_Criteria;
}

void FixptSwitch::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& FixptSwitch::GetThreshold() const
{
    return m_Threshold;
}

void FixptSwitch::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& FixptSwitch::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void FixptSwitch::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& FixptSwitch::GetOutmin() const
{
    return m_Outmin;
}

void FixptSwitch::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& FixptSwitch::GetOutmax() const
{
    return m_Outmax;
}

void FixptSwitch::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& FixptSwitch::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptSwitch::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptSwitch::GetLockscale() const
{
    return m_Lockscale;
}

void FixptSwitch::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FixptSwitch::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixptSwitch::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& FixptSwitch::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void FixptSwitch::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& FixptSwitch::GetZerocross() const
{
    return m_Zerocross;
}

void FixptSwitch::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& FixptSwitch::GetSampletime() const
{
    return m_Sampletime;
}

void FixptSwitch::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FixptSwitch::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void FixptSwitch::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
