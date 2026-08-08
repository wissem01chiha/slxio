#include "DataStoreRead.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataStoreRead::DataStoreRead() {}

std::string DataStoreRead::GetName() const
{
  return DataStoreReadName;
}

void DataStoreRead::SetName(std::string& name)
{
  DataStoreReadName = name;
}

DataStoreRead::~DataStoreRead() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
