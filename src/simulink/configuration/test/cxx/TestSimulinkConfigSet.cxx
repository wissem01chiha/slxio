#include "doctest.h"
#include "SimulinkConfigSet.h"

namespace slxio
{

    TEST_CASE("Config set store component test")
    {
        SimulinkConfigSet config("Simulation");
        CHECK(config.GetName() == "Simulation");

        config.GetOrCreateComponent("Solver", "Simulink.SolverCC").SetParam("Solver", "ode45");

        REQUIRE(config.FindComponent("Solver") != nullptr);
        CHECK(config.FindComponent("Solver")->GetComponentClassName() == "Simulink.SolverCC");
        CHECK(*config.FindComponent("Solver")->FindParam("Solver") == "ode45");
        CHECK(config.ToString().find("SimulinkConfigSet: Simulation") != std::string::npos);
    }

    TEST_CASE("Config set store parameter test")
    {
        SimulinkConfigSet config("Simulation");
        CHECK(config.FindParam("Description") == nullptr);

        config.SetParam("Description", "baseline configuration");
        config.GetOrCreateComponent("Solver", "Simulink.SolverCC").SetParam("Solver", "ode45");

        REQUIRE(config.FindParam("Description") != nullptr);
        CHECK(*config.FindParam("Description") == "baseline configuration");
        CHECK(config.ToString().find("SimulinkConfigSet: Simulation") != std::string::npos);
    }

    TEST_CASE("Config set preserve values test")
    {
        SimulinkConfigSet configSet("Simulation");
        configSet.GetOrCreateComponent("Solver", "Simulink.SolverCC").SetParam("Solver", "ode45");
        configSet.GetOrCreateComponent("Solver").SetParam("StartTime", "0");
        configSet.GetOrCreateComponent("ModelReference", "Simulink.ModelReferenceCC")
            .SetParam("EnableParallelModelReferenceBuilds", "on");
        configSet.GetOrCreateComponent("FutureComponent", "Simulink.FutureCC")
            .SetParam("FutureOption", "expression");

        const auto* solver = configSet.FindComponent("Solver");
        REQUIRE(solver != nullptr);
        REQUIRE(solver->FindParam("Solver") != nullptr);
        CHECK(*solver->FindParam("Solver") == "ode45");
        CHECK(configSet.GetComponents().size() == 3);
        CHECK(configSet.GetName() == "Simulation");

        SimulinkConfigSet copied = configSet;
        CHECK(*copied.FindComponent("FutureComponent")->FindParam("FutureOption") == "expression");
    }

} // namespace slxio
