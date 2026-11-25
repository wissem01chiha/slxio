#include "doctest.h"
#include "SimulinkBlockType.h"

namespace slxio
{
    TEST_CASE("Simulink block type to string test")
    {
        CHECK(ToString(SimulinkBlockType::Abs) == "Abs");
        CHECK(ToString(SimulinkBlockType::Accumulator) == "Accumulator");
        CHECK(ToString(SimulinkBlockType::Model) == "Model");
    }
} // namespace slxio