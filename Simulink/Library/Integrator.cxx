#include "Integrator.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Integrator::Integrator() {}

float Integrator::GetValue() const
{
  return IntegratorValue;
}

void Integrator::SetValue(float value)
{
  IntegratorValue = value;
}

Integrator::~Integrator() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
