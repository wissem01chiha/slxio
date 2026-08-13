#include "LessThan.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

LessThan::LessThan() {}

LessThan::~LessThan() {}

const std::string& LessThan::GetOperator() const
{
    return m_Operator;
}

void LessThan::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& LessThan::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void LessThan::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& LessThan::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void LessThan::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& LessThan::GetZerocross() const
{
    return m_Zerocross;
}

void LessThan::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& LessThan::GetSampletime() const
{
    return m_Sampletime;
}

void LessThan::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& LessThan::GetRndmeth() const
{
    return m_Rndmeth;
}

void LessThan::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
