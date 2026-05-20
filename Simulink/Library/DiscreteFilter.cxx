#include "DiscreteFilter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteFilter::DiscreteFilter() {}

Float32 DiscreteFilter::GetFilterCoefficient() const
{
  return FilterCoefficient;
}

void DiscreteFilter::SetFilterCoefficient(Float32 value)
{
  FilterCoefficient = value;
}

DiscreteFilter::~DiscreteFilter()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
