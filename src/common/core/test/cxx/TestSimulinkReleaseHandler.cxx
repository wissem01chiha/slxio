#include "Doctest.h"
#include "SimulinkReleaseHandler.h"

namespace slxio
{

    TEST_CASE("Simulink release handler parses and formats releases")
    {
        const auto release = SimulinkReleaseHandler::Parse("R2024a");
        REQUIRE(release.has_value());
        CHECK(release->Year() == 2024);
        CHECK(release->Letter() == 'a');
        CHECK(release->ToString() == "R2024a");

        const auto nextRelease = SimulinkReleaseHandler::Parse("R2024b");
        REQUIRE(nextRelease.has_value());
        CHECK(!(release.value() == nextRelease.value()));

        CHECK_FALSE(SimulinkReleaseHandler::Parse("2024a").has_value());
        CHECK_FALSE(SimulinkReleaseHandler::Parse("R20x4a").has_value());
        CHECK_FALSE(SimulinkReleaseHandler::Parse("R2024c").has_value());
        CHECK_FALSE(SimulinkReleaseHandler::Parse("R2024aa").has_value());
    }

}  // namespace slxio