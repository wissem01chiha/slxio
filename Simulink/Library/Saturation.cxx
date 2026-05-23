#include "Saturation.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Saturation::Saturation() {}

Float32 Saturation::GetUpperLimit() const
{
  return UpperLimit;
}

void Saturation::SetUpperLimit(Float32 value)
{
  UpperLimit = value;
}

Saturation::~Saturation() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
