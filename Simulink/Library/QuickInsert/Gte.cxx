#include "Gte.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Gte::Gte() {}

Gte::~Gte() {}

const std::string& Gte::GetOperator() const
{
    return m_Operator;
}

void Gte::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Gte::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Gte::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Gte::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Gte::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Gte::GetZerocross() const
{
    return m_Zerocross;
}

void Gte::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Gte::GetSampletime() const
{
    return m_Sampletime;
}

void Gte::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Gte::GetRndmeth() const
{
    return m_Rndmeth;
}

void Gte::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
