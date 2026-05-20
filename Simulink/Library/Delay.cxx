#include "Delay.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Delay::Delay() {}

float Delay::GetDelayTime() const
{
  return DelayTime;
}

void Delay::SetDelayTime(float delayTime)
{
  DelayTime = delayTime;
}

Delay::~Delay()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
