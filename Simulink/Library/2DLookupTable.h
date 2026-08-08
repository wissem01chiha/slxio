// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef 2DLOOKUPTABLE_H
#define 2DLOOKUPTABLE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT 2DLookupTable final
{
public:
  /** Default Constructor */
  2DLookupTable();

  /** Get the TableData */
  Float32 GetTableData() const;

  /** Set the TableData */
  void SetTableData(Float32 value);

  /** Default Destructor */
  ~2DLookupTable();

private:
  Float32 TableData;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // 2DLOOKUPTABLE_H
