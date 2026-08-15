#include "Timer.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Timer::Timer() = default;
Timer::~Timer() = default;

void Timer::Start()
{
    m_startTime = Clock::now();
    m_running = true;
    NotifyState("Timer started");
}

void Timer::Stop()
{
    if (m_running)
    {
        m_accumulated += Clock::now() - m_startTime;
        m_running = false;
        NotifyState("Timer stopped");
    }
}

void Timer::Reset()
{
    m_running = false;
    m_accumulated = Clock::duration::zero();
    NotifyState("Timer reset");
}

bool Timer::IsRunning() const { return m_running; }

Float32 Timer::Precision() const
{
    return static_cast<Float32>(Clock::period::num) / Clock::period::den;
}

Float32 Timer::Time()
{
    auto elapsed = m_accumulated;
    if (m_running)
    {
        elapsed += Clock::now() - m_startTime;
    }
    return std::chrono::duration<Float32>(elapsed).count();
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
