#include "Doctest.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{

TEST_CASE("SimulinkConfigSetComponentStoresClassNameAndParameters")
{
    SimulinkConfigSetComponent solver("Simulink.SolverCC");
    solver.SetParam("Solver", "ode45");

    CHECK(solver.GetComponentClassName() == "Simulink.SolverCC");
    REQUIRE(solver.FindParam("Solver") != nullptr);
    CHECK(*solver.FindParam("Solver") == "ode45");
    CHECK(solver.RemoveParam("Solver"));
    CHECK_FALSE(solver.RemoveParam("Solver"));
}

} // namespace slxio