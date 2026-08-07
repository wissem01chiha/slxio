#include "Switch.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Switch::Switch() {}

Float32 Switch::GetThreshold() const { return Threshold; }

void Switch::SetThreshold(Float32 value) { Threshold = value; }

Switch::~Switch() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
