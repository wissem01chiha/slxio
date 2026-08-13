#include "PulseGenerator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PulseGenerator::PulseGenerator() {}

PulseGenerator::~PulseGenerator() {}

const std::string& PulseGenerator::GetPulsetype() const
{
    return m_Pulsetype;
}

void PulseGenerator::SetPulsetype(const std::string& value)
{
    m_Pulsetype = value;
}

const std::string& PulseGenerator::GetTimesource() const
{
    return m_Timesource;
}

void PulseGenerator::SetTimesource(const std::string& value)
{
    m_Timesource = value;
}

const std::string& PulseGenerator::GetAmplitude() const
{
    return m_Amplitude;
}

void PulseGenerator::SetAmplitude(const std::string& value)
{
    m_Amplitude = value;
}

const std::string& PulseGenerator::GetPeriod() const
{
    return m_Period;
}

void PulseGenerator::SetPeriod(const std::string& value)
{
    m_Period = value;
}

const std::string& PulseGenerator::GetPulsewidth() const
{
    return m_Pulsewidth;
}

void PulseGenerator::SetPulsewidth(const std::string& value)
{
    m_Pulsewidth = value;
}

const std::string& PulseGenerator::GetPhasedelay() const
{
    return m_Phasedelay;
}

void PulseGenerator::SetPhasedelay(const std::string& value)
{
    m_Phasedelay = value;
}

const std::string& PulseGenerator::GetSampletime() const
{
    return m_Sampletime;
}

void PulseGenerator::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& PulseGenerator::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void PulseGenerator::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
