#include "Doctest.h"
#include "SimulinkConfigSet.h"
#include "SimulinkConfigSetSlxReader.h"
#include "SimulinkReaderResult.h"
#include "SLXSection.h"

namespace slxio
{

    TEST_CASE("SimulinkConfigSetSlxReader parses configuration and components")
    {
        pugi::xml_document document;
        REQUIRE(document.load_file("data/configSet.xml"));

        SimulinkConfigSet configSet;
        const SimulinkConfigSetSlxReader reader;

        CHECK(reader.Read(SLXSection(document.child("ConfigSet")), configSet) ==
              SimulinkReaderResult::Success);
        CHECK(configSet.GetName() == "Configuration");
        REQUIRE(configSet.FindParam("Description") != nullptr);
        CHECK(configSet.FindParam("Description")->empty());
        CHECK(configSet.FindParam("CurrentDlgPage") != nullptr);
        CHECK(configSet.GetComponents().size() == 9);

        const SimulinkConfigSetComponent *solver = configSet.FindComponent("Simulink.SolverCC");
        REQUIRE(solver != nullptr);
        CHECK(solver->GetComponentClassName() == "Simulink.SolverCC");
        CHECK(solver->GetParams().size() == 39);
        REQUIRE(solver->FindParam("StartTime") != nullptr);
        CHECK(*solver->FindParam("StartTime") == "0.0");
    }

    TEST_CASE("SimulinkConfigSetSlxReader leaves the destination unchanged on failure")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string(
            "<ConfigSet><Object ClassName=\"Simulink.ConfigSet\">"
            "<Array PropName=\"Components\"><Object/></Array></Object></ConfigSet>"));

        SimulinkConfigSet configSet("original");
        configSet.SetParam("Preserved", "value");
        const SimulinkConfigSetSlxReader reader;

        CHECK(reader.Read(SLXSection(document.child("ConfigSet")), configSet) ==
              SimulinkReaderResult::InvalidInput);
        CHECK(configSet.GetName() == "original");
        REQUIRE(configSet.FindParam("Preserved") != nullptr);
        CHECK(*configSet.FindParam("Preserved") == "value");
    }

}  // namespace slxio
