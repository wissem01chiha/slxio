#include "Lessthanorequal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Lessthanorequal::Lessthanorequal() {}

Lessthanorequal::~Lessthanorequal() {}

const std::string& Lessthanorequal::GetOperator() const
{
  return m_Operator;
}

void Lessthanorequal::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Lessthanorequal::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void Lessthanorequal::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& Lessthanorequal::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Lessthanorequal::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Lessthanorequal::GetZerocross() const
{
  return m_Zerocross;
}

void Lessthanorequal::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Lessthanorequal::GetSampletime() const
{
  return m_Sampletime;
}

void Lessthanorequal::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Lessthanorequal::GetRndmeth() const
{
  return m_Rndmeth;
}

void Lessthanorequal::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
