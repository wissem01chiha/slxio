#include "Doctest.h"
#include "VersionManager.h"

namespace slxio
{

    TEST_CASE("VersionManager reports a consistent version")
    {
        VersionManager version;
        const std::string expectedVersion = std::to_string(VersionManager::GetMajorVersion()) +
                                            "." +
                                            std::to_string(VersionManager::GetMinorVersion()) +
                                            "." + std::to_string(VersionManager::GetPatchVersion());

        CHECK(VersionManager::GetVersionString() == expectedVersion);
        CHECK(version.IsMajorVersionLessThan(VersionManager::GetMajorVersion() + 1));
        CHECK_FALSE(version.IsMajorVersionLessThan(VersionManager::GetMajorVersion()));
        CHECK(version.IsMinorVersionLessThan(VersionManager::GetMinorVersion() + 1));
        CHECK_FALSE(version.IsMinorVersionLessThan(VersionManager::GetMinorVersion()));
    }

}  // namespace slxio