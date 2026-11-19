#include "doctest.h"
#include "SimulinkFileInfo.h"

namespace slxio
{
    TEST_CASE("Simulink file info to string test")
    {
        SimulinkFileInfo info;
        std::string str = ToString(info);
        CHECK(!str.empty());
    }
} // namespace slxio