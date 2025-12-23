#include "CoderInfo.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

CoderInfo::CoderInfo() {}

const char *CoderInfo::getStorageClass() const { return StorageClass; }

bool CoderInfo::isTunable() { return false; }

const char *CoderInfo::getIdentifier() { return Identifier; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
