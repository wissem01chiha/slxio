#include "RelationalOperator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RelationalOperator::RelationalOperator() {}

RelationalOperator::~RelationalOperator() {}

const std::string& RelationalOperator::GetOperator() const
{
  return m_Operator;
}

void RelationalOperator::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& RelationalOperator::GetInputsamedt() const
{
  return m_Inputsamedt;
}

void RelationalOperator::SetInputsamedt(const std::string& value)
{
  m_Inputsamedt = value;
}

const std::string& RelationalOperator::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void RelationalOperator::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& RelationalOperator::GetZerocross() const
{
  return m_Zerocross;
}

void RelationalOperator::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& RelationalOperator::GetSampletime() const
{
  return m_Sampletime;
}

void RelationalOperator::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& RelationalOperator::GetRndmeth() const
{
  return m_Rndmeth;
}

void RelationalOperator::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
