#include "SignalGenerator.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SignalGenerator::SignalGenerator() {}

SignalGenerator::~SignalGenerator() {}

const std::string& SignalGenerator::GetWaveform() const { return m_Waveform; }

void SignalGenerator::SetWaveform(const std::string& value)
{
    m_Waveform = value;
}

const std::string& SignalGenerator::GetTimesource() const
{
    return m_Timesource;
}

void SignalGenerator::SetTimesource(const std::string& value)
{
    m_Timesource = value;
}

const std::string& SignalGenerator::GetAmplitude() const { return m_Amplitude; }

void SignalGenerator::SetAmplitude(const std::string& value)
{
    m_Amplitude = value;
}

const std::string& SignalGenerator::GetFrequency() const { return m_Frequency; }

void SignalGenerator::SetFrequency(const std::string& value)
{
    m_Frequency = value;
}

const std::string& SignalGenerator::GetUnits() const { return m_Units; }

void SignalGenerator::SetUnits(const std::string& value) { m_Units = value; }

const std::string& SignalGenerator::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void SignalGenerator::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
