#include "Version.h"

#include "SimulinkVersion.h"
#include "VersionMacro.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UInt32 Version::GetMajorVersion()
{
  return (UInt32)SLXIO_VERSION_MAJOR;
}

UInt32 Version::GetMinorVersion()
{
  return (UInt32)SLXIO_VERSION_MINOR;
}

UInt32 Version::GetPatchVersion()
{
  return (UInt32)SLXIO_VERSION_PATCH;
}
bool Version::IsMajorVersionLessThan(UInt32 version)
{
  return SLXIO_VERSION_MAJOR < version;
}

bool Version::IsMinorVersionLessThan(UInt32 version)
{
  return SLXIO_VERSION_MINOR < version;
}

std::string Version::GetVersionString()
{
  return std::to_string(GetMajorVersion()) + "." +
         std::to_string(GetMinorVersion()) + "." +
         std::to_string(GetPatchVersion());
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
