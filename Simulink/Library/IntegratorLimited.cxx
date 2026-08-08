#include "IntegratorLimited.h"

namespace slxio {
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
}; // namespace slxio
