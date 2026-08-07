#include "Constant.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

void Constant::SetValue(Float32 value) { ConstantValue = value; }

Float32 Constant::GetValue() const { return ConstantValue; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
