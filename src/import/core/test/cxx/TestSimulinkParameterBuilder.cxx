#include "doctest.h"
#include "SimulinkParameterBuilder.h"
#include "SLXSection.h"

namespace slxio
{
    namespace
    {
        class OtherDataObject final : public IDataObject
        {
        };
    } // namespace

    TEST_CASE("Parameter builder parsing test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<P Name=\"SavedCharacterEncoding\" Class=\"double\">"
                                     "windows-1252</P>"));

        SimulinkParameterBuilder builder;
        SLXSection input(document.child("P"));
        BuildResult result = builder.Build(input);

        REQUIRE(result.m_error == ErrorCode::Ok);
        const auto* output = dynamic_cast<const SimulinkParameterObject*>(result.m_output.get());
        REQUIRE(output != nullptr);
        CHECK(output->GetName() == "SavedCharacterEncoding");
        REQUIRE(output->GetValue() != nullptr);
        CHECK(output->GetValue()->GetValue() == "windows-1252");
        CHECK(output->GetValue()->GetSimulinkDataType() == SimulinkDataType::Double);
    }

    TEST_CASE("Parameter builder missing data type test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<P Name=\"LibraryLinkDisplay\">disabled</P>"));

        SimulinkParameterBuilder builder;
        SLXSection input(document.child("P"));
        BuildResult result = builder.Build(input);

        REQUIRE(result.m_error == ErrorCode::Ok);
        const auto* output = dynamic_cast<const SimulinkParameterObject*>(result.m_output.get());
        REQUIRE(output != nullptr);
        REQUIRE(output->GetValue() != nullptr);
        CHECK(output->GetValue()->GetSimulinkDataType() == SimulinkDataType::Auto);
    }

    TEST_CASE("Parameter builder non-section test")
    {
        SimulinkParameterBuilder builder;
        OtherDataObject input;

        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }

    TEST_CASE("Parameter builder unknown data type test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<P Name=\"Value\" Class=\"unknown\">text</P>"));

        SimulinkParameterBuilder builder;
        SLXSection input(document.child("P"));
        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidDataType);
        CHECK(result.m_output == nullptr);
    }

    TEST_CASE("Parameter builder rejects a non-parameter node")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<Object/>"));

        SimulinkParameterBuilder builder;
        SLXSection input(document.child("Object"));
        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }
} // namespace slxio
