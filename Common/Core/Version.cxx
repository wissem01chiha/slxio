#include "Version.h"

SLXIO_NAMESPACE_BEGIN
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
  return std::string();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
