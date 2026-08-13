#include "Lowerrelop1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Lowerrelop1::Lowerrelop1() {}

Lowerrelop1::~Lowerrelop1() {}

const std::string& Lowerrelop1::GetOperator() const
{
    return m_Operator;
}

void Lowerrelop1::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Lowerrelop1::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Lowerrelop1::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Lowerrelop1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Lowerrelop1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Lowerrelop1::GetZerocross() const
{
    return m_Zerocross;
}

void Lowerrelop1::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Lowerrelop1::GetSampletime() const
{
    return m_Sampletime;
}

void Lowerrelop1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Lowerrelop1::GetRndmeth() const
{
    return m_Rndmeth;
}

void Lowerrelop1::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
