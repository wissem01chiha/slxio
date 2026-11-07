/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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