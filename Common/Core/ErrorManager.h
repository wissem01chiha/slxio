// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORMANAGER_H
#define ERRORMANAGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "ILogger.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ErrorManager
 * @brief A singleton class that manages error and status results across the
 * library.
 */
class SLXIO_APIEXPORT ErrorManager final
{
public:
  /* Retrieves the singleton instance of ResultManager. */
  static ErrorManager& GetInstance();

  /* Change the buffer size if needed.
   * Adjusting the buffer size can have performance implications.
   */
  void SetBufferSize(size_t new_size);

  /* Retrieves the last error code value.
   * If no status has been recorded, returns the E_OK code.
   */
  HError GetLastResult(void);

  /* Retrieves the last informational result.
   * If no information record is found, falls back to E_OK.
   */
  HError GetLastInfoResult(void);

  /* Retrieves the last warning result.
   */
  HError GetLastWarningResult(void);

  /* Retrieves the last fatal result.
   */
  HError GetLastFatalResult(void);

  /* Set the execution program status.
   * Thread-safe routine accessible by any class.
   * This is the main entry point to update the execution status.
   */
  void SetResult(HError status);

  /* Retrieve the full log buffer.
   * Provides access to the complete log for analysis or transmission.
   */
  std::vector<HError> GetBuffer();

  /**
   * Set a custom ILogger based object type to enable the ErrorManager
   * to write trace into the supported logging implementations
   * Note the ErrorManager is not allowed to modify the logger object
   */
  void SetLogger(const ILogger* logger);

  /**
   * Get the logger sink
   */
  const ILogger* GetLogger();

  /**
   * Enables logging feature, Logging is disabled by default for performance reasons.
   * It can be enabled or disabled at runtime using the provided logging control
   * functions.
   */
  void EnableLogging();

  /* Prevents log messages from being generated until logging */
  void DisableLogging();

  /* Returns the current logging state */
  bool GetLogStatus();

private:
  static const size_t m_bufferSize = 500;
  std::vector<HError> m_ringBuffer;
  const ILogger* m_logger = nullptr;
  bool m_logStatus = false;
  size_t head = 0;
  std::mutex m_logMutex;
  ErrorManager();
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ERRORMANAGER_H