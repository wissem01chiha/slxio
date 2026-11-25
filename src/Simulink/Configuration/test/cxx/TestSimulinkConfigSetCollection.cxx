#include "doctest.h"
#include "SimulinkConfigSetCollection.h"

namespace slxio
{

    TEST_CASE("Collection add sets test")
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

        CHECK(collection.Add(SimulinkConfigSet("CodeGeneration")) ==
              ConfigSetCollectionResult::Success);
        CHECK(collection.Size() == 2);
    }

    TEST_CASE("Collection track active set test")
    {
        SimulinkConfigSetCollection collection;
        CHECK(collection.Add(SimulinkConfigSet("Simulation")) ==
              ConfigSetCollectionResult::Success);
        CHECK(collection.Add(SimulinkConfigSet("CodeGeneration")) ==
              ConfigSetCollectionResult::Success);

        CHECK(collection.SetActive("Simulation") == ConfigSetCollectionResult::Success);
        REQUIRE(collection.GetActive() != nullptr);
        CHECK(collection.GetActive()->GetName() == "Simulation");

        CHECK(collection.Rename("Simulation", "Baseline") == ConfigSetCollectionResult::Success);
        CHECK(collection.Find("Baseline") != nullptr);
        CHECK(collection.GetActiveName() == "Baseline");
        CHECK(collection.Rename("Baseline", "CodeGeneration") ==
              ConfigSetCollectionResult::AlreadyExists);
        CHECK(collection.SetActive("CodeGeneration") == ConfigSetCollectionResult::Success);
        CHECK(collection.GetActiveName() == "CodeGeneration");
        CHECK(collection.Remove("CodeGeneration") == ConfigSetCollectionResult::Success);
        CHECK(collection.GetActive() == nullptr);
        CHECK(collection.GetActiveName().empty());
        CHECK(collection.Remove("missing") == ConfigSetCollectionResult::NotFound);
    }

}; // namespace slxio
