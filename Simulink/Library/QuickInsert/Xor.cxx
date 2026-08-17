#include "Xor.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Xor::Xor() {}

Xor::~Xor() {}

const std::string& Xor::GetOperator() const { return m_Operator; }

void Xor::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Xor::GetInputs() const { return m_Inputs; }

void Xor::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& Xor::GetIconshape() const { return m_Iconshape; }

void Xor::SetIconshape(const std::string& value) { m_Iconshape = value; }

const std::string& Xor::GetAllportssamedt() const { return m_Allportssamedt; }

void Xor::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Xor::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Xor::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Xor::GetSampletime() const { return m_Sampletime; }

void Xor::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
