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

    TEST_CASE("Simulink signal init value test")
    {
        SimulinkSignal signal;
        SUBCASE("Get default init value test")
        {
            CHECK(signal.GetInitialValue() == "");
        }
        SUBCASE("Set and get a new init value test")
        {
            signal.SetInitialValue("0.25");
            CHECK(signal.GetInitialValue() == "0.25");
        }
    }
}; // namespace slxio
