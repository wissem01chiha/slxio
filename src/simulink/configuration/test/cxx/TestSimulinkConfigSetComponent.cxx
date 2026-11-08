#include "doctest.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{

    TEST_CASE("ConfigSetComponent store parameters test")
    {
        SimulinkConfigSetComponent solver("Simulink.SolverCC");
        solver.SetParam("Solver", "ode45");

        CHECK(solver.GetComponentClassName() == "Simulink.SolverCC");
        REQUIRE(solver.FindParam("Solver") != nullptr);
        CHECK(*solver.FindParam("Solver") == "ode45");
        CHECK(solver.RemoveParam("Solver"));
        CHECK_FALSE(solver.RemoveParam("Solver"));
    }

    TEST_CASE("ConfigSetComponent remove parameter test")
    {
        SimulinkConfigSetComponent solver("Simulink.SolverCC");
        solver.SetParam("Solver", "ode45");
        CHECK(solver.RemoveParam("Solver"));
        CHECK_FALSE(solver.RemoveParam("Solver"));
        CHECK(solver.FindParam("Solver") == nullptr);
    }
}; // namespace slxio