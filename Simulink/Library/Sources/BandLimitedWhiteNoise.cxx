#include "BandLimitedWhiteNoise.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

BandLimitedWhiteNoise::BandLimitedWhiteNoise() {}

BandLimitedWhiteNoise::~BandLimitedWhiteNoise() {}

const std::string& BandLimitedWhiteNoise::GetCov() const { return m_Cov; }

void BandLimitedWhiteNoise::SetCov(const std::string& value) { m_Cov = value; }

const std::string& BandLimitedWhiteNoise::GetTs() const { return m_Ts; }

void BandLimitedWhiteNoise::SetTs(const std::string& value) { m_Ts = value; }

const std::string& BandLimitedWhiteNoise::GetSeed() const { return m_Seed; }

void BandLimitedWhiteNoise::SetSeed(const std::string& value)
{
    m_Seed = value;
}

const std::string& BandLimitedWhiteNoise::GetVectorparams1d() const
{
    return m_Vectorparams1d;
}

void BandLimitedWhiteNoise::SetVectorparams1d(const std::string& value)
{
    m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
