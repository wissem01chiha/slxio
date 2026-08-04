// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RESULTMAP_H
#define RESULTMAP_H

#include "PlatformTypes.h"

/// project Id
#define SLXIO_PROJECT 0U

/// error code used by the entire project.
#define GLOBAL 0U

#define COMMON 1U
#define DOCUMENTATION 2U
#define EXAMPLES 3U
#define IO 4U
#define SIMULINK 5U
#define TESTING 6U
#define THIRDPARTY 7U
#define UTILITIES 8U
#define VISUALIZATION 9U
#define INTERACTION 10U

/// error code used by the entire namespace.
#define GLOBAL 0U

#define CORE 1U
#define SYSTEM 2U
#define DATAMODEL 3U
#define CONSOLE 4U
#define CONFIGURATION 5U
#define LIBUV 6U
#define LIBZIP 7U
#define LIBXML2 8U

#define SLXIO_SUCCESS 0U ///< Operation succeeded.
#define SLXIO_INFO 1U    ///< Informational message.
#define SLXIO_WARN 2U    ///< Warning condition.
#define SLXIO_FATAL 3U   ///< Fatal error.

/// @brief construct an slxio based error code.
/// @param PROJECT   project identifier (2 bits).
/// @param NAMESPACE namespace identifier (5 bits).
/// @param COMPONENT component identifier (8 bits).
/// @param LEVEL     severity level (2 bits).
/// @param ERRORID   error identifier (10 bits).
/// @return encoded 32-bit error code.
#define SLXIO_SRESULT(PROJECT, NAMESPACE, COMPONENT, LEVEL, ERRORID)                     \
  ((((UInt32)(PROJECT) & 0x3U) << 30) | (((UInt32)(NAMESPACE) & 0x1FU) << 25) |          \
    (((UInt32)(COMPONENT) & 0xFFU) << 17) | (((UInt32)(LEVEL) & 0x3U) << 15) |           \
    (((UInt32)(ERRORID) & 0x3FFU) << 5))

/// third-party error handling macros

/// convert libuv error code to slxio format.
#define SLXIO_LIBUV_ERROR(err)                                                           \
  SLXIO_SRESULT(SLXIO_PROJECT, THIRDPARTY, LIBUV, SLXIO_FATAL, ((-(err)) & 0x3FFU))

/// convert libzip error code to slxio format.
#define SLXIO_LIBZIP_ERROR(err)                                                          \
  SLXIO_SRESULT(SLXIO_PROJECT, THIRDPARTY, LIBZIP, SLXIO_FATAL, ((err) & 0x3FFU))

/// convert libxml2 error code to slxio format.
#define SLXIO_LIBXML2_ERROR(err)                                                         \
  SLXIO_SRESULT(SLXIO_PROJECT, THIRDPARTY, LIBXML2, SLXIO_FATAL, ((err) & 0x3FFU))

#endif // RESULTMAP_H