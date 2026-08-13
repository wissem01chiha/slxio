#include "FixptRelationalOperator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptRelationalOperator::FixptRelationalOperator() {}

FixptRelationalOperator::~FixptRelationalOperator() {}

const std::string& FixptRelationalOperator::GetOperator() const
{
    return m_Operator;
}

void FixptRelationalOperator::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& FixptRelationalOperator::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void FixptRelationalOperator::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& FixptRelationalOperator::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptRelationalOperator::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptRelationalOperator::GetZerocross() const
{
    return m_Zerocross;
}

void FixptRelationalOperator::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& FixptRelationalOperator::GetSampletime() const
{
    return m_Sampletime;
}

void FixptRelationalOperator::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FixptRelationalOperator::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixptRelationalOperator::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
