#include "doctest.h"
#include "SimulinkArray.h"
#include "SimulinkObjectBuilder.h"
#include "SLXSection.h"
#include "SimulinkParameter.h"

namespace slxio
{
    namespace
    {
        class OtherDataObject final : public IDataObject
        {
        };
    } // namespace

    TEST_CASE("Object builder parsing test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string(
            "<Object ObjectID=\"2\" PropName=\"container\" ClassName=\"Example\" Version=\"1\">"
            "<P Name=\"Count\" Class=\"uint32\">4</P>"
            "<Object ObjectID=\"3\" PropName=\"nested\">"
            "<P Name=\"Name\" Class=\"char\">child</P>"
            "</Object>"
            "<Array PropName=\"items\" Type=\"Cell\" Dimension=\"1*1\">"
            "<Object ObjectID=\"4\"/>"
            "</Array>"
            "</Object>"));

        SimulinkObjectBuilder builder;
        SLXSection input(document.child("Object"));
        BuildResult result = builder.Build(input);

        REQUIRE(result.m_error == ErrorCode::Ok);
        const auto* output = dynamic_cast<const SimulinkObjectObject*>(result.m_output.get());
        REQUIRE(output != nullptr);
        REQUIRE(output->GetValue() != nullptr);
        CHECK(output->GetValue()->GetIndex() == "2");
        CHECK(output->GetValue()->GetName() == "container");
        CHECK(output->GetValue()->ToString().find("Class: Example") != std::string::npos);
        CHECK(output->GetValue()->GetVersion() == "1");

        const auto count = output->GetValue()->GetParameter("Count");
        REQUIRE(count != nullptr);
        CHECK(count->GetValue() == "4");
        CHECK(count->GetSimulinkDataType() == SimulinkDataType::UInt32);

        REQUIRE(output->GetValue()->GetChildren().size() == 2);
        const auto nestedObject =
            std::dynamic_pointer_cast<SimulinkObject>(output->GetValue()->GetChildren()[0]);
        REQUIRE(nestedObject != nullptr);
        CHECK(nestedObject->GetIndex() == "3");
        const auto nestedParameter = nestedObject->GetParameter("Name");
        REQUIRE(nestedParameter != nullptr);
        CHECK(nestedParameter->GetValue() == "child");

        const auto array =
            std::dynamic_pointer_cast<SimulinkArray>(output->GetValue()->GetChildren()[1]);
        REQUIRE(array != nullptr);
        REQUIRE(array->GetChildren().size() == 1);
        const auto arrayObject = std::dynamic_pointer_cast<SimulinkObject>(array->GetChildren()[0]);
        REQUIRE(arrayObject != nullptr);
        CHECK(arrayObject->GetIndex() == "4");
    }

    TEST_CASE("Object builder non section input test")
    {
        SimulinkObjectBuilder builder;
        OtherDataObject input;

        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }

    TEST_CASE("Object builder a non object node test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<Array/>"));

        SimulinkObjectBuilder builder;
        SLXSection input(document.child("Array"));
        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }

    TEST_CASE("Object builder malformed object id test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<Object ObjectID=\"not-a-number\"/>"));

        SimulinkObjectBuilder builder;
        SLXSection input(document.child("Object"));
        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }

    TEST_CASE("Object builder invalid parameter data type test")
    {
        pugi::xml_document document;
        REQUIRE(document.load_string("<Object><P Name=\"Value\" Class=\"invalid\">1</P></Object>"));

        SimulinkObjectBuilder builder;
        SLXSection input(document.child("Object"));
        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidDataType);
        CHECK(result.m_output == nullptr);
    }
} // namespace slxio
