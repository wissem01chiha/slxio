#include "Integrator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Integrator::Integrator() {}

float Integrator::GetValue() const { return IntegratorValue; }

void Integrator::SetValue(float value) { IntegratorValue = value; }

Integrator::~Integrator() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
