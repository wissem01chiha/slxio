#include "Doctest.h"
#include "HErrorHelper.h"
#include "Timer.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Timer starts and reports running state")
{
    Timer t;
    CHECK_FALSE(t.IsRunning());
    t.Start();
    CHECK(t.IsRunning());
}

TEST_CASE("Timer measures elapsed time")
{
    Timer t;
    t.Start();
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
    t.Stop();
    CHECK(t.Time() >= 0.05f);
}

TEST_CASE("Timer reset clears state")
{
    Timer t;
    t.Start();
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
    t.Stop();
    CHECK(t.Time() > 0.0f);
    t.Reset();
    CHECK(t.Time() == doctest::Approx(0.0f));
    CHECK_FALSE(t.IsRunning());
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
