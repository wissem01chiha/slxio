// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATASTOREREAD_H
#define DATASTOREREAD_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <string>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataStoreRead final {
public:
  /** Default Constructor */
  DataStoreRead();

  /** Get the data store object name */
  std::string GetName() const;

  /** Set the data store object name */
  void SetName(std::string &name);

  /** Default Destructor */
  ~DataStoreRead();

private:
  std::string DataStoreReadName;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DATASTOREREAD_H
