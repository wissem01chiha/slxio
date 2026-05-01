// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORCODE_H
#define ERRORCODE_H

#include "PlatformTypes.h"

/**
 * @file ErrorCode.h
 * @brief Define Software Error Codes
 * Error code layout (uint32_t):
 *  [31..30] Severity (2 bits)
 *  [29..22] Namespace (8 bits)
 *  [21..14] Module (8 bits)
 *  [13..0]  Error code (14 bits)
 */

#ifdef __cplusplus
extern "C"
{
#endif

/* Define error severity levels (2 bits) */
#define E_FATAL 0x0
#define E_ERROR 0x1
#define E_WARN 0x2
#define E_INFO 0x3

/* Define a unique id for each namespace (or so called group) (8 bits) */
#define COMMON 1
#define DOCUMENTATION 2
#define EXAMPLES 3
#define INTERACTION 4
#define IO 5
#define SIMULINK 6
#define TESTING 7
#define THIRDPARTY 8
#define UTILITIES 9
#define VISUALIZATION 10

/* Define a unique id for each module  (8 bits) */
#define CORE 1
#define SYSTEM 2
#define DATA 3
#define JSON 4
#define SLX 5
#define ANNOTATION 6
#define CONFIGURATION 7
#define LAYOUT 8
#define LIBRARY 9
#define MISC 10
#define STATEFLOW 11
#define CONSOLE 12
#define PYTHON 13
#define QT 14
#define LIBZIP 15
#define LIBUV 16

/* Define error mapping macro */
#define SLXIO_ERROR_CODE(severity, namespace, module, error)                   \
  (((UInt32)(severity) << 30) | ((UInt32)(namespace) << 22) |                  \
    ((UInt32)(module) << 14) | ((UInt32)(error) & 0x3FFF))

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // ERRORCODE_H