#include "TriggerBasedLinearization.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TriggerBasedLinearization::TriggerBasedLinearization() {}

TriggerBasedLinearization::~TriggerBasedLinearization() {}

const std::string& TriggerBasedLinearization::GetTriggertype() const
{
    return m_Triggertype;
}

void TriggerBasedLinearization::SetTriggertype(const std::string& value)
{
    m_Triggertype = value;
}

const std::string& TriggerBasedLinearization::GetSampletime() const
{
    return m_Sampletime;
}

void TriggerBasedLinearization::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
