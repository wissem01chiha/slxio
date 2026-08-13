#include "D1stOr4thQuad.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

D1stOr4thQuad::D1stOr4thQuad() {}

D1stOr4thQuad::~D1stOr4thQuad() {}

const std::string& D1stOr4thQuad::GetOperator() const
{
    return m_Operator;
}

void D1stOr4thQuad::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& D1stOr4thQuad::GetInputs() const
{
    return m_Inputs;
}

void D1stOr4thQuad::SetInputs(const std::string& value)
{
    m_Inputs = value;
}

const std::string& D1stOr4thQuad::GetIconshape() const
{
    return m_Iconshape;
}

void D1stOr4thQuad::SetIconshape(const std::string& value)
{
    m_Iconshape = value;
}

const std::string& D1stOr4thQuad::GetAllportssamedt() const
{
    return m_Allportssamedt;
}

void D1stOr4thQuad::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& D1stOr4thQuad::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void D1stOr4thQuad::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& D1stOr4thQuad::GetSampletime() const
{
    return m_Sampletime;
}

void D1stOr4thQuad::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
