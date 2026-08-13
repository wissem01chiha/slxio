#include "MinRelop.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

MinRelop::MinRelop() {}

MinRelop::~MinRelop() {}

const std::string& MinRelop::GetOperator() const
{
    return m_Operator;
}

void MinRelop::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& MinRelop::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void MinRelop::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& MinRelop::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void MinRelop::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& MinRelop::GetZerocross() const
{
    return m_Zerocross;
}

void MinRelop::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& MinRelop::GetSampletime() const
{
    return m_Sampletime;
}

void MinRelop::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& MinRelop::GetRndmeth() const
{
    return m_Rndmeth;
}

void MinRelop::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
