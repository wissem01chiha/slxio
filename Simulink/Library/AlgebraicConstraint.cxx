#include "AlgebraicConstraint.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

AlgebraicConstraint::AlgebraicConstraint() {}

Float32 AlgebraicConstraint::GetConstraintValue() const {
  return ConstraintValue;
}

void AlgebraicConstraint::SetConstraintValue(Float32 value) {
  ConstraintValue = value;
}

AlgebraicConstraint::~AlgebraicConstraint() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
