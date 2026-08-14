#include "Notequal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Notequal::Notequal() {}

Notequal::~Notequal() {}

const std::string& Notequal::GetOperator() const
{
  return m_Operator;
}

void Notequal::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& Notequal::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void Notequal::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& Notequal::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void Notequal::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& Notequal::GetZerocross() const
{
  return m_Zerocross;
}

void Notequal::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& Notequal::GetSampletime() const
{
  return m_Sampletime;
}

void Notequal::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& Notequal::GetRndmeth() const
{
  return m_Rndmeth;
}

void Notequal::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
