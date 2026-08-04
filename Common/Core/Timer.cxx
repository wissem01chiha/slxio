#include "Timer.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Float32 DurationToSeconds(const Timer::Clock::duration& d)
{
  return std::chrono::duration_cast<std::chrono::duration<Float32>>(d).count();
}

void Timer::Start()
{
  if (!Running)
  {
    StartTime = Clock::now();
    Running = true;
  }
}

void Timer::Stop()
{
  if (Running)
  {
    Accumulated += Clock::now() - StartTime;
    Running = false;
  }
}

void Timer::Reset()
{
  Accumulated = Clock::duration::zero();
  Running = false;
}

bool Timer::IsRunning() const
{
  return Running;
}

Float32 Timer::Precision() const
{
  return DurationToSeconds(Clock::duration(1));
}

Float32 Timer::Time()
{
  if (Running)
  {
    auto now = Clock::now();
    return DurationToSeconds(Accumulated + (now - StartTime));
  }
  return DurationToSeconds(Accumulated);
}

SLXIO_ABI_NAMESPACE_END
};
