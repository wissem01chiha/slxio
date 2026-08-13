#include "RiseRelop.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RiseRelop::RiseRelop() {}

RiseRelop::~RiseRelop() {}

const std::string& RiseRelop::GetOperator() const
{
    return m_Operator;
}

void RiseRelop::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& RiseRelop::GetInputsamedt() const
{
    return m_Inputsamedt;
}

void RiseRelop::SetInputsamedt(const std::string& value)
{
    m_Inputsamedt = value;
}

const std::string& RiseRelop::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void RiseRelop::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& RiseRelop::GetZerocross() const
{
    return m_Zerocross;
}

void RiseRelop::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& RiseRelop::GetSampletime() const
{
    return m_Sampletime;
}

void RiseRelop::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& RiseRelop::GetRndmeth() const
{
    return m_Rndmeth;
}

void RiseRelop::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
