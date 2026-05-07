#include "DataObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DataObject* DataObject::New()
{
  return nullptr;
}

void DataObject::Initialize() {}

UInt32 DataObject::GetUpdateTime()
{
  return UInt32();
}

UInt32 DataObject::GetMemorySize()
{
  return UInt32();
}

IdType DataObject::GetDataType()
{
  return IdType();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

