#include "Quadhandle1b.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Quadhandle1b::Quadhandle1b() {}

Quadhandle1b::~Quadhandle1b() {}

const std::string& Quadhandle1b::GetCriteria() const
{
    return m_Criteria;
}

void Quadhandle1b::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Quadhandle1b::GetThreshold() const
{
    return m_Threshold;
}

void Quadhandle1b::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Quadhandle1b::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Quadhandle1b::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Quadhandle1b::GetOutmin() const
{
    return m_Outmin;
}

void Quadhandle1b::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Quadhandle1b::GetOutmax() const
{
    return m_Outmax;
}

void Quadhandle1b::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Quadhandle1b::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Quadhandle1b::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Quadhandle1b::GetLockscale() const
{
    return m_Lockscale;
}

void Quadhandle1b::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Quadhandle1b::GetRndmeth() const
{
    return m_Rndmeth;
}

void Quadhandle1b::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Quadhandle1b::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Quadhandle1b::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Quadhandle1b::GetZerocross() const
{
    return m_Zerocross;
}

void Quadhandle1b::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Quadhandle1b::GetSampletime() const
{
    return m_Sampletime;
}

void Quadhandle1b::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Quadhandle1b::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Quadhandle1b::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
