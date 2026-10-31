#include "Doctest.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

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

SLXIO_ABI_NAMESPACE_END
} // namespace slxio