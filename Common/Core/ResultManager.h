// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RESULTMANAGER_H
#define RESULTMANAGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ResultManager
 * @brief A singleton class that manages error and status results across the
 * library.
 */
class SLXIO_APIEXPORT ResultManager final
{
public:
  /* Retrieves the singleton instance of ResultManager. */
  static ResultManager& GetInstance();

  /* Change the buffer size if needed.
   * Adjusting the buffer size can have performance implications.
   */
  void SetBufferSize(size_t new_size);

  /* Retrieves the last error code value.
   * If no status has been recorded, returns the E_OK code.
   */
  SResult GetLastResult(void);

  /* Retrieves the last informational result.
   * If no information record is found, falls back to E_OK.
   */
  SResult GetLastInfoResult(void);

  /* Retrieves the last warning result.
   */
  SResult GetLastWarningResult(void);

  /* Retrieves the last fatal result.
   */
  SResult GetLastFatalResult(void);

  /* Set the execution program status.
   * Thread-safe routine accessible by any class.
   * This is the main entry point to update the execution status.
   */
  void SetResult(SResult status);

  /* Retrieve the full log buffer.
   * Provides access to the complete log for analysis or transmission.
   */
  std::vector<SResult> GetBuffer();

private:
  static const size_t bufferSize = 500;
  std::vector<SResult> ringBuffer;
  size_t head = 0;
  std::mutex log_mutex;
  ResultManager();
};

SLXIO_ABI_NAMESPACE_END
};

#endif // RESULTMANAGER_H