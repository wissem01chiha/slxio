#include "doctest.h"
#include "SimulinkBlockCategory.h"

namespace slxio
{

    TEST_CASE("Block category to string test")
    {
        CHECK(ToString(SimulinkBlockCategory::AdditionalMathDiscrete) == "AdditionalMathDiscrete");
        CHECK(ToString(SimulinkBlockCategory::Continuous) == "Continuous");
        CHECK(ToString(SimulinkBlockCategory::LogicAndBitOperations) == "LogicAndBitOperations");
        CHECK(ToString(SimulinkBlockCategory::LookupTables) == "LookupTables");
    }

}; // namespace slxio