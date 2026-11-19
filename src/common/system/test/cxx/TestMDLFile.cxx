#include "doctest.h"
#include "MDLFile.h"
#include "SimulinkFileInfo.h"

namespace slxio
{
    TEST_CASE("MDL file basic test")
    {
        MDLFile file;
        SimulinkFileInfo info = GetInfo(file);
        CHECK(info.m_extension == "mdl");
    }
} // namespace slxio