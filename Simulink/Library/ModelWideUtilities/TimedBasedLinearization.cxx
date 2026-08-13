#include "TimedBasedLinearization.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TimedBasedLinearization::TimedBasedLinearization() {}

TimedBasedLinearization::~TimedBasedLinearization() {}

const std::string& TimedBasedLinearization::GetLinearizationtime() const
{
    return m_Linearizationtime;
}

void TimedBasedLinearization::SetLinearizationtime(const std::string& value)
{
    m_Linearizationtime = value;
}

const std::string& TimedBasedLinearization::GetSampletime() const
{
    return m_Sampletime;
}

void TimedBasedLinearization::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
