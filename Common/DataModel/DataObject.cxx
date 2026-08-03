#include "DataObject.h"
#include "Logger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DataObject::DataObject() {}

void DataObject::Initialize() {}

UInt32 DataObject::GetUpdateTime() const
{
  return UInt32();
}

UInt32 DataObject::GetMemorySize() const
{
  return UInt32();
}

SLXIO_ABI_NAMESPACE_END
};
