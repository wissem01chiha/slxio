#include "doctest.h"
#include "SimulinkFile.h"
#include "SimulinkFileInfo.h"

namespace slxio
{
    TEST_CASE("Get simulink file info basic test")
    {
        SimulinkFile file;

        const pugi::xml_parse_result result =
            file.m_coreProperties.load_file("data/coreProperties.xml");

        REQUIRE(result);
        auto root = file.m_coreProperties.child("cp:coreProperties");
        REQUIRE(root);
        REQUIRE(root.child("dc:creator"));
        const std::string creator = root.child("dc:creator").text().as_string();
        const std::string version = root.child("cp:version").text().as_string();

        CHECK_EQ(creator, "chiha");
        CHECK_EQ(version, "R2019a");

        const SimulinkFileInfo info = GetInfo(file);
        CHECK_EQ(info.m_creator, "chiha");
        CHECK_EQ(info.m_category, "model");
        CHECK_EQ(info.m_version, "R2019a");
        CHECK_EQ(info.m_revision, "1.1");
        CHECK_EQ(info.m_modified, "2025-08-19T23:55:32Z");
    }
} // namespace slxio