// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORTYPES_H
#define ERRORTYPES_H

#include "ErrorHandlerMacro.h"

/// Success status code.
#define E_OK SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_SUCCESS, 0U)

/// An invalid argument was passed to a function.
#define E_INVALID_ARGUMENT                                                          \
  SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 1U)

/// A required object handle is invalid.
#define E_INVALID_HANDLE SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 2U)

/// The object is in an invalid state.
#define E_INVALID_STATE SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 3U)

/// A default value was used because none was provided.
#define E_DEFAULT_VALUE_USED                                                        \
  SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_WARN, 4U)

/// a not supported callback or function being invoked on an object or class
#define E_OPERATION_NOT_SUPPORTED                                                   \
  SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 5U)

#endif // ERRORTYPES_H