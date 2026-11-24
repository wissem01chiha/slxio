#include "ArchiveInfo.h"
#include "doctest.h"

namespace slxio
{
    TEST_CASE("Get archive information return valid struct test"){
        fs::path file = fs::current_path() / "data" / "Asset1.zip";
        ArchiveInfo info =  GetArchiveInfo(file);
        CHECK(!info.m_empty);
        CHECK(info.m_extension=="zip");
        CHECK(info.m_size==63574);
    }
}