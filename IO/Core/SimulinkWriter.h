// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKWRITER_H
#define SIMULINKWRITER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class DataObject;
class Logger;

/**
 * @class SimulinkWriter
 * @brief Abstract class to write Simulink data to files
 */
class SLXIO_APIEXPORT SimulinkWriter
{
public:
  /** Create a new instance of the writer */
  virtual SimulinkWriter* New() = 0;

  /** Virtual destructor for cleanup */
  virtual ~SimulinkWriter() = default;

  /** Write the current input data to output */
  virtual HError Write() = 0;

  /** Set single input data object for writing */
  virtual HError SetInputData(const DataObject& data) = 0;

  /** Set indexed input data object for writing */
  virtual HError SetInputData(SId idx, const DataObject& data) = 0;

  /** Get the single input data object*/
  DataObject* GetInputData() const;

  /** Get the indexed input data object */
  DataObject* GetInputData(SId idx) const;

  /** Access the logger instance*/
  Logger& GetLogger();

protected:
  Logger& logger;
};

}; // namespace slxio
SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKWRITER_H
