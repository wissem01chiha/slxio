#include "Greaterthanorequal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Greaterthanorequal::Greaterthanorequal() {}

Greaterthanorequal::~Greaterthanorequal() {}

const std::string& Greaterthanorequal::GetOperator() const
{
    return m_Operator;
}

void Greaterthanorequal::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Greaterthanorequal::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void Greaterthanorequal::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& Greaterthanorequal::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Greaterthanorequal::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Greaterthanorequal::GetZerocross() const
{
    return m_Zerocross;
}

void Greaterthanorequal::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& Greaterthanorequal::GetSampletime() const
{
    return m_Sampletime;
}

void Greaterthanorequal::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Greaterthanorequal::GetRndmeth() const
{
    return m_Rndmeth;
}

void Greaterthanorequal::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
