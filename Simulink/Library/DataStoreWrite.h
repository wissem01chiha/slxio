// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATASTOREWRITE_H
#define DATASTOREWRITE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataStoreWrite final
{
public:
  /** Default Constructor */
  DataStoreWrite();

  /** Get the data store object name */
  std::string GetName() const;

  /** Set the data store object name */
  void SetName(std::string& name);

  /** Default Destructor */
  ~DataStoreWrite();

private:
  std::string DataStoreWriteName;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DATASTOREWRITE_H
