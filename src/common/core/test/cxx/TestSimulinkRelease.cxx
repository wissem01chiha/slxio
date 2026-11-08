#include "doctest.h"
#include "SimulinkRelease.h"

namespace slxio
{

TEST_CASE("Convert simulink release test"){

    SimulinkReleaseHelper release = SimulinkReleaseHelper((uint16_t)2018,'b');
    CHECK(release.ToRelease() == SimulinkRelease::R2018b);
    CHECK(release.ToString() == "R2018b");
}

TEST_CASE("Parse simulink release test")
{
    const auto release = SimulinkReleaseHelper::Parse("R2024a");
    REQUIRE(release.has_value());
    CHECK(release->Year() == 2024);
    CHECK(release->Letter() == 'a');
    CHECK(release->ToRelease() == SimulinkRelease::R2024a);
}


}; // namespace slxio