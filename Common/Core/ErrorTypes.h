// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORTYPES_H
#define ERRORTYPES_H

#include "PlatformTypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* Define error severity levels */
#define E_FATAL 0x0
#define E_ERROR 0x1
#define E_WARN 0x2
#define E_INFO 0x3

/* Define a unique id for each group */
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

/* Define a unique id for each module */
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

  /* Define error metadata structure */
  typedef struct
  {
    UInt32 code;
    const char* msg;
  } ErrorTypeInfo;

  /* Define error named namepsace/module/level mapping */
  typedef struct
  {
    UInt8 code;
    const char* name;
  } ErrorLevelTypeInfo;

  typedef struct
  {
    UInt8 code;
    const char* name;
  } ErrorDomainTypeInfo;

/* Define global error code identifiers */
#define E_OK SLXIO_ERROR_CODE(E_INFO, 0x00, 0x00, 0x00)
#define E_WRNG_FUNC_PARAM SLXIO_ERROR_CODE(E_FATAL, 0x00, 0x00, 0x01)
#define E_NOT_IMPL SLXIO_ERROR_CODE(E_WARN, 0x00, 0x00, 0x02)
#define E_FUNC_PARAM_NULL_PTR SLXIO_ERROR_CODE(E_WARN, 0x00, 0x00, 0x03)

  /* Define specific error unique identifiers */

#define E_MSG_TOO_LARGE SLXIO_ERROR_CODE(E_ERROR, COMMON, CORE, 0x00)
#define E_PATH_TOO_LONG SLXIO_ERROR_CODE(E_ERROR, COMMON, CORE, 0x01)

#define E_GET_CWD_FAIL SLXIO_ERROR_CODE(E_FATAL, COMMON, SYSTEM, 0x00)
#define E_EOF SLXIO_ERROR_CODE(E_INFO, COMMON, SYSTEM, 0x01)
#define E_PARAM_POINTER_NULL SLXIO_ERROR_CODE(E_INFO, COMMON, SYSTEM, 0x02)
#define E_WRNG_FILE_MODE SLXIO_ERROR_CODE(E_FATAL, COMMON, SYSTEM, 0x03)
#define E_FOPEN_FAIL SLXIO_ERROR_CODE(E_FATAL, COMMON, SYSTEM, 0x04)
#define E_STREAM_WRITE_FAIL SLXIO_ERROR_CODE(E_FATAL, COMMON, SYSTEM, 0x05)
#define E_STREAM_EMPTY_OUTPUT SLXIO_ERROR_CODE(E_FATAL, COMMON, SYSTEM, 0x06)
#define E_NULL_FILE_PATH SLXIO_ERROR_CODE(E_ERROR, COMMON, SYSTEM, 0x07)
#define E_NULL_DIR_PATH SLXIO_ERROR_CODE(E_ERROR, COMMON, SYSTEM, 0x08)

#define E_CONFIG_ACTIVE SLXIO_ERROR_CODE(E_WARN, SIMULINK, CONFIGURATION, 0x00)

#define E_ZIP_ER_OK SLXIO_ERROR_CODE(E_INFO, THIRDPARTY, LIBZIP, 0)
#define E_ZIP_ER_MULTIDISK SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 1)
#define E_ZIP_ER_RENAME SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 2)
#define E_ZIP_ER_CLOSE SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 3)
#define E_ZIP_ER_SEEK SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 4)
#define E_ZIP_ER_READ SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 5)
#define E_ZIP_ER_WRITE SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 6)
#define E_ZIP_ER_CRC SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 7)
#define E_ZIP_ER_ZIPCLOSED SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 8)
#define E_ZIP_ER_NOENT SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 9)
#define E_ZIP_ER_EXISTS SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 10)
#define E_ZIP_ER_OPEN SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 11)
#define E_ZIP_ER_TMPOPEN SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 12)
#define E_ZIP_ER_ZLIB SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 13)
#define E_ZIP_ER_MEMORY SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 14)
#define E_ZIP_ER_CHANGED SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 15)
#define E_ZIP_ER_COMPNOTSUPP SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 16)
#define E_ZIP_ER_EOF SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 17)
#define E_ZIP_ER_INVAL SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 18)
#define E_ZIP_ER_NOZIP SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 19)
#define E_ZIP_ER_INTERNAL SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 20)
#define E_ZIP_ER_INCONS SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 21)
#define E_ZIP_ER_REMOVE SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 22)
#define E_ZIP_ER_DELETED SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 23)
#define E_ZIP_ER_ENCRNOTSUPP SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 24)
#define E_ZIP_ER_RDONLY SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 25)
#define E_ZIP_ER_NOPASSWD SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 26)
#define E_ZIP_ER_WRONGPASSWD SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 27)
#define E_ZIP_ER_OPNOTSUPP SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 28)
#define E_ZIP_ER_INUSE SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 29)
#define E_ZIP_ER_TELL SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 30)
#define E_ZIP_ER_COMPRESSED_DATA                                               \
  SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 31)
#define E_ZIP_ER_CANCELLED SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 32)
#define E_ZIP_ER_DATA_LENGTH SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 33)
#define E_ZIP_ER_NOT_ALLOWED SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 34)
#define E_ZIP_ER_TRUNCATED_ZIP SLXIO_ERROR_CODE(E_ERROR, THIRDPARTY, LIBZIP, 35)

  /* Define error info for each error code */
  extern const ErrorTypeInfo ErrorInfo[];
  extern const size_t ErrorInfoCount;

  extern const ErrorLevelTypeInfo ErrorLevelInfo[];
  extern const size_t ErrorLevelInfoCount;

  extern const ErrorDomainTypeInfo ErrorDomainInfo[];
  extern const size_t ErrorDomainInfoCount;

  /* Define service functions / macro to debug error codes */
  const char* GetErrorLevelInfo(UInt32 code);
  const char* GetErrorDomainInfo(UInt32 code);
  // added prefix '_' to avoid collision with Windows C API
  // function GetErrorInfo
  const char* _GetErrorInfo(UInt32 code);

  int PrintError(UInt32 code);
  int PrintfError(const char* format, UInt32 code);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // ERRORTYPES_H
