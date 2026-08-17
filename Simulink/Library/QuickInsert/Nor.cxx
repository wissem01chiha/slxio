#include "Nor.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Nor::Nor() {}

Nor::~Nor() {}

const std::string& Nor::GetOperator() const { return m_Operator; }

void Nor::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Nor::GetInputs() const { return m_Inputs; }

void Nor::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& Nor::GetIconshape() const { return m_Iconshape; }

void Nor::SetIconshape(const std::string& value) { m_Iconshape = value; }

const std::string& Nor::GetAllportssamedt() const { return m_Allportssamedt; }

void Nor::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Nor::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Nor::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Nor::GetSampletime() const { return m_Sampletime; }

void Nor::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
