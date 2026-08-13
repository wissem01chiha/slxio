#include "FallRelop.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FallRelop::FallRelop() {}

FallRelop::~FallRelop() {}

const std::string& FallRelop::GetOperator() const
{
    return m_Operator;
}

void FallRelop::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& FallRelop::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void FallRelop::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& FallRelop::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FallRelop::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FallRelop::GetZerocross() const
{
    return m_Zerocross;
}

void FallRelop::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& FallRelop::GetSampletime() const
{
    return m_Sampletime;
}

void FallRelop::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FallRelop::GetRndmeth() const
{
    return m_Rndmeth;
}

void FallRelop::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
