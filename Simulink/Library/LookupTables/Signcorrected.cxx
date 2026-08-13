#include "Signcorrected.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Signcorrected::Signcorrected() {}

Signcorrected::~Signcorrected() {}

const std::string& Signcorrected::GetCriteria() const
{
    return m_Criteria;
}

void Signcorrected::SetCriteria(const std::string& value)
{
    m_Criteria = value;
}

const std::string& Signcorrected::GetThreshold() const
{
    return m_Threshold;
}

void Signcorrected::SetThreshold(const std::string& value)
{
    m_Threshold = value;
}

const std::string& Signcorrected::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Signcorrected::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Signcorrected::GetOutmin() const
{
    return m_Outmin;
}

void Signcorrected::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Signcorrected::GetOutmax() const
{
    return m_Outmax;
}

void Signcorrected::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Signcorrected::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Signcorrected::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Signcorrected::GetLockscale() const
{
    return m_Lockscale;
}

void Signcorrected::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Signcorrected::GetRndmeth() const
{
    return m_Rndmeth;
}

void Signcorrected::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& Signcorrected::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Signcorrected::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Signcorrected::GetZerocross() const
{
    return m_Zerocross;
}

void Signcorrected::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Signcorrected::GetSampletime() const
{
    return m_Sampletime;
}

void Signcorrected::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Signcorrected::GetAllowdiffinputsizes() const
{
    return m_Allowdiffinputsizes;
}

void Signcorrected::SetAllowdiffinputsizes(const std::string& value)
{
    m_Allowdiffinputsizes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
