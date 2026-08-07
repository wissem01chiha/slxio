// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SYSTEMERRORTYPES_H
#define SYSTEMERRORTYPES_H

/// Always include the global error codes header definition file.
/// This file is an implementation file and should be included in
/// Cxx source files only.
#include "ErrorHandlerMacro.h"
#include "ErrorTypes.h"

#define E_INVALID_FUNCTION                                                     \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 1U)
#define E_FILE_NOT_FOUND                                                       \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 2U)
#define E_PATH_NOT_FOUND                                                       \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 3U)
#define E_PATH_TOO_LONG                                                        \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 4U)
#define E_MESSAGE_TOO_LARGE                                                    \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 5U)
#define E_PATH_EMPTY SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 6U)
#define E_TOO_MANY_OPEN_FILES                                                  \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 7U)
#define E_FILE_OPEN_FAIL                                                       \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 8U)
#define E_INVALID_FILE_MODE                                                    \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 10U)
#define E_STREAM_WRITE_FAIL                                                    \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 11U)
#define E_STREAM_EMPTY_OUTPUT                                                  \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 12U)
#define E_NOT_IMPLEMENTED                                                      \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 13U)
#define E_PARAMETER_NULL_PTR                                                   \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 15U)
#define E_INVALID_DATA_TYPE                                                    \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 16U)
#define E_DIRECTORY_NOT_EXIST                                                  \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 17U)
#define E_FILE_REMOVE_FAILED                                                   \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, CORE, SLXIO_FATAL, 18U)
#define E_DIRECTORY_NOT_EXSIT                                                  \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 19U)
#define E_ARCHIVE_OPEN_FAILED                                                  \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 20U)
#define E_ARCHIVE_SOURCE_FAILED                                                \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 21U)
#define E_ARCHIVE_REPLACE_FAILED                                               \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 22U)
#define E_ARCHIVE_ADD_FAILED                                                   \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 23U)
#define E_ARCHIVE_CLOSE_FAILED                                                 \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 24U)
#define E_ARCHIVE_REMOVE_FAILED                                                \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 25U)
#define E_ARCHIVE_ENTRY_NOT_FOUND                                              \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 26U)
#define E_ARCHIVE_INVALID_ID                                                   \
  SLXIO_HERROR(SLXIO_PROJECT, COMMON, SYSTEM, SLXIO_FATAL, 27U)

#endif // SYSTEMERRORTYPES_H