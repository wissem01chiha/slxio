#include "WeightedSampleTime.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

WeightedSampleTime::WeightedSampleTime() {}

WeightedSampleTime::~WeightedSampleTime() {}

const std::string& WeightedSampleTime::GetTsampmathop() const
{
  return m_Tsampmathop;
}

void WeightedSampleTime::SetTsampmathop(const std::string& value)
{
  m_Tsampmathop = value;
}

const std::string& WeightedSampleTime::GetWeightvalue() const
{
  return m_Weightvalue;
}

void WeightedSampleTime::SetWeightvalue(const std::string& value)
{
  m_Weightvalue = value;
}

const std::string& WeightedSampleTime::GetTsampmathimp() const
{
  return m_Tsampmathimp;
}

void WeightedSampleTime::SetTsampmathimp(const std::string& value)
{
  m_Tsampmathimp = value;
}

const std::string& WeightedSampleTime::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void WeightedSampleTime::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& WeightedSampleTime::GetRndmeth() const
{
  return m_Rndmeth;
}

void WeightedSampleTime::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& WeightedSampleTime::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void WeightedSampleTime::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
