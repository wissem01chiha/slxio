#include "Quadhandle1a.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Quadhandle1a::Quadhandle1a() {}

Quadhandle1a::~Quadhandle1a() {}

const std::string& Quadhandle1a::GetCriteria() const
{
    return m_Criteria;
}

void Quadhandle1a::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Quadhandle1a::GetThreshold() const
{
    return m_Threshold;
}

void Quadhandle1a::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Quadhandle1a::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Quadhandle1a::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Quadhandle1a::GetOutmin() const
{
    return m_Outmin;
}

void Quadhandle1a::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Quadhandle1a::GetOutmax() const
{
    return m_Outmax;
}

void Quadhandle1a::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Quadhandle1a::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Quadhandle1a::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Quadhandle1a::GetLockscale() const
{
    return m_Lockscale;
}

void Quadhandle1a::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Quadhandle1a::GetRndmeth() const
{
    return m_Rndmeth;
}

void Quadhandle1a::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Quadhandle1a::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Quadhandle1a::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Quadhandle1a::GetZerocross() const
{
    return m_Zerocross;
}

void Quadhandle1a::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Quadhandle1a::GetSampletime() const
{
    return m_Sampletime;
}

void Quadhandle1a::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Quadhandle1a::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Quadhandle1a::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
