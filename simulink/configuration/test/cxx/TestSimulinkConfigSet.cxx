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
#include "SimulinkConfigSet.h"

namespace slxio
{

TEST_CASE("SimulinkConfigSet store named components and parameters")
{
    SimulinkConfigSet config("Simulation");
    CHECK(config.GetName() == "Simulation");
    CHECK(config.FindParam("Description") == nullptr);

    config.SetParam("Description", "baseline configuration");
    config.GetOrCreateComponent("Solver", "Simulink.SolverCC").SetParam("Solver", "ode45");

    REQUIRE(config.FindParam("Description") != nullptr);
    CHECK(*config.FindParam("Description") == "baseline configuration");
    REQUIRE(config.FindComponent("Solver") != nullptr);
    CHECK(config.FindComponent("Solver")->GetComponentClassName() == "Simulink.SolverCC");
    CHECK(*config.FindComponent("Solver")->FindParam("Solver") == "ode45");
    CHECK(config.ToString().find("SimulinkConfigSet: Simulation") != std::string::npos);
}

} // namespace slxio
