// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATASTOREWRITE_H
#define DATASTOREWRITE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include <string>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataStoreWrite final {
public:
  /** Default Constructor */
  DataStoreWrite();

  /** Get the data store object name */
  std::string GetName() const;

  /** Set the data store object name */
  void SetName(std::string &name);

  /** Default Destructor */
  ~DataStoreWrite();

private:
  std::string DataStoreWriteName;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DATASTOREWRITE_H
