#include "Doctest.h"
#include "SimulinkDataType.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkDataType numeric types")
{
    CHECK(IsNumeric(SimulinkDataType::Double));
    CHECK(IsNumeric(SimulinkDataType::Single));
    CHECK(IsNumeric(SimulinkDataType::Int8));
    CHECK(IsNumeric(SimulinkDataType::UInt64));
    CHECK(IsNumeric(SimulinkDataType::Half));
}

TEST_CASE("SimulinkDataType non numeric types")
{
    CHECK_FALSE(IsNumeric(SimulinkDataType::Boolean));
    CHECK_FALSE(IsNumeric(SimulinkDataType::String));
    CHECK_FALSE(IsNumeric(SimulinkDataType::Char));
    CHECK_FALSE(IsNumeric(SimulinkDataType::Auto));
}

SLXIO_ABI_NAMESPACE_END