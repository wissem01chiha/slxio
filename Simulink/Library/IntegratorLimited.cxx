#include "IntegratorLimited.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

IntegratorLimited::IntegratorLimited() {}

Float32 IntegratorLimited::GetUpperLimit() const
{
  return UpperLimit;
}

void IntegratorLimited::SetUpperLimit(Float32 value)
{
  UpperLimit = value;
}

IntegratorLimited::~IntegratorLimited() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
