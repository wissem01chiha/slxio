#include "SawtoothGenerator.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SawtoothGenerator::SawtoothGenerator() {}

SawtoothGenerator::~SawtoothGenerator() {}

const std::string& SawtoothGenerator::GetWaveform() const { return m_Waveform; }

void SawtoothGenerator::SetWaveform(const std::string& value)
{
    m_Waveform = value;
}

const std::string& SawtoothGenerator::GetTimesource() const
{
    return m_Timesource;
}

void SawtoothGenerator::SetTimesource(const std::string& value)
{
    m_Timesource = value;
}

const std::string& SawtoothGenerator::GetAmplitude() const
{
    return m_Amplitude;
}

void SawtoothGenerator::SetAmplitude(const std::string& value)
{
    m_Amplitude = value;
}

const std::string& SawtoothGenerator::GetFrequency() const
{
    return m_Frequency;
}

void SawtoothGenerator::SetFrequency(const std::string& value)
{
    m_Frequency = value;
}

const std::string& SawtoothGenerator::GetUnits() const { return m_Units; }

void SawtoothGenerator::SetUnits(const std::string& value) { m_Units = value; }

const std::string& SawtoothGenerator::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void SawtoothGenerator::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
