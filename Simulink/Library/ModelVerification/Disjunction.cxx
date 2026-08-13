#include "Disjunction.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Disjunction::Disjunction() {}

Disjunction::~Disjunction() {}

const std::string& Disjunction::GetOperator() const
{
    return m_Operator;
}

void Disjunction::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Disjunction::GetInputs() const
{
    return m_Inputs;
}

void Disjunction::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Disjunction::GetIconshape() const
{
    return m_Iconshape;
}

void Disjunction::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Disjunction::GetAllportssamedt() const
{
    return m_Allportssamedt;
}

void Disjunction::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Disjunction::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Disjunction::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Disjunction::GetSampletime() const
{
    return m_Sampletime;
}

void Disjunction::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
