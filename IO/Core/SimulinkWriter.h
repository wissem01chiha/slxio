// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKWRITER_H
#define SIMULINKWRITER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

class DataObject;
class Logger;

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkWriter
 * @brief Abstract class to write Simulink data to files
 */
class SLXIO_APIEXPORT SimulinkWriter
{
public:
  /**
   * Create a new instance of the writer
   */
  virtual SimulinkWriter* New() = 0;

  /**
   * Virtual destructor for cleanup
   */
  virtual ~SimulinkWriter() = default;

  /**
   * Write the current input data to output
   */
  virtual ReturnType Write() = 0;

  /**
   * Set single input data object for writing
   */
  virtual ReturnType SetInputData(const DataObject& data) = 0;

  /**
   * Set indexed input data object for writing
   */
  virtual ReturnType SetInputData(IdType idx, const DataObject& data) = 0;

  /**
   * Get the single input data object
   */
  DataObject* GetInputData() const;

  /**
   * Get the indexed input data object
   */
  DataObject* GetInputData(IdType idx) const;

  /**
   * Access the logger instance
   */
  Logger& GetLogger();

protected:
  Logger& logger;
};

};
SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKWRITER_H
