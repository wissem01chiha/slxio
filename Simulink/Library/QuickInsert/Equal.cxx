#include "Equal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Equal::Equal() {}

Equal::~Equal() {}

const std::string& Equal::GetOperator() const
{
  return m_Operator;
}

void Equal::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Equal::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void Equal::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& Equal::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Equal::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Equal::GetZerocross() const
{
  return m_Zerocross;
}

void Equal::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Equal::GetSampletime() const
{
  return m_Sampletime;
}

void Equal::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Equal::GetRndmeth() const
{
  return m_Rndmeth;
}

void Equal::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
