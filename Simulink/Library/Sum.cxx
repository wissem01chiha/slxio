#include "Sum.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Sum::Sum() {}

Float32 Sum::GetValue() const
{
  return SumValue;
}

void Sum::SetValue(Float32 value)
{
  SumValue = value;
}

Sum::~Sum() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
