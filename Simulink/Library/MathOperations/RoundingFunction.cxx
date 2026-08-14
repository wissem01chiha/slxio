#include "RoundingFunction.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

RoundingFunction::RoundingFunction() {}

RoundingFunction::~RoundingFunction() {}

const std::string& RoundingFunction::GetOperator() const { return m_Operator; }

void RoundingFunction::SetOperator(const std::string& value)
{
    m_Operator = value;
}

const std::string& RoundingFunction::GetSampletime() const
{
    return m_Sampletime;
}

void RoundingFunction::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
