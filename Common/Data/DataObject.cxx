#include "DataObject.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DataObject::DataObject()
  : logger(Logger::GetInstance())
{
}

void DataObject::Initialize() {}

UInt32 DataObject::GetUpdateTime() const
{
  return UInt32();
}

UInt32 DataObject::GetMemorySize() const
{
  return UInt32();
}

Logger& DataObject::GetLogger()
{
  return logger;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
