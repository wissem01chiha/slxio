#include "Abs.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Abs::Abs() {}

Float32 Abs::GetInputValue() const
{
  return InputValue;
}

void Abs::SetInputValue(Float32 value)
{
  InputValue = value;
}

Abs::~Abs()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
