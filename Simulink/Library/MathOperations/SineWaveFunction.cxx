#include "SineWaveFunction.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SineWaveFunction::SineWaveFunction() {}

SineWaveFunction::~SineWaveFunction() {}

const std::string& SineWaveFunction::GetSinetype() const { return m_Sinetype; }

void SineWaveFunction::SetSinetype(const std::string& value)
{
    m_Sinetype = value;
}

const std::string& SineWaveFunction::GetTimesource() const
{
    return m_Timesource;
}

void SineWaveFunction::SetTimesource(const std::string& value)
{
    m_Timesource = value;
}

const std::string& SineWaveFunction::GetAmplitude() const
{
    return m_Amplitude;
}

void SineWaveFunction::SetAmplitude(const std::string& value)
{
    m_Amplitude = value;
}

const std::string& SineWaveFunction::GetBias() const { return m_Bias; }

void SineWaveFunction::SetBias(const std::string& value) { m_Bias = value; }

const std::string& SineWaveFunction::GetFrequency() const
{
    return m_Frequency;
}

void SineWaveFunction::SetFrequency(const std::string& value)
{
    m_Frequency = value;
}

const std::string& SineWaveFunction::GetPhase() const { return m_Phase; }

void SineWaveFunction::SetPhase(const std::string& value) { m_Phase = value; }

const std::string& SineWaveFunction::GetSamples() const { return m_Samples; }

void SineWaveFunction::SetSamples(const std::string& value)
{
    m_Samples = value;
}

const std::string& SineWaveFunction::GetOffset() const { return m_Offset; }

void SineWaveFunction::SetOffset(const std::string& value) { m_Offset = value; }

const std::string& SineWaveFunction::GetSampletime() const
{
    return m_Sampletime;
}

void SineWaveFunction::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& SineWaveFunction::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void SineWaveFunction::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
