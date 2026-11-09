#include "doctest.h"
#include "SimulinkModelType.h"

namespace slxio
{
    TEST_CASE("Simulink model type to string test")
    {
        CHECK(ToString(SimulinkModelType::Library) == "Library");
        CHECK(ToString(SimulinkModelType::Model) == "Model");
    }
} // namespace slxio