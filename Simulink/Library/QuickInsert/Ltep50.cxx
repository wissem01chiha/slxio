#include "Ltep50.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ltep50::Ltep50() {}

Ltep50::~Ltep50() {}

const std::string& Ltep50::GetOperator() const
{
    return m_Operator;
}

void Ltep50::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Ltep50::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Ltep50::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Ltep50::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Ltep50::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Ltep50::GetZerocross() const
{
    return m_Zerocross;
}

void Ltep50::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Ltep50::GetSampletime() const
{
    return m_Sampletime;
}

void Ltep50::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Ltep50::GetRndmeth() const
{
    return m_Rndmeth;
}

void Ltep50::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
