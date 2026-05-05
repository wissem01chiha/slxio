// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKWRITER_H
#define SIMULINKWRITER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "DataObject.h"
#include "PlatformTypes.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkWriter
 * @brief Abstract class to write simulink data to files
 */
class SLXIO_APIEXPORT SimulinkWriter
{
public:
  /**
   * 
   */
  virtual SimulinkWriter* New() = 0;

  /**
   * 
   */
  virtual ~SimulinkWriter() = default;

  /**
   * 
   */
  virtual slxReturnType Write() = 0;

  /**
   * Set input data for writing
   */
  virtual slxReturnType SetInputData(const DataObject data) = 0;

  /**
   * Set ouput data for writing
   */
  virtual slxReturnType SetInputData(slxIdType idx, const DataObject& data) = 0;

  /**
   * 
   */
  DataObject* GetInputData() const;

  /**
   * 
   */
  DataObject* GetInputData(slxIdType idx) const;

  /**
   * 
   */
  Logger& GetLogger();

protected:
  Logger& logger;
};

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKWRITER_H