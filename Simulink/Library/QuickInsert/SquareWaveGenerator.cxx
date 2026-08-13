#include "SquareWaveGenerator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SquareWaveGenerator::SquareWaveGenerator() {}

SquareWaveGenerator::~SquareWaveGenerator() {}

const std::string& SquareWaveGenerator::GetWaveform() const
{
    return m_Waveform;
}

void SquareWaveGenerator::SetWaveform(const std::string& value)
{
    m_Waveform = value;
}

const std::string& SquareWaveGenerator::GetTimesource() const
{
    return m_Timesource;
}

void SquareWaveGenerator::SetTimesource(const std::string& value)
{
    m_Timesource = value;
}

const std::string& SquareWaveGenerator::GetAmplitude() const
{
    return m_Amplitude;
}

void SquareWaveGenerator::SetAmplitude(const std::string& value)
{
    m_Amplitude = value;
}

const std::string& SquareWaveGenerator::GetFrequency() const
{
    return m_Frequency;
}

void SquareWaveGenerator::SetFrequency(const std::string& value)
{
    m_Frequency = value;
}

const std::string& SquareWaveGenerator::GetUnits() const
{
    return m_Units;
}

void SquareWaveGenerator::SetUnits(const std::string& value)
{
    m_Units = value;
}

const std::string& SquareWaveGenerator::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void SquareWaveGenerator::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
