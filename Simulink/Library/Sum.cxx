#include "Sum.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sum::Sum() {}

Float32 Sum::GetValue() const { return SumValue; }

void Sum::SetValue(Float32 value) { SumValue = value; }

Sum::~Sum() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
