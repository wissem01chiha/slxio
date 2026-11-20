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
} // namespace slxio