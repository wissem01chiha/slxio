// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORHANDLINGAPI_H
#define ERRORHANDLINGAPI_H

#ifdef __cplusplus
extern "C"
{
#endif

  /**
   * Sets the last error code (similar to Windows SetLastError).
   */
  void sSetLastError(int code);

  /**
   * Retrieves the last error code value.
   */
  int sGetLastError(void);

  /**
   * Get string representation of slxio error by last error.
   */
  const char* sGetLastErrorMessage(void);

  /**
   * Get string representation of slxio error by code.
   * library specific error code starts from 1000
   * for codes 0-35 (range for libzip error code), fallback
   * to zip_error_strerror() and for negative error codes
   * it fallback to uv_strerror(), otherwise return a default
   * message eg unkown error code
   */
  const char* sGetErrorMessage(int code);

  /**
   * Print error message for given code.
   */
  int sPrintErrorMessage(int code);

  /**
   * Printf-style error message for given code.
   */
  int sPrintfErrorMessage(const char* format, int code);

  /**
   * Print last error message.
   */
  int sPrintLastErrorMessage(void);

  /**
   * Printf-style last error message.
   */
  int sPrintfLastErrorMessage(const char* format);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // ERRORHANDLINGAPI_H
