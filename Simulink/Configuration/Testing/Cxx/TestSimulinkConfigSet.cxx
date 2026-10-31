#include "Doctest.h"
#include "SimulinkConfigSet.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkConfigSetStoresNamedComponentsAndParameters")
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

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
