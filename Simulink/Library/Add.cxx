#include "Add.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Add::Add() {}

Float32 Add::GetOperandValue() const
{
  return OperandValue;
}

void Add::SetOperandValue(Float32 value)
{
  OperandValue = value;
}

Add::~Add() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
