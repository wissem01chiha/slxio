#include "IntegratorSecondOrder.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IntegratorSecondOrder::IntegratorSecondOrder() {}

Float32 IntegratorSecondOrder::GetNaturalFrequency() const
{
  return NaturalFrequency;
}

void IntegratorSecondOrder::SetNaturalFrequency(Float32 value)
{
  NaturalFrequency = value;
}

IntegratorSecondOrder::~IntegratorSecondOrder() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
