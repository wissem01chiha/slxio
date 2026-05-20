#include "LogicalOperator.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

LogicalOperator::LogicalOperator() {}

Float32 LogicalOperator::GetOperatorCode() const
{
  return OperatorCode;
}

void LogicalOperator::SetOperatorCode(Float32 value)
{
  OperatorCode = value;
}

LogicalOperator::~LogicalOperator()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
