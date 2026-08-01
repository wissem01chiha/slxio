// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef NDLOOKUPTABLE_H
#define NDLOOKUPTABLE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT NDLookupTable final
{
public:
  /** Default Constructor */
  NDLookupTable();

  /** Get the TableData */
  Float32 GetTableData() const;

  /** Set the TableData */
  void SetTableData(Float32 value);

  /** Default Destructor */
  ~NDLookupTable();

private:
  Float32 TableData;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // NDLOOKUPTABLE_H
