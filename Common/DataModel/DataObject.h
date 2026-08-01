// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SLXDATAOBJECT_H
#define SLXDATAOBJECT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <string>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;

class SLXIO_APIEXPORT DataObject
{
public:
  /** Create a new instance of the data object */
  virtual DataObject* New() = 0;

  /** Reset the data object to its initial state */
  virtual void Initialize();

  /** Get the last update time (in milliseconds since epoch) */
  virtual UInt32 GetUpdateTime() const;

  /** Return the memory size used by this object */
  virtual UInt32 GetMemorySize() const;

  /** Access the underlying implementation object */
  virtual void* GetImplDataObject() const = 0;

  /** Return the type identifier of the data */
  virtual std::string ToString() const = 0;

  /** Return true if the data object underlaying container is empty */
  virtual bool Empty() = 0;

  /** Compare equality with another DataObject */
  virtual bool operator==(const DataObject&) = 0;

  /** Return the Data Object Logger instance */
  Logger& GetLogger();

  DataObject();
  virtual ~DataObject() = default;

protected:
  Logger& logger;

private:
  // Disable copy and assignment
  DataObject(const DataObject&) = delete;
  void operator=(const DataObject&) = delete;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // DATAOBJECT_H
