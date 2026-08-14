#include "Or.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Or::Or() {}

Or::~Or() {}

const std::string& Or::GetOperator() const { return m_Operator; }

void Or::SetOperator(const std::string& value) { m_Operator = value; }

const std::string& Or::GetInputs() const { return m_Inputs; }

void Or::SetInputs(const std::string& value) { m_Inputs = value; }

const std::string& Or::GetIconshape() const { return m_Iconshape; }

void Or::SetIconshape(const std::string& value) { m_Iconshape = value; }

const std::string& Or::GetAllportssamedt() const { return m_Allportssamedt; }

void Or::SetAllportssamedt(const std::string& value)
{
    m_Allportssamedt = value;
}

const std::string& Or::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Or::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Or::GetSampletime() const { return m_Sampletime; }

void Or::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
