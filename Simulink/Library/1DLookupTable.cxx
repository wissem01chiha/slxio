#include "1DLookupTable.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

1DLookupTable::1DLookupTable() {}

Float32 1DLookupTable::GetTableData() const
{
  return TableData;
}

void 1DLookupTable::SetTableData(Float32 value)
{
  TableData = value;
}

1DLookupTable::~1DLookupTable()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
