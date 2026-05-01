// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORHANDLINGAPI_H
#define ERRORHANDLINGAPI_H

#include "PlatformTypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

  /* Define service functions / macro to debug error codes */
  const char* SlxGetErrorLevelInfo(UInt32 code);
  const char* SlxGetErrorDomainInfo(UInt32 code);
  // added prefix '_' to avoid collision with Windows C API
  // function GetErrorInfo
  const char* SlxGetErrorInfo(UInt32 code);

  int SlxPrintError(UInt32 code);
  int SlxPrintfError(const char* format, UInt32 code);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // ERRORHANDLINGAPI_H