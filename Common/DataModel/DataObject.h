// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "ILogger.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataObject {
public:
  /** Create a new instance of the data object */
  virtual DataObject *New() = 0;

  /** Reset the data object to its initial state */
  virtual void Initialize();

  /** Get the last update time (in milliseconds since epoch) */
  virtual UInt32 GetUpdateTime() const;

  /** Return the memory size used by this object */
  virtual UInt32 GetMemorySize() const;

  /** Access the underlying implementation object */
  virtual void *GetImplDataObject() const = 0;

  /** Return the type identifier of the data */
  virtual std::string ToString() const = 0;

  /** Return true if the data object underlaying container is empty */
  virtual bool Empty() = 0;

  /** Compare equality with another DataObject */
  virtual bool operator==(const DataObject &) = 0;

  /** Set a logger object for this data object */
  HError SetLogger(const ILogger *logger);

  /** Get the logger sink */
  const ILogger *GetLogger();

  /* Default Constructor */
  DataObject();

  virtual ~DataObject() = default;

private:
  // Disable copy and assignment
  DataObject(const DataObject &) = delete;
  void operator=(const DataObject &) = delete;

  const ILogger *m_logger = nullptr;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DATAOBJECT_H
