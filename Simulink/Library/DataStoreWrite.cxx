#include "DataStoreWrite.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataStoreWrite::DataStoreWrite() {}

std::string DataStoreWrite::GetName() const { return DataStoreWriteName; }

void DataStoreWrite::SetName(std::string &name) { DataStoreWriteName = name; }

DataStoreWrite::~DataStoreWrite() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
