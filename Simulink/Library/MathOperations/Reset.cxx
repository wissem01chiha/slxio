#include "Reset.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Reset::Reset() {}

Reset::~Reset() {}

const std::string& Reset::GetCriteria() const
{
    return m_Criteria;
}

void Reset::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Reset::GetThreshold() const
{
    return m_Threshold;
}

void Reset::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Reset::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Reset::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Reset::GetOutmin() const
{
    return m_Outmin;
}

void Reset::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Reset::GetOutmax() const
{
    return m_Outmax;
}

void Reset::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Reset::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Reset::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Reset::GetLockscale() const
{
    return m_Lockscale;
}

void Reset::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Reset::GetRndmeth() const
{
    return m_Rndmeth;
}

void Reset::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Reset::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Reset::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Reset::GetZerocross() const
{
    return m_Zerocross;
}

void Reset::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Reset::GetSampletime() const
{
    return m_Sampletime;
}

void Reset::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Reset::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Reset::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
