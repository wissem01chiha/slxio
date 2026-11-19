#include "doctest.h"
#include "MDLFile.h"
#include "SimulinkFileInfo.h"

namespace slxio
{
    TEST_CASE("MDL file basic test")
    {
        MDLFile file;
        SimulinkFileInfo info;
        SetInfo(file, info);
        SimulinkFileInfo retrievedInfo = GetInfo(file);
        //CHECK(retrievedInfo == info);
    }
} // namespace slxio