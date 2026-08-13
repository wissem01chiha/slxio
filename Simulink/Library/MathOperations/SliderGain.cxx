#include "SliderGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SliderGain::SliderGain() {}

SliderGain::~SliderGain() {}

const std::string& SliderGain::GetGain() const
{
    return m_Gain;
}

void SliderGain::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& SliderGain::GetLow() const
{
    return m_Low;
}

void SliderGain::SetLow(const std::string& value)
{
    m_Low = value;
}

const std::string& SliderGain::GetHigh() const
{
    return m_High;
}

void SliderGain::SetHigh(const std::string& value)
{
    m_High = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
