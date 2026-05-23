#include "DataStoreMemory.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DataStoreMemory::DataStoreMemory() {}

std::string DataStoreMemory::GetName() const
{
  return DataStoreMemoryName;
}

void DataStoreMemory::SetName(std::string& name)
{
  DataStoreMemoryName = name;
}

DataStoreMemory::~DataStoreMemory() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
