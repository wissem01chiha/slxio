#include "Nxor.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Nxor::Nxor() {}

Nxor::~Nxor() {}

const std::string& Nxor::GetOperator() const
{
    return m_Operator;
}

void Nxor::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Nxor::GetInputs() const
{
    return m_Inputs;
}

void Nxor::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Nxor::GetIconshape() const
{
    return m_Iconshape;
}

void Nxor::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Nxor::GetAllportssamedt() const
{
    return m_Allportssamedt;
}

void Nxor::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Nxor::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Nxor::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Nxor::GetSampletime() const
{
    return m_Sampletime;
}

void Nxor::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
