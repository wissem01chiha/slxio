#include "FixptRelationalOperator3.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptRelationalOperator3::FixptRelationalOperator3() {}

FixptRelationalOperator3::~FixptRelationalOperator3() {}

const std::string& FixptRelationalOperator3::GetOperator() const
{
    return m_Operator;
}

void FixptRelationalOperator3::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& FixptRelationalOperator3::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void FixptRelationalOperator3::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& FixptRelationalOperator3::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptRelationalOperator3::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptRelationalOperator3::GetZerocross() const
{
    return m_Zerocross;
}

void FixptRelationalOperator3::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& FixptRelationalOperator3::GetSampletime() const
{
    return m_Sampletime;
}

void FixptRelationalOperator3::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FixptRelationalOperator3::GetRndmeth() const
{
    return m_Rndmeth;
}

void FixptRelationalOperator3::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
