#include "Tempdir.h"
#include "doctest.h"

namespace slxio
{
    TEST_CASE("Tempdir generates unique directory names")
    {
        ConfigOption config;
        config.m_prefix = "test_dir";
        Tempdir tempdir(config);
        std::string dir_name1 = tempdir.GenerateDirName();
        std::string dir_name2 = tempdir.GenerateDirName();
        CHECK(dir_name1 != dir_name2);
    }
    TEST_CASE("Tempdir can be moved but not copied")
    {
        Tempdir temp_dir_1;
        REQUIRE(fs::exists(temp_dir_1.GetDirPath()));

        Tempdir temp_dir_2 = std::move(temp_dir_1);
        REQUIRE(fs::exists(temp_dir_2.GetDirPath()));
    }

    TEST_CASE("Tempdir by default creates directory in os temp directory")
    {
        Tempdir temp_dir;
        REQUIRE(fs::exists(temp_dir.GetDirPath()));
        REQUIRE(fs::canonical(temp_dir.GetDirPath().parent_path()) ==
                fs::canonical(fs::temp_directory_path()));
    }

    TEST_CASE("Tempdirs directory name prefix is configurable")
    {
        Tempdir temp_dir(ConfigOption().m_prefix = "my-project");
        REQUIRE(fs::exists(temp_dir.GetDirPath()));
        std::string fn = temp_dir.GetDirPath().filename().string();
        REQUIRE(fn.find("my-project") == 0);
    }
} // namespace slxio