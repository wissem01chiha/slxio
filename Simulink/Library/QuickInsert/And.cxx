#include "And.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

And::And() {}

And::~And() {}

const std::string& And::GetOperator() const { return m_Operator; }

void And::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& And::GetInputs() const { return m_Inputs; }

void And::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& And::GetIconshape() const { return m_Iconshape; }

void And::SetIconshape(const std::string& value) { m_Iconshape = value; }

const std::string& And::GetAllportssamedt() const { return m_Allportssamedt; }

void And::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& And::GetOutdatatypestr() const { return m_Outdatatypestr; }

void And::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& And::GetSampletime() const { return m_Sampletime; }

void And::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
