#include "DiscreteDerivative.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteDerivative::DiscreteDerivative() {}

Float32 DiscreteDerivative::GetSampleTime() const
{
  return SampleTime;
}

void DiscreteDerivative::SetSampleTime(Float32 value)
{
  SampleTime = value;
}

DiscreteDerivative::~DiscreteDerivative() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
