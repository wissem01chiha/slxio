#include "Conjunction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Conjunction::Conjunction() {}

Conjunction::~Conjunction() {}

const std::string& Conjunction::GetOperator() const
{
    return m_Operator;
}

void Conjunction::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Conjunction::GetInputs() const
{
    return m_Inputs;
}

void Conjunction::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Conjunction::GetIconshape() const
{
    return m_Iconshape;
}

void Conjunction::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Conjunction::GetAllportssamedt() const
{
    return m_Allportssamedt;
}

void Conjunction::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Conjunction::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Conjunction::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Conjunction::GetSampletime() const
{
    return m_Sampletime;
}

void Conjunction::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
