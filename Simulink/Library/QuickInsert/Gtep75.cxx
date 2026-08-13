#include "Gtep75.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Gtep75::Gtep75() {}

Gtep75::~Gtep75() {}

const std::string& Gtep75::GetOperator() const
{
    return m_Operator;
}

void Gtep75::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Gtep75::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Gtep75::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Gtep75::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Gtep75::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Gtep75::GetZerocross() const
{
    return m_Zerocross;
}

void Gtep75::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Gtep75::GetSampletime() const
{
    return m_Sampletime;
}

void Gtep75::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Gtep75::GetRndmeth() const
{
    return m_Rndmeth;
}

void Gtep75::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
