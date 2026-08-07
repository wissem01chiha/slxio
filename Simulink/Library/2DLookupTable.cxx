#include "2DLookupTable.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

2DLookupTable ::2DLookupTable() {}

Float32 2DLookupTable ::GetTableData() const { return TableData; }

void 2DLookupTable ::SetTableData(Float32 value) { TableData = value; }

2DLookupTable ::~2DLookupTable() {}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
