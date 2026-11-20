#include "doctest.h"
#include "SimulinkArrayBuilder.h"
#include "SimulinkObject.h"
#include "SLXSection.h"
#include "SimulinkParameter.h"
#include "SimulinkDataType.h"

namespace slxio
{
    namespace
    {
        class OtherDataObject final : public IDataObject
        {
        };
    } // namespace

    TEST_CASE("Array builder parses metadata and nested elements")
    {
        pugi::xml_document document;
        REQUIRE(
            document.load_string("<Array PropName=\"items\" Type=\"Cell\" Dimension=\"1*1\">"
                                 "<Object ObjectID=\"6\" PropName=\"item\" ClassName=\"Example\">"
                                 "<P Name=\"Visible\" Class=\"logical\">0</P>"
                                 "<Array PropName=\"children\" Type=\"Cell\" Dimension=\"1*1\">"
                                 "<Object ObjectID=\"7\"/>"
                                 "</Array>"
                                 "</Object>"
                                 "</Array>"));

        SimulinkArrayBuilder builder;
        SLXSection input(document.child("Array"));
        BuildResult result = builder.Build(input);

        REQUIRE(result.m_error == ErrorCode::Ok);
        const auto* output = dynamic_cast<const SimulinkArrayObject*>(result.m_output.get());
        REQUIRE(output != nullptr);
        REQUIRE(output->GetValue() != nullptr);
        CHECK(output->GetValue()->GetName() == "items");
        CHECK(output->GetValue()->GetDimension() == "1*1");
        REQUIRE(output->GetValue()->GetChildren().size() == 1);

        const auto object =
            std::dynamic_pointer_cast<SimulinkObject>(output->GetValue()->GetChildren().front());
        REQUIRE(object != nullptr);
        CHECK(object->GetIndex() == "6");
        CHECK(object->GetName() == "item");
        CHECK(object->ToString().find("Class: Example") != std::string::npos);

        const auto visible = object->GetParameter("Visible");
        REQUIRE(visible != nullptr);
        CHECK(visible->GetValue() == "0");
        CHECK(visible->GetSimulinkDataType() == SimulinkDataType::Boolean);

        REQUIRE(object->GetChildren().size() == 1);
        const auto nestedArray =
            std::dynamic_pointer_cast<SimulinkArray>(object->GetChildren().front());
        REQUIRE(nestedArray != nullptr);
        REQUIRE(nestedArray->GetChildren().size() == 1);
        const auto nestedObject =
            std::dynamic_pointer_cast<SimulinkObject>(nestedArray->GetChildren().front());
        REQUIRE(nestedObject != nullptr);
        CHECK(nestedObject->GetIndex() == "7");
    }

    TEST_CASE("Array builder parses arrays without nested elements")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string(
            "<Array PropName=\"text\" Type=\"Cell\" Dimension=\"1*1\"><Cell>[]</Cell></Array>"));

        SimulinkArrayBuilder builder;
        SLXSection input(document.child("Array"));
        BuildResult result = builder.Build(input);

        REQUIRE(result.m_error == ErrorCode::Ok);
        const auto* output = dynamic_cast<const SimulinkArrayObject*>(result.m_output.get());
        REQUIRE(output != nullptr);
        REQUIRE(output->GetValue() != nullptr);
        CHECK(output->GetValue()->GetChildren().empty());
    }

    TEST_CASE("Array builder rejects non-section input")
    {
        SimulinkArrayBuilder builder;
        OtherDataObject input;

        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }

    TEST_CASE("Array builder rejects a non-array node")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<Object/>"));

        SimulinkArrayBuilder builder;
        SLXSection input(document.child("Object"));
        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }

    TEST_CASE("Array builder rejects malformed nested object identifiers")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<Array><Object ObjectID=\"not-a-number\"/></Array>"));

        SimulinkArrayBuilder builder;
        SLXSection input(document.child("Array"));
        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }
} // namespace slxio
