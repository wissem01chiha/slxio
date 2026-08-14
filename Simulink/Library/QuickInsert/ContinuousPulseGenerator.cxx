#include "ContinuousPulseGenerator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ContinuousPulseGenerator::ContinuousPulseGenerator() {}

ContinuousPulseGenerator::~ContinuousPulseGenerator() {}

const std::string& ContinuousPulseGenerator::GetPulsetype() const
{
  return m_Pulsetype;
}

void ContinuousPulseGenerator::SetPulsetype(const std::string& value)
{
  m_Pulsetype = value;
}

const std::string& ContinuousPulseGenerator::GetTimesource() const
{
  return m_Timesource;
}

void ContinuousPulseGenerator::SetTimesource(const std::string& value)
{
  m_Timesource = value;
}

const std::string& ContinuousPulseGenerator::GetAmplitude() const
{
  return m_Amplitude;
}

void ContinuousPulseGenerator::SetAmplitude(const std::string& value)
{
  m_Amplitude = value;
}

const std::string& ContinuousPulseGenerator::GetPeriod() const
{
  return m_Period;
}

void ContinuousPulseGenerator::SetPeriod(const std::string& value)
{
  m_Period = value;
}

const std::string& ContinuousPulseGenerator::GetPulsewidth() const
{
  return m_Pulsewidth;
}

void ContinuousPulseGenerator::SetPulsewidth(const std::string& value)
{
  m_Pulsewidth = value;
}

const std::string& ContinuousPulseGenerator::GetPhasedelay() const
{
  return m_Phasedelay;
}

void ContinuousPulseGenerator::SetPhasedelay(const std::string& value)
{
  m_Phasedelay = value;
}

const std::string& ContinuousPulseGenerator::GetSampletime() const
{
  return m_Sampletime;
}

void ContinuousPulseGenerator::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& ContinuousPulseGenerator::GetVectorparams1d() const
{
  return m_Vectorparams1d;
}

void ContinuousPulseGenerator::SetVectorparams1d(const std::string& value)
{
  m_Vectorparams1d = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
