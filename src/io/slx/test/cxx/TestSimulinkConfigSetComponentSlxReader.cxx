#include "Doctest.h"
#include "SimulinkConfigSetComponentSlxReader.h"
#include "SimulinkConfigSetComponent.h"
#include "SimulinkReaderResult.h"
#include "SLXSection.h"

namespace slxio
{

    TEST_CASE("SimulinkConfigSetComponentSlxReaderSolver")
    {
        pugi::xml_document document;
        const std::string xmlFilePath ="data/configSet.xml";
        REQUIRE(document.load_file(xmlFilePath.c_str()));

        const pugi::xml_node componentNode =
            document.child("ConfigSet").child("Object").child("Array").child("Object");

        REQUIRE(componentNode);

        SimulinkConfigSetComponent component;
        const SimulinkConfigSetComponentSlxReader reader;
        
        CHECK(reader.Read(SLXSection(componentNode), component) == SimulinkReaderResult::Success);
        CHECK(component.GetComponentClassName() == "Simulink.SolverCC");
        CHECK(component.GetParams().size() == 39);
        REQUIRE(component.FindParam("StartTime") != nullptr);
        CHECK(*component.FindParam("StartTime") == "0.0");
        REQUIRE(component.FindParam("Solver") != nullptr);
        CHECK(*component.FindParam("Solver") == "VariableStepAuto");
        REQUIRE(component.FindParam("Description") != nullptr);
        CHECK(component.FindParam("Description")->empty());
    }

};  // namespace slxio
