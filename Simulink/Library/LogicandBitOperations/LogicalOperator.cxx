#include "LogicalOperator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

LogicalOperator::LogicalOperator() {}

LogicalOperator::~LogicalOperator() {}

const std::string& LogicalOperator::GetOperator() const
{
  return m_Operator;
}

void LogicalOperator::SetOperator(const std::string& value)
{
  m_Operator = value;
}

const std::string& LogicalOperator::GetInputs() const
{
  return m_Inputs;
}

void LogicalOperator::SetInputs(const std::string& value)
{
  m_Inputs = value;
}

const std::string& LogicalOperator::GetIconshape() const
{
  return m_Iconshape;
}

void LogicalOperator::SetIconshape(const std::string& value)
{
  m_Iconshape = value;
}

const std::string& LogicalOperator::GetAllportssamedt() const
{
  return m_Allportssamedt;
}

void LogicalOperator::SetAllportssamedt(const std::string& value)
{
  m_Allportssamedt = value;
}

const std::string& LogicalOperator::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void LogicalOperator::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& LogicalOperator::GetSampletime() const
{
  return m_Sampletime;
}

void LogicalOperator::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
