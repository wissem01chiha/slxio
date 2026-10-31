#include "Doctest.h"
#include "SimulinkConfigSetCollection.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("ConfigSetPreservesComponentAndParameterValues")
{
    SimulinkConfigSet configSet("Simulation");
    configSet.GetOrCreateComponent("Solver", "Simulink.SolverCC").SetParam("Solver", "ode45");
    configSet.GetOrCreateComponent("Solver").SetParam("StartTime", "0");
    configSet.GetOrCreateComponent("ModelReference", "Simulink.ModelReferenceCC")
        .SetParam("EnableParallelModelReferenceBuilds", "on");
    configSet.GetOrCreateComponent("FutureComponent", "Simulink.FutureCC").SetParam("FutureOption", "expression");

    const auto* solver = configSet.FindComponent("Solver");
    REQUIRE(solver != nullptr);
    REQUIRE(solver->FindParam("Solver") != nullptr);
    CHECK(*solver->FindParam("Solver") == "ode45");
    CHECK(configSet.GetComponents().size() == 3);
    CHECK(configSet.GetName() == "Simulation");

    SimulinkConfigSet copied = configSet;
    CHECK(*copied.FindComponent("FutureComponent")->FindParam("FutureOption") == "expression");
}

TEST_CASE("ConfigSetCollectionOwnsSetsAndTracksOneActiveSet")
{
    SimulinkConfigSetCollection collection;
    CHECK(collection.Empty());
    CHECK(collection.GetActive() == nullptr);
    CHECK(collection.SetActive("missing") == ConfigSetCollectionResult::NotFound);
    CHECK(collection.Add(SimulinkConfigSet("")) == ConfigSetCollectionResult::InvalidName);

    SimulinkConfigSet first("Simulation");
    first.GetOrCreateComponent("Solver", "Simulink.SolverCC").SetParam("Solver", "ode45");
    CHECK(collection.Add(first) == ConfigSetCollectionResult::Success);
    CHECK(collection.Add(first) == ConfigSetCollectionResult::AlreadyExists);

    CHECK(collection.Add(SimulinkConfigSet("CodeGeneration")) == ConfigSetCollectionResult::Success);
    CHECK(collection.Size() == 2);
    CHECK(collection.SetActive("Simulation") == ConfigSetCollectionResult::Success);
    REQUIRE(collection.GetActive() != nullptr);
    CHECK(collection.GetActive()->GetName() == "Simulation");

    CHECK(collection.Rename("Simulation", "Baseline") == ConfigSetCollectionResult::Success);
    CHECK(collection.Find("Baseline") != nullptr);
    CHECK(collection.GetActiveName() == "Baseline");
    CHECK(collection.Rename("Baseline", "CodeGeneration") == ConfigSetCollectionResult::AlreadyExists);
    CHECK(collection.SetActive("CodeGeneration") == ConfigSetCollectionResult::Success);
    CHECK(collection.GetActiveName() == "CodeGeneration");
    CHECK(collection.Remove("CodeGeneration") == ConfigSetCollectionResult::Success);
    CHECK(collection.GetActive() == nullptr);
    CHECK(collection.GetActiveName().empty());
    CHECK(collection.Remove("missing") == ConfigSetCollectionResult::NotFound);
}

TEST_CASE("ConfigSetComponentsCanRemoveParameters")
{
    SimulinkConfigSetComponent solver("Simulink.SolverCC");
    solver.SetParam("Solver", "ode45");
    CHECK(solver.RemoveParam("Solver"));
    CHECK_FALSE(solver.RemoveParam("Solver"));
    CHECK(solver.FindParam("Solver") == nullptr);
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
