#include "RandomNumber.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RandomNumber::RandomNumber() {}

RandomNumber::~RandomNumber() {}

const std::string& RandomNumber::GetMean() const
{
  return m_Mean;
}

void RandomNumber::SetMean(const std::string& value)
{
  m_Mean = value;
}

const std::string& RandomNumber::GetVariance() const
{
  return m_Variance;
}

void RandomNumber::SetVariance(const std::string& value)
{
  m_Variance = value;
}

const std::string& RandomNumber::GetSeed() const
{
  return m_Seed;
}

void RandomNumber::SetSeed(const std::string& value)
{
  m_Seed = value;
}

const std::string& RandomNumber::GetSampletime() const
{
  return m_Sampletime;
}

void RandomNumber::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& RandomNumber::GetVectorparams1d() const
{
  return m_Vectorparams1d;
}

void RandomNumber::SetVectorparams1d(const std::string& value)
{
  m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
