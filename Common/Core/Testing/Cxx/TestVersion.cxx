#include "Doctest.h"
#include "Version.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Version major/minor/patch getters")
{
  CHECK(Version::GetMajorVersion() == SLXIO_VERSION_MAJOR);
  CHECK(Version::GetMinorVersion() == SLXIO_VERSION_MINOR);
  CHECK(Version::GetPatchVersion() == SLXIO_VERSION_PATCH);
}

TEST_CASE("Version comparison methods")
{
  Version v;

  CHECK(v.IsMajorVersionLessThan(Version::GetMajorVersion() + 1));
  CHECK(v.IsMinorVersionLessThan(Version::GetMinorVersion() + 1));

  CHECK_FALSE(v.IsMajorVersionLessThan(Version::GetMajorVersion()));
  CHECK_FALSE(v.IsMinorVersionLessThan(Version::GetMinorVersion()));
}

TEST_CASE("Version string format")
{
  std::string expected = std::to_string(Version::GetMajorVersion()) + "." +
    std::to_string(Version::GetMinorVersion()) + "." + std::to_string(Version::GetPatchVersion());

  CHECK(Version::GetVersionString() == expected);
}

SLXIO_ABI_NAMESPACE_END
};
