#include "Switch1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Switch1::Switch1() {}

Switch1::~Switch1() {}

const std::string& Switch1::GetCriteria() const
{
    return m_Criteria;
}

void Switch1::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Switch1::GetThreshold() const
{
    return m_Threshold;
}

void Switch1::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Switch1::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Switch1::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Switch1::GetOutmin() const
{
    return m_Outmin;
}

void Switch1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Switch1::GetOutmax() const
{
    return m_Outmax;
}

void Switch1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Switch1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Switch1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Switch1::GetLockscale() const
{
    return m_Lockscale;
}

void Switch1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Switch1::GetRndmeth() const
{
    return m_Rndmeth;
}

void Switch1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Switch1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Switch1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Switch1::GetZerocross() const
{
    return m_Zerocross;
}

void Switch1::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Switch1::GetSampletime() const
{
    return m_Sampletime;
}

void Switch1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Switch1::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Switch1::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
