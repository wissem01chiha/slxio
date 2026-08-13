#include "FixptLogicalOperator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptLogicalOperator::FixptLogicalOperator() {}

FixptLogicalOperator::~FixptLogicalOperator() {}

const std::string& FixptLogicalOperator::GetOperator() const
{
    return m_Operator;
}

void FixptLogicalOperator::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& FixptLogicalOperator::GetInputs() const
{
    return m_Inputs;
}

void FixptLogicalOperator::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& FixptLogicalOperator::GetIconshape() const
{
    return m_Iconshape;
}

void FixptLogicalOperator::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& FixptLogicalOperator::GetAllportssamedt() const
{
    return m_Allportssamedt;
}

void FixptLogicalOperator::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& FixptLogicalOperator::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FixptLogicalOperator::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FixptLogicalOperator::GetSampletime() const
{
    return m_Sampletime;
}

void FixptLogicalOperator::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
