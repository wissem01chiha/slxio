#include "DiscretePulseGenerator.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DiscretePulseGenerator::DiscretePulseGenerator() {}

DiscretePulseGenerator::~DiscretePulseGenerator() {}

const std::string& DiscretePulseGenerator::GetPulsetype() const
{
    return m_Pulsetype;
}

void DiscretePulseGenerator::SetPulsetype(const std::string& value)
{
    m_Pulsetype = value;
}

const std::string& DiscretePulseGenerator::GetTimesource() const
{
    return m_Timesource;
}

void DiscretePulseGenerator::SetTimesource(const std::string& value)
{
    m_Timesource = value;
}

const std::string& DiscretePulseGenerator::GetAmplitude() const
{
    return m_Amplitude;
}

void DiscretePulseGenerator::SetAmplitude(const std::string& value)
{
    m_Amplitude = value;
}

const std::string& DiscretePulseGenerator::GetPeriod() const
{
    return m_Period;
}

void DiscretePulseGenerator::SetPeriod(const std::string& value)
{
    m_Period = value;
}

const std::string& DiscretePulseGenerator::GetPulsewidth() const
{
    return m_Pulsewidth;
}

void DiscretePulseGenerator::SetPulsewidth(const std::string& value)
{
    m_Pulsewidth = value;
}

const std::string& DiscretePulseGenerator::GetPhasedelay() const
{
    return m_Phasedelay;
}

void DiscretePulseGenerator::SetPhasedelay(const std::string& value)
{
    m_Phasedelay = value;
}

const std::string& DiscretePulseGenerator::GetSampletime() const
{
    return m_Sampletime;
}

void DiscretePulseGenerator::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DiscretePulseGenerator::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void DiscretePulseGenerator::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
