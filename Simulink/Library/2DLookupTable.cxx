#include "2DLookupTable.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

2DLookupTable::2DLookupTable() {}

Float32 2DLookupTable::GetTableData() const
{
  return TableData;
}

void 2DLookupTable::SetTableData(Float32 value)
{
  TableData = value;
}

2DLookupTable::~2DLookupTable()
{
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
