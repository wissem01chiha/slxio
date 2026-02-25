// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef ERRORCODE_H
#define ERRORCODE_H

#include "APIExport.h"

#define SLX_ERROR_MAP(XX)                                                      \
  XX(SLX_OK, 0, "Success")                                                     \
  XX(SLX_ENOENT, 1, "Element not found")                                       \
  XX(SLX_EINVAR, 2, "Invalid argument")                                        \
  XX(SLX_ETYPEMISMATCH, 3, "Type mismatch")                                    \
  XX(SLX_ENULLPTR, 4, "Null pointer")                                          \
  XX(SLX_ENOTIMPL, 5, "Not implemented")                                       \
  XX(SLX_EEXTNSUP, 6, "Extension not supported")                               \
  XX(SLX_EINVALIDX, 8, "Invalid index")                                        \
  XX(SLX_EDUPOBJ, 9, "Duplicate object")                                       \
  XX(SLX_EIOERR, 10, "I/O error")                                              \
  XX(SLX_EEOF, 11, "End of file")                                              \
  XX(SLX_EGETCWD, 12, "Failed to get current directory")                       \
  XX(SLX_ELONGPATH, 13, "Path too long")                                       \
  XX(SLX_ECASTFAIL, 14, "Cast failure")                                        \
  XX(SLX_EMEMALLOC, 15, "Memory allocation failure")                           \
  XX(SLX_ENOTCONN, 16, "Not connected")                                        \
  XX(SLX_ECYCLE, 17, "Cyclic dependency")                                      \
  XX(SLX_EUNSUPPORTED, 18, "Unsupported operation")                            \
  XX(SLX_ELOCKED, 19, "Model locked")                                          \
  XX(SLX_ESTATEINVAL, 20, "Invalid state")                                     \
  XX(SLX_EPARAMINVAL, 21, "Invalid parameter")                                 \
  XX(SLX_EBLOCKNF, 22, "Block not found")                                      \
  XX(SLX_EPORTNF, 23, "Port not found")                                        \
  XX(SLX_ELINKFAIL, 24, "Link failure")                                        \
  XX(SLX_EUNRESOLVED, 25, "Unresolved reference")                              \
  XX(SLX_EUNKNOWN, 1000, "Unknown error")

/**
 * @brief Base container for all low-level error codes used
 * across the project.
 * @todo Add remaining error codes from all third-party dependencies.
 *       Add more SLX writing-related errors.
 *       Expand this list if required and add a message in the error
 * mapping.
 */
enum class APIEXPORT ErrorCode
{
#define XX(name, code, msg) name = code,
  SLX_ERROR_MAP(XX)
#undef XX
};

#endif // ERRORCODE_H