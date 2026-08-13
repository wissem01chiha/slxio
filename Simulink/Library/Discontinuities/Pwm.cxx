#include "Pwm.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Pwm::Pwm() {}

Pwm::~Pwm() {}

const std::string& Pwm::GetPeriod() const
{
    return m_Period;
}

void Pwm::SetPeriod(const std::string& value)
{
    m_Period = value;
}

const std::string& Pwm::GetInitialdelay() const
{
    return m_Initialdelay;
}

void Pwm::SetInitialdelay(const std::string& value)
{
    m_Initialdelay = value;
}

const std::string& Pwm::GetDisallowzerodutycycle() const
{
    return m_Disallowzerodutycycle;
}

void Pwm::SetDisallowzerodutycycle(const std::string& value)
{
    m_Disallowzerodutycycle = value;
}

const std::string& Pwm::GetRunatfixedtimeintervals() const
{
    return m_Runatfixedtimeintervals;
}

void Pwm::SetRunatfixedtimeintervals(const std::string& value)
{
    m_Runatfixedtimeintervals = value;
}

const std::string& Pwm::GetSampletime() const
{
    return m_Sampletime;
}

void Pwm::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
