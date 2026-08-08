#include "CoderInfo.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CoderInfo::CoderInfo()
  : Identifier("")
  , StorageClass("auto")
{
}

const char* CoderInfo::getStorageClass() const
{
  return StorageClass;
}

bool CoderInfo::isTunable()
{
  return false;
}

const char* CoderInfo::getIdentifier()
{
  return Identifier;
}

UInt32 CoderInfo::getAlignment()
{
  return Alignment;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
