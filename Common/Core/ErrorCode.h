// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORCODE_H
#define ERRORCODE_H

/**
 * This file describe librray error codes (errors 1000 to 1255)
 * They are returned by the sGetLastError function when many functions fail
 */

#ifdef __cplusplus
extern "C"
{
#endif

#define E_OK 1000

#define E_INVALID_FUNCTION 1001
#define E_FILE_NOT_FOUND 1002
#define E_PATH_NOT_FOUND 1003
#define E_PATH_TOO_LONG 1004
#define E_MESSAGE_TOO_LARGE 1005
#define E_PATH_EMPTY 1006
#define E_TOO_MANY_OPEN_FILES 1007
#define E_FILE_OPEN_FAIL 1008
#define E_INVALID_HANDLE 1009
#define E_INVALID_FILE_MODE 1010
#define E_STREAM_WRITE_FAIL 1011
#define E_STREAM_EMPTY_OUTPUT 1012
#define E_NOT_IMPLEMENTED 1013
#define E_INVALID_ARGUMENT 1014
#define E_PARAMETER_NULL_PTR 1015
#define E_INVALID_DATA_TYPE 1016
#define E_DIRECTORY_NOT_EXSIT 1017
#define E_CONFIG_ALREADY_ACTIVE 1020

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // ERRORCODE_H