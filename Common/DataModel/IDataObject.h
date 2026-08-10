// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataModelPCH.h"
#include "DataType.h"
#include "ILogger.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IDataObject
 */
class SLXIO_APIEXPORT IDataObject
{
public:
  /** Create a new instance of the data object */
  virtual IDataObject* New() = 0;

  /** Reset the data object to its initial state */
  virtual void Initialize(void* implDataObject) = 0;

  /** Get the last update time (in milliseconds since epoch) */
  virtual UInt32 GetUpdateTime() const;

  /** Return the memory size used by this object */
  virtual UInt32 GetMemorySize() const;

  /** Access the underlying implementation object */
  virtual void* GetImplDataObject() const = 0;

  /** Return the type identifier of the data */
  virtual std::string ToString() const = 0;

  /** Return true if the data object underlaying container is empty */
  virtual bool Empty() const = 0;

  /** Compare equality with another DataObject */
  virtual bool operator==(const IDataObject&) = 0;

  /* Return the underlaying data type of the object */
  virtual DataType GetDataType() = 0;

  /** Set a logger object for this data object */
  HError SetLogger(const ILogger* logger);

  /** Get the logger sink */
  const ILogger* GetLogger();

  /* Default Constructor */
  IDataObject();

  virtual ~IDataObject() = default;

protected:
  const ILogger* m_logger = nullptr;

private:
  // Disable copy and assignment
  IDataObject(const IDataObject&) = delete;
  void operator=(const IDataObject&) = delete;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DATAOBJECT_H
