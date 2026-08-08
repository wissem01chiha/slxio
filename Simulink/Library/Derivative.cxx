#include "Derivative.h"

namespace slxio {
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
}; // namespace slxio
