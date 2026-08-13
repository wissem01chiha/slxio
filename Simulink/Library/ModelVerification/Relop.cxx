#include "Relop.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Relop::Relop() {}

Relop::~Relop() {}

const std::string& Relop::GetOperator() const
{
    return m_Operator;
}

void Relop::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Relop::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Relop::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Relop::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Relop::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Relop::GetZerocross() const
{
    return m_Zerocross;
}

void Relop::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Relop::GetSampletime() const
{
    return m_Sampletime;
}

void Relop::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Relop::GetRndmeth() const
{
    return m_Rndmeth;
}

void Relop::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
