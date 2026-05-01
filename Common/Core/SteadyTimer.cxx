#include "SteadyTimer.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

void SteadyTimer::Start() {}

void SteadyTimer::Stop() {}

void SteadyTimer::Reset() {}

bool SteadyTimer::IsRunning() const
{
  return false;
}

Float32 SteadyTimer::Precision() const
{
  return Float32();
}

Float32 SteadyTimer::Time()
{
  return Float32();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


