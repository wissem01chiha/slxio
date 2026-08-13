#include "Nand.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Nand::Nand() {}

Nand::~Nand() {}

const std::string& Nand::GetOperator() const
{
    return m_Operator;
}

void Nand::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& Nand::GetInputs() const
{
    return m_Inputs;
}

void Nand::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& Nand::GetIconshape() const
{
    return m_Iconshape;
}

void Nand::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& Nand::GetAllportssamedt() const
{
    return m_Allportssamedt;
}

void Nand::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Nand::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Nand::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Nand::GetSampletime() const
{
    return m_Sampletime;
}

void Nand::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
