#include "DigitalClock.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DigitalClock::DigitalClock() {}

DigitalClock::~DigitalClock() {}

const std::string& DigitalClock::GetSampletime() const { return m_Sampletime; }

void DigitalClock::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
