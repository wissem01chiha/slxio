#include "doctest.h"
#include "Version.h"

namespace slxio
{

    TEST_CASE("Report version test")
    {
        Version version;
        const std::string expected = std::to_string(Version::GetMajorVersion()) + "." +
                                     std::to_string(Version::GetMinorVersion()) + "." +
                                     std::to_string(Version::GetPatchVersion());

        CHECK(Version::GetVersionString() == expected);
        CHECK(version.IsMajorVersionLessThan(Version::GetMajorVersion() + 1));
        CHECK_FALSE(version.IsMajorVersionLessThan(Version::GetMajorVersion()));
        CHECK(version.IsMinorVersionLessThan(Version::GetMinorVersion() + 1));
        CHECK_FALSE(version.IsMinorVersionLessThan(Version::GetMinorVersion()));
    }

}; // namespace slxio