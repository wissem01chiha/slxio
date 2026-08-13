#include "VariablePulseGenerator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

VariablePulseGenerator::VariablePulseGenerator() {}

VariablePulseGenerator::~VariablePulseGenerator() {}

const std::string& VariablePulseGenerator::GetAllowzeropulsewidth() const
{
    return m_Allowzeropulsewidth;
}

void VariablePulseGenerator::SetAllowzeropulsewidth(const std::string& value)
{
    m_Allowzeropulsewidth = value;
}

const std::string& VariablePulseGenerator::GetRunatfixedtimeintervals() const
{
    return m_Runatfixedtimeintervals;
}

void VariablePulseGenerator::SetRunatfixedtimeintervals(const std::string& value)
{
    m_Runatfixedtimeintervals = value;
}

const std::string& VariablePulseGenerator::GetSampletime() const
{
    return m_Sampletime;
}

void VariablePulseGenerator::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
