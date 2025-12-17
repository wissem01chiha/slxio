#include "slxVersion.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

uint32 slxVersion::getMajorVersion() { return (uint32)SLXIO_VERSION_MAJOR; }

uint32 slxVersion::getMinorVersion() { return (uint32)SLXIO_VERSION_MINOR; }

uint32 slxVersion::getPatchVersion() { return (uint32)SLXIO_VERSION_PATCH; }

bool slxVersion::isMajorVersionLessThan(uint32 version) {
  return SLXIO_VERSION_MAJOR < version;
}

bool slxVersion::isMinorVersionLessThan(uint32 version) {
  return SLXIO_VERSION_MINOR < version;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
