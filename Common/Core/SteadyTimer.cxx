#include "SteadyTimer.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Float32 DurationToSeconds(const SteadyTimer::Clock::duration& d)
{
  return std::chrono::duration_cast<std::chrono::duration<Float32>>(d).count();
}

void SteadyTimer::Start()
{
  if (!Running)
  {
    StartTime = Clock::now();
    Running = true;
  }
}

void SteadyTimer::Stop()
{
  if (Running)
  {
    Accumulated += Clock::now() - StartTime;
    Running = false;
  }
}

void SteadyTimer::Reset()
{
  Accumulated = Clock::duration::zero();
  Running = false;
}

bool SteadyTimer::IsRunning() const
{
  return Running;
}

Float32 SteadyTimer::Precision() const
{
  return DurationToSeconds(Clock::duration(1));
}

Float32 SteadyTimer::Time()
{
  if (Running)
  {
    auto now = Clock::now();
    return DurationToSeconds(Accumulated + (now - StartTime));
  }
  return DurationToSeconds(Accumulated);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
