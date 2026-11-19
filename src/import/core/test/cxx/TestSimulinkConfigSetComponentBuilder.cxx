#include "doctest.h"
#include "SimulinkConfigSetComponentBuilder.h"
#include "SLXSection.h"

namespace slxio
{
    TEST_CASE("Config-set component builder class name and parameters test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<Object ObjectID=\"6\" ClassName=\"Simulink.HardwareCC\">"
                                     "<P Name=\"DisabledProps\">[]</P>"
                                     "<P Name=\"Description\"/>"
                                     "<P Name=\"ProdBitPerChar\">8</P>"
                                     "</Object>"));

        SimulinkConfigSetComponentBuilder builder;
        SLXSection input(document.child("Object"));
        BuildResult result = builder.Build(input);

        REQUIRE(result.m_error == ErrorCode::Ok);
        const auto* output =
            dynamic_cast<const SimulinkConfigSetComponentObject*>(result.m_output.get());
        REQUIRE(output != nullptr);

        const SimulinkConfigSetComponent component = output->GetValue();
        CHECK(component.GetComponentClassName() == "Simulink.HardwareCC");
        CHECK(component.GetParams().size() == 3);
        REQUIRE(component.FindParam("DisabledProps") != nullptr);
        CHECK(*component.FindParam("DisabledProps") == "[]");
        REQUIRE(component.FindParam("Description") != nullptr);
        CHECK(component.FindParam("Description")->empty());
        REQUIRE(component.FindParam("ProdBitPerChar") != nullptr);
        CHECK(*component.FindParam("ProdBitPerChar") == "8");
    }

    TEST_CASE("Config set component builder non-object input test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<Array/>"));

        SimulinkConfigSetComponentBuilder builder;
        SLXSection input(document.child("Array"));
        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }
} // namespace slxio
