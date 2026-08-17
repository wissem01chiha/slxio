#include "TimeStamp.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TimeStamp::TimeStamp() : m_time(std::chrono::steady_clock::now()) {}

TimeStamp::TimeStamp(std::chrono::steady_clock::time_point tp) : m_time(tp) {}

TimeStamp TimeStamp::Now() { return TimeStamp(); }

Float64 TimeStamp::Elapsed(const TimeStamp& other) const
{
    return std::chrono::duration<Float64>(m_time - other.m_time).count();
}

std::string TimeStamp::ToString() const
{
    auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(
                  m_time.time_since_epoch())
                  .count();
    return std::to_string(ns) + "ns";
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
