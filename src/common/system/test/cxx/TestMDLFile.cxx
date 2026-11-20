#include "doctest.h"
#include "MDLFile.h"
#include "SimulinkFileInfo.h"
#include "Filesystem.h"

namespace slxio
{
    TEST_CASE("MDL get simulink  file info basic test")
    {
        MDLFile file;
        SimulinkFileInfo info = GetInfo(file);
        CHECK(info.m_extension == "mdl");
        CHECK(info.m_version.empty());

        MDLFile file_;
        file_.m_content = ReadFile("data/2019b/CAP.mdl");
        REQUIRE(!file_.m_content.empty());

        SimulinkFileInfo info_ = GetInfo(file_);
        CHECK(info_.m_revision == "1.72");
        CHECK(info_.m_name == "CAP");
        CHECK(info_.m_creator == "chiha");
    }
} // namespace slxio