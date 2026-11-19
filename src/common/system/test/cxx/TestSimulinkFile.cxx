#include "doctest.h"
#include "SimulinkFile.h"
#include "SimulinkFileInfo.h"

namespace slxio
{
    TEST_CASE("Simulink file basic test")
    {
        SimulinkFile file;
        SimulinkFileInfo info;
        SetInfo(file, info);
        SimulinkFileInfo retrievedInfo = GetInfo(file);
        // CHECK(retrievedInfo == info);
    }
} // namespace slxio