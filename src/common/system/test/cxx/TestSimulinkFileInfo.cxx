#include "doctest.h"
#include "SimulinkFileInfo.h"

namespace slxio
{
    TEST_CASE("Simulink file info to string test")
    {
        SimulinkFileInfo info;
        GraphicalInterfaceInfo graphicalInfo;
        std::string str = ToString(info);
        CHECK(!str.empty());
        std::string graphicalStr = ToString(graphicalInfo);
        CHECK(!graphicalStr.empty());
    }

    TEST_CASE("Get simulink release from simulink info test")
    {
        SimulinkFileInfo info;
        info.m_matlabRelease = std::string("R2024b");
        CHECK(GetSimulinkRelease(info) == SimulinkRelease::R2024b);
    }
} // namespace slxio