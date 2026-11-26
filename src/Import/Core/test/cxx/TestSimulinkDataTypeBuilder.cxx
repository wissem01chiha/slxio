#include "doctest.h"
#include "SimulinkDataTypeBuilder.h"
#include "StringDataObject.h"

namespace slxio
{
    namespace
    {
        class OtherDataObject final : public IDataObject
        {
        };
    } // namespace

    TEST_CASE("Data type builder string input test")
    {
        SimulinkDataTypeBuilder builder;
        StringDataObject input("double");

        BuildResult result = builder.Build(input);

        REQUIRE(result.m_error == ErrorCode::Ok);
        const auto* output = dynamic_cast<const SimulinkDataTypeObject*>(result.m_output.get());
        REQUIRE(output != nullptr);
        CHECK(output->GetValue() == SimulinkDataType::Double);
    }

    TEST_CASE("Data type builder non-string input test")
    {
        SimulinkDataTypeBuilder builder;
        OtherDataObject input;

        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidArgument);
        CHECK(result.m_output == nullptr);
    }

    TEST_CASE("Data type builder unknown data type test")
    {
        SimulinkDataTypeBuilder builder;
        StringDataObject input("not-a-data-type");

        BuildResult result = builder.Build(input);

        CHECK(result.m_error == ErrorCode::InvalidDataType);
        CHECK(result.m_output == nullptr);
    }
} // namespace slxio