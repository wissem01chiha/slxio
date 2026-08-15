// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORMACRO_H
#define ERRORMACRO_H

#include "PlatformTypes.h"

#define SLXIO_PROJECT 0U

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

#define GLOBAL 0U

#define CORE 1U
#define SYSTEM 2U
#define DATAMODEL 3U
#define CONSOLE 4U
#define CONFIGURATION 5U
#define LIBUV 6U
#define LIBZIP 7U
#define LIBXML2 8U
#define NPIO 9U

#define SLXIO_SUCCESS 0U
#define SLXIO_INFO 1U
#define SLXIO_WARN 2U
#define SLXIO_FATAL 3U

/// @brief Helper macro to construct a complient slxio error code.
#define SLXIO_HERROR(PROJECT, NAMESPACE, COMPONENT, LEVEL, ERRORID)            \
    ((((UInt32)(PROJECT) & 0x3U) << 30) |                                      \
     (((UInt32)(NAMESPACE) & 0x1FU) << 25) |                                   \
     (((UInt32)(COMPONENT) & 0xFFU) << 17) |                                   \
     (((UInt32)(LEVEL) & 0x3U) << 15) | (((UInt32)(ERRORID) & 0x3FFU) << 5))

/// @brief Third-party error construct helpers macros

/// @brief Convert libuv error code to slxio format.
#define SLXIO_LIBUV_ERROR(err)                                                 \
    SLXIO_HERROR(SLXIO_PROJECT, THIRDPARTY, LIBUV, SLXIO_FATAL,                \
                 ((-(err)) & 0x3FFU))

/// @brief Convert libzip error code to slxio format.
#define SLXIO_LIBZIP_ERROR(err)                                                \
    SLXIO_HERROR(SLXIO_PROJECT, THIRDPARTY, LIBZIP, SLXIO_FATAL,               \
                 ((err) & 0x3FFU))

/// @brief Convert libxml2 error code to slxio format.
#define SLXIO_LIBXML2_ERROR(err)                                               \
    SLXIO_HERROR(SLXIO_PROJECT, THIRDPARTY, LIBXML2, SLXIO_FATAL,              \
                 ((err) & 0x3FFU))

/// @brief Convert npio error code to slxio format
#define SLXIO_NPIO_ERROR(err)                                                  \
    SLXIO_HERROR(SLXIO_PROJECT, THIRDPARTY, NPIO, SLXIO_FATAL, ((err) & 0x3FFU))

#endif // ERRORMACRO_H