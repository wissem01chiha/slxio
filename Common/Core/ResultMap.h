// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RESULTMAP_H
#define RESULTMAP_H

#include "PlatformTypes.h"

// error code using bitfield layout similar to HRESULT on winodws APi
// https://learn.microsoft.com/en-us/windows/win32/seccrypto/common-hresult-values
/**
31      30 29      25 24      17 16    15 14         5 4      0
+---------+----------+----------+--------+------------+--------+
| Project | Group    |Component | Level  |  Error Id  |Reserved|
+---------+----------+----------+--------+------------+--------+
    2 bits    5 bits     8 bits    2 bits    10 bits    5 bits

helper functions to decored or extrcat each bitset can be found in ResultHandler.h
 */

// project id useful for extending the error code system to other projects, but for now we only have
// one project
#define SLXIO_PROJECT 0U

// that error code is used or returned by the whole project, not a specific namespace or component
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

// that error code is used or returned by the whole Namespace, not a specific component
#define GLOBAL 0U

#define CORE 1U
#define SYSTEM 2U
#define DATAMODEL 3U
#define CONSOLE 4U
#define LIBUV 5U
#define LIBZIP 6U
#define LIBXML2 7U

#define SLXIO_SUCCESS 0U
#define SLXIO_INFO 1U
#define SLXIO_WARN 2U
#define SLXIO_FATAL 3U

#define SLXIO_SRESULT(PROJECT, NAMESPACE, COMPONENT, LEVEL, ERRORID)                               \
  ((((UInt32)(PROJECT) & 0x3U) << 30) | (((UInt32)(NAMESPACE) & 0x1FU) << 25) |                    \
    (((UInt32)(COMPONENT) & 0xFFU) << 17) | (((UInt32)(LEVEL) & 0x3U) << 15) |                     \
    (((UInt32)(ERRORID) & 0x3FFU) << 5))

// helper macor for third_parties modules
// taht do not follwi the standar code retune
// int rc = uv_fs_open(...);
//
// if (rc < 0)
// {
//     return SLXIO_LIBUV_ERROR(rc);
// }

#define SLXIO_LIBUV_ERROR(err)                                                                     \
  SLXIO_SRESULT(SLXIO_PROJECT, THIRDPARTY, LIBUV, SLXIO_FATAL, ((-(err)) & 0x3FFU))

#define SLXIO_LIBZIP_ERROR(err)                                                                    \
  SLXIO_SRESULT(SLXIO_PROJECT, THIRDPARTY, LIBZIP, SLXIO_FATAL, ((err) & 0x3FFU))

#define SLXIO_LIBXML2_ERROR(err)                                                                   \
  SLXIO_SRESULT(SLXIO_PROJECT, THIRDPARTY, LIBXML2, SLXIO_FATAL, ((err) & 0x3FFU))

#endif // RESULTMAP_H