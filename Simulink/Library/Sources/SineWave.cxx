#include "SineWave.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SineWave::SineWave() {}

SineWave::~SineWave() {}

const std::string& SineWave::GetSinetype() const
{
    return m_Sinetype;
}

void SineWave::SetSinetype(const std::string& value)
{
    m_Sinetype = value;
}

const std::string& SineWave::GetTimesource() const
{
    return m_Timesource;
}

void SineWave::SetTimesource(const std::string& value)
{
    m_Timesource = value;
}

const std::string& SineWave::GetAmplitude() const
{
    return m_Amplitude;
}

void SineWave::SetAmplitude(const std::string& value)
{
    m_Amplitude = value;
}

const std::string& SineWave::GetBias() const
{
    return m_Bias;
}

void SineWave::SetBias(const std::string& value)
{
    m_Bias = value;
}

const std::string& SineWave::GetFrequency() const
{
    return m_Frequency;
}

void SineWave::SetFrequency(const std::string& value)
{
    m_Frequency = value;
}

const std::string& SineWave::GetPhase() const
{
    return m_Phase;
}

void SineWave::SetPhase(const std::string& value)
{
    m_Phase = value;
}

const std::string& SineWave::GetSamples() const
{
    return m_Samples;
}

void SineWave::SetSamples(const std::string& value)
{
    m_Samples = value;
}

const std::string& SineWave::GetOffset() const
{
    return m_Offset;
}

void SineWave::SetOffset(const std::string& value)
{
    m_Offset = value;
}

const std::string& SineWave::GetSampletime() const
{
    return m_Sampletime;
}

void SineWave::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& SineWave::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void SineWave::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
