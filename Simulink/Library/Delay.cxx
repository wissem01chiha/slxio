#include "Delay.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Delay::Delay() {}

float Delay::GetDelayTime() const { return DelayTime; }

void Delay::SetDelayTime(float delayTime) { DelayTime = delayTime; }

Delay::~Delay() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
