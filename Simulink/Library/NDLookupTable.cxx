#include "NDLookupTable.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

NDLookupTable::NDLookupTable() {}

Float32 NDLookupTable::GetTableData() const
{
  return TableData;
}

void NDLookupTable::SetTableData(Float32 value)
{
  TableData = value;
}

NDLookupTable::~NDLookupTable() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
