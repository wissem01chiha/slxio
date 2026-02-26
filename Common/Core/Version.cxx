#include "Version.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

uint32 Version::getMajorVersion()
{
  return (uint32)SLXIO_VERSION_MAJOR;
}

uint32 Version::getMinorVersion()
{
  return (uint32)SLXIO_VERSION_MINOR;
}

uint32 Version::getPatchVersion()
{
  return (uint32)SLXIO_VERSION_PATCH;
}
bool Version::isMajorVersionLessThan(uint32 version)
{
  return SLXIO_VERSION_MAJOR < version;
}

bool Version::isMinorVersionLessThan(uint32 version)
{
  return SLXIO_VERSION_MINOR < version;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
