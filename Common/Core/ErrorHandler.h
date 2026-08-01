// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "ErrorCode.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ErrorHandler
 * @brief Main Error Handling Class
 */
class SLXIO_APIEXPORT ErrorHandler final
{
public:
  /** Default Constructor */
  ErrorHandler() = default;

  /** Sets the last error code (similar to Windows SetLastError).*/
  void SetLastError(int code);

  /** Retrieves the last error code value.*/
  int GetLastError(void);

  /** Get string representation of error by last error.*/
  const char* GetLastErrorMessage(void);

  /**
   * Get string representation of slxio error by code.
   * library specific error code starts from 1000
   * for codes 0-35 (range for libzip error code), fallback
   * to zip_error_strerror() and for negative error codes
   * it fallback to uv_strerror(), otherwise return a default
   * message eg unkown error code
   */
  static const char* GetErrorMessage(int code);

  /** Print error message for given code.*/
  static int PrintErrorMessage(int code);

  /** Printf-style error message for given code.*/
  static int PrintfErrorMessage(const char* format, int code);

  /** Print last error message.*/
  int PrintLastErrorMessage(void);

  /** Printf-style last error message.*/
  int PrintfLastErrorMessage(const char* format);

  /** Default Destructor */
  ~ErrorHandler() = default;

private:
  int lastError = E_OK;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ERRORHANDLER_H
