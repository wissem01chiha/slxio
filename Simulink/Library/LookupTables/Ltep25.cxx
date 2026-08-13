#include "Ltep25.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Ltep25::Ltep25() {}

Ltep25::~Ltep25() {}

const std::string& Ltep25::GetOperator() const
{
    return m_Operator;
}

void Ltep25::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Ltep25::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Ltep25::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Ltep25::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Ltep25::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Ltep25::GetZerocross() const
{
    return m_Zerocross;
}

void Ltep25::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Ltep25::GetSampletime() const
{
    return m_Sampletime;
}

void Ltep25::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Ltep25::GetRndmeth() const
{
    return m_Rndmeth;
}

void Ltep25::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
