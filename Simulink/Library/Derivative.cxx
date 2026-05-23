#include "Derivative.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Derivative::Derivative() {}

Float32 Derivative::GetDerivativeGain() const
{
  return DerivativeGain;
}

void Derivative::SetDerivativeGain(Float32 value)
{
  DerivativeGain = value;
}

Derivative::~Derivative() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
