#include "UGtLo.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UGtLo::UGtLo() {}

UGtLo::~UGtLo() {}

const std::string& UGtLo::GetOperator() const
{
    return m_Operator;
}

void UGtLo::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& UGtLo::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void UGtLo::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& UGtLo::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void UGtLo::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& UGtLo::GetZerocross() const
{
    return m_Zerocross;
}

void UGtLo::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& UGtLo::GetSampletime() const
{
    return m_Sampletime;
}

void UGtLo::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& UGtLo::GetRndmeth() const
{
    return m_Rndmeth;
}

void UGtLo::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
