// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COMMONECH_H
#define COMMONECH_H

#include "ErrorMacro.h"

/// Success status code.
#define E_OK SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_SUCCESS, 0U)

/// An invalid argument was passed to a function.
#define E_INVALID_ARGUMENT                                                     \
    SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 1U)

/// A required object handle is invalid.
#define E_INVALID_HANDLE                                                       \
    SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 2U)

/// The object is in an invalid state.
#define E_INVALID_STATE                                                        \
    SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 3U)

/// A default value was used because none was provided.
#define E_DEFAULT_VALUE_USED                                                   \
    SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_WARN, 4U)

/// a not supported callback or function being invoked on an object or class
/// this is a very generic error status and modules can specify on which class,
/// componnat or function the operation was invoked
#define E_OPERATION_NOT_SUPPORTED                                              \
    SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 5U)

/// A nullptr object of type ILogger passed to a function, for concrete logger's
/// implementaions nullptr use specifc erro code for each logger
#define E_ILOGGER_NULLPTR_RECEIVED                                             \
    SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 6U)

#define E_LOGGER_NULLPTR_RECEIVED                                              \
    SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 7U)

/// a nullptr of a generic IErrorHandler type is passed to a function
#define E_IERRORHANDLER_NULLPTR_RECEIVED                                       \
    SLXIO_HERROR(SLXIO_PROJECT, GLOBAL, GLOBAL, SLXIO_FATAL, 8U)

#endif // COMMONECH_H