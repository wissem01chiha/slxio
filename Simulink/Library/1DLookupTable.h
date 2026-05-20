// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef 1DLOOKUPTABLE_H
#define 1DLOOKUPTABLE_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT 1DLookupTable final
{
public:
  /** Default Constructor */
  1DLookupTable();

  /** Get the TableData */
  Float32 GetTableData() const;

  /** Set the TableData */
  void SetTableData(Float32 value);

  /** Default Destructor */
  ~1DLookupTable();

private:
  Float32 TableData;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // 1DLOOKUPTABLE_H
