#include "Constant.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

void Constant::SetValue(Float32 value) {
    ConstantValue = value;
}

Float32 Constant::GetValue() const
{
  return ConstantValue;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


