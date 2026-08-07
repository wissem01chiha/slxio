// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <string>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataStoreMemory final {
public:
  /** Default Constructor */
  DataStoreMemory();

  /** Get the Data store object name */
  std::string GetName() const;

  /** Set the data store obejct name */
  void SetName(std::string &name);

  /** Default Destructor */
  ~DataStoreMemory();

private:
  std::string DataStoreMemoryName;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
