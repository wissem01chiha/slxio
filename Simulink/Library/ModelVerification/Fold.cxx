#include "Fold.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Fold::Fold() {}

Fold::~Fold() {}

const std::string& Fold::GetOperator() const
{
    return m_Operator;
}

void Fold::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Fold::GetInputs() const
{
    return m_Inputs;
}

void Fold::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Fold::GetIconshape() const
{
    return m_Iconshape;
}

void Fold::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Fold::GetAllportssamedt() const
{
    return m_Allportssamedt;
}

void Fold::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Fold::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Fold::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Fold::GetSampletime() const
{
    return m_Sampletime;
}

void Fold::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
