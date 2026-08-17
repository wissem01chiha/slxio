#include "Not.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Not::Not() {}

Not::~Not() {}

const std::string& Not::GetOperator() const { return m_Operator; }

void Not::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Not::GetInputs() const { return m_Inputs; }

void Not::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& Not::GetIconshape() const { return m_Iconshape; }

void Not::SetIconshape(const std::string& value) { m_Iconshape = value; }

const std::string& Not::GetAllportssamedt() const { return m_Allportssamedt; }

void Not::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Not::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Not::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Not::GetSampletime() const { return m_Sampletime; }

void Not::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
