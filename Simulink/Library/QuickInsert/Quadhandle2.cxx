#include "Quadhandle2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Quadhandle2::Quadhandle2() {}

Quadhandle2::~Quadhandle2() {}

const std::string& Quadhandle2::GetCriteria() const
{
    return m_Criteria;
}

void Quadhandle2::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Quadhandle2::GetThreshold() const
{
    return m_Threshold;
}

void Quadhandle2::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Quadhandle2::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Quadhandle2::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Quadhandle2::GetOutmin() const
{
    return m_Outmin;
}

void Quadhandle2::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Quadhandle2::GetOutmax() const
{
    return m_Outmax;
}

void Quadhandle2::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Quadhandle2::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Quadhandle2::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Quadhandle2::GetLockscale() const
{
    return m_Lockscale;
}

void Quadhandle2::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Quadhandle2::GetRndmeth() const
{
    return m_Rndmeth;
}

void Quadhandle2::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Quadhandle2::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Quadhandle2::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Quadhandle2::GetZerocross() const
{
    return m_Zerocross;
}

void Quadhandle2::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Quadhandle2::GetSampletime() const
{
    return m_Sampletime;
}

void Quadhandle2::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Quadhandle2::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Quadhandle2::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
