#include "doctest.h"
#include "SimulinkSignal.h"

namespace slxio
{

    TEST_CASE("Set signal data type test")
    {
        SimulinkSignal signal;
        signal.SetDataType(SimulinkDataType::Int32);
        CHECK(signal.GetDataType() == SimulinkDataType::Int32);
    }

    TEST_CASE("Set signal complexity type test")
    {
        SimulinkSignal signal;
        CHECK_THROWS(signal.SetComplexityType("invalid"));
        signal.SetComplexityType("auto");
        CHECK(signal.GetComplexity() == "auto");
    }
}; // namespace slxio
