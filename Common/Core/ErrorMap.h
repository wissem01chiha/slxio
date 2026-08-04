// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORMAP_H
#define ERRORMAP_H

#include "ErrorCode.h"
#include <cstddef>

#ifdef __cplusplus
extern "C"
{
#endif

  /* Define error metadata structure */
  typedef struct
  {
    int code;
    const char* msg;
  } ErrorMessageTypeInfo;

  /* Define error message for each error code */
  static const ErrorMessageTypeInfo ErrorInfo[] = { { E_OK,
                                                      "The operation completed successfully" },
    { E_INVALID_FUNCTION, "Invalid function called" }, { E_FILE_NOT_FOUND, "File not found" },
    { E_PATH_NOT_FOUND, "Path not found" },
    { E_PATH_TOO_LONG, "Path length exceeds maximum allowed" },
    { E_MESSAGE_TOO_LARGE, "Message size exceeds maximum allowed" },
    { E_PATH_EMPTY, "Path is empty" }, { E_TOO_MANY_OPEN_FILES, "Too many files are open" },
    { E_FILE_OPEN_FAIL, "Failed to open file" }, { E_INVALID_HANDLE, "Invalid file handle" },
    { E_INVALID_FILE_MODE, "Invalid file mode specified" },
    { E_STREAM_WRITE_FAIL, "Failed to write to stream" },
    { E_STREAM_EMPTY_OUTPUT, "Stream produced empty output" },
    { E_NOT_IMPLEMENTED, "Functionality not implemented" },
    { E_INVALID_ARGUMENT, "Invalid argument passed to function" },
    { E_PARAMETER_NULL_PTR, "Function parameter is a null pointer" },
    { E_INVALID_DATA_TYPE, "Invalid data type provided" },
    { E_DIRECTORY_NOT_EXSIT, "Directory folder do not exsit" },
    { E_FILE_REMOVE_FAILED, "Failed to delete file from disk" },
    { E_ARCHIVE_OPEN_FAILED, "Failed to open archive file " },
    { E_ARCHIVE_SOURCE_FAILED, "Failed to source archive " },
    { E_ARCHIVE_REPLACE_FAILED, "Failed to replace file in archive folder" },
    { E_ARCHIVE_ADD_FAILED, "Failed to add a file to archive" },
    { E_ARCHIVE_CLOSE_FAILED, "Failed to clsoe archive" },
    { E_ARCHIVE_REMOVE_FAILED, "failed to remove a file from archive" },
    { E_ARCHIVE_ENTRY_NOT_FOUND, "Entry not found in archive file" },
    { E_ARCHIVE_INVALID_ID, "Invalid archive Id" },
    { E_CONFIG_ALREADY_ACTIVE, "Configuration is already active" }, { 0, NULL } };

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // ERRORMAP_H
