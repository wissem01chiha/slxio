#include "Quadhandle1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Quadhandle1::Quadhandle1() {}

Quadhandle1::~Quadhandle1() {}

const std::string& Quadhandle1::GetCriteria() const
{
    return m_Criteria;
}

void Quadhandle1::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Quadhandle1::GetThreshold() const
{
    return m_Threshold;
}

void Quadhandle1::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Quadhandle1::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Quadhandle1::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Quadhandle1::GetOutmin() const
{
    return m_Outmin;
}

void Quadhandle1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Quadhandle1::GetOutmax() const
{
    return m_Outmax;
}

void Quadhandle1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Quadhandle1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Quadhandle1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Quadhandle1::GetLockscale() const
{
    return m_Lockscale;
}

void Quadhandle1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Quadhandle1::GetRndmeth() const
{
    return m_Rndmeth;
}

void Quadhandle1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Quadhandle1::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Quadhandle1::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Quadhandle1::GetZerocross() const
{
    return m_Zerocross;
}

void Quadhandle1::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Quadhandle1::GetSampletime() const
{
    return m_Sampletime;
}

void Quadhandle1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Quadhandle1::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Quadhandle1::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
