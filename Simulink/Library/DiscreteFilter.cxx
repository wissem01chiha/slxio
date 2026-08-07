#include "DiscreteFilter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteFilter::DiscreteFilter() {}

Float32 DiscreteFilter::GetFilterCoefficient() const {
  return FilterCoefficient;
}

void DiscreteFilter::SetFilterCoefficient(Float32 value) {
  FilterCoefficient = value;
}

DiscreteFilter::~DiscreteFilter() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
