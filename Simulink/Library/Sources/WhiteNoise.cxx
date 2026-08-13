#include "WhiteNoise.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

WhiteNoise::WhiteNoise() {}

WhiteNoise::~WhiteNoise() {}

const std::string& WhiteNoise::GetMean() const
{
    return m_Mean;
}

void WhiteNoise::SetMean(const std::string& value)
{
    m_Mean = value;
}

const std::string& WhiteNoise::GetVariance() const
{
    return m_Variance;
}

void WhiteNoise::SetVariance(const std::string& value)
{
    m_Variance = value;
}

const std::string& WhiteNoise::GetSeed() const
{
    return m_Seed;
}

void WhiteNoise::SetSeed(const std::string& value)
{
    m_Seed = value;
}

const std::string& WhiteNoise::GetSampletime() const
{
    return m_Sampletime;
}

void WhiteNoise::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& WhiteNoise::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void WhiteNoise::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
