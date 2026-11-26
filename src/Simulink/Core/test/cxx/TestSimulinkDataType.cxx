#include "doctest.h"
#include "SimulinkDataType.h"

namespace slxio
{

    TEST_CASE("Simulink data type numeric type test")
    {
        CHECK(IsNumeric(SimulinkDataType::Double));
        CHECK(IsNumeric(SimulinkDataType::Single));
        CHECK(IsNumeric(SimulinkDataType::Int8));
        CHECK(IsNumeric(SimulinkDataType::UInt64));
        CHECK(IsNumeric(SimulinkDataType::Half));
    }

    TEST_CASE("Simulink data type non numeric type test")
    {
        CHECK_FALSE(IsNumeric(SimulinkDataType::Boolean));
        CHECK_FALSE(IsNumeric(SimulinkDataType::String));
        CHECK_FALSE(IsNumeric(SimulinkDataType::Char));
        CHECK_FALSE(IsNumeric(SimulinkDataType::Auto));
    }
}; // namespace slxio