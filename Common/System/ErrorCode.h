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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ERRORCODE_H
#define ERRORCODE_H

#include "APIExport.h"

/**
 * @brief Base container for all low level error codes used
 * across the project
 * @todo Add remaing erro codes from all third party deps
 * Add more slx writing related errors
 * expend this list if required and add a message in the erro mapping
 */
enum class APIEXPORT ErrorCode {

  SLX_OK = 0,     ///< Success return status
  SLX_ENOENT = 1, ///< Element not found or no entry
  SLX_EINVAR = 2, ///< Invalid argument passed to a function
  SLX_ETYPEMISMATCH =
      3, ///< Type mismatch error, wrong type passed or expected type not met
  SLX_ENULLPTR = 4, ///< Null object pointer error: dereference, pass, or access
                    ///< of a null object
  SLX_ENOTIMPL = 5, ///< feature/function not implemented, or is not be
                    ///< supported for this operation
  SLX_EEXTNSUP = 6, ///< File extension not supported
  SLX_EINVALIDX = 8, ///< Invalid index error
  SLX_EDUPOBJ = 9,   ///< Duplicate object error, insert or register an object
                     ///< that already exists

  SLX_EIOERR = 10,    ///< Generic I/O error
  SLX_EEOF = 11,      ///< End of file reached
  SLX_EGETCWD = 12,   ///< Failed to get current working directory
  SLX_ELONGPATH = 13, ///< File path too long

  SLX_ECASTFAIL = 14, ///< Cast failure error, invalid or unsafe type conversion

  SLX_EMEMALLOC = 15, ///< Memory allocation failure

  SLX_ENOTCONN = 16, ///< Simulink element not connected
  SLX_ECYCLE = 17,   ///< Cyclic dependency detected in Simulink graph
  SLX_EPORTMISMATCH =
      21, ///< Port type or dimension mismatch between connected blocks
  SLX_EUNSUPPORTED = 18, ///< Unsupported Simulink operation or block type
  SLX_ELOCKED = 19,      ///< Operation not allowed on locked Simulink model
  SLX_ESTATEINVAL = 20,  ///< Invalid Simulink state
  SLX_EPARAMINVAL = 21,  ///< Invalid parameter assignment in Simulink block
  SLX_EBLOCKNF = 22,     ///< Block not found in Simulink model
  SLX_EPORTNF = 23,      ///< Port not found in Simulink Model
  SLX_ELINKFAIL = 24,    ///< Failed to link/connect Simulink blocks
  SLX_EUNRESOLVED = 25,  ///< Unresolved reference in Simulink model


  SLX_EUNKNOWN = 1000, ///< Unknown error
};

/// @brief ErrorCode to string mapping
/// @see implentation in cxx file, add additional maps as requred 
struct ErrorMap { ErrorCode err; const char* strerr; };

static const ErrorMap ErrMap[] = {
    { ErrorCode::SLX_OK, "Success" },
    { ErrorCode::SLX_ENOENT, "Element not found" },
    { ErrorCode::SLX_EINVAR, "Invalid argument" },
    { ErrorCode::SLX_ETYPEMISMATCH, "Type mismatch" },
    { ErrorCode::SLX_ENULLPTR, "Null pointer" },
    { ErrorCode::SLX_ENOTIMPL, "Not implemented" },
    { ErrorCode::SLX_EEXTNSUP, "Extension not supported" },
    { ErrorCode::SLX_EINVALIDX, "Invalid index" },
    { ErrorCode::SLX_EDUPOBJ, "Duplicate object" },
    { ErrorCode::SLX_EIOERR, "I/O error" },
    { ErrorCode::SLX_EEOF, "End of file" },
    { ErrorCode::SLX_EGETCWD, "Failed to get current directory" },
    { ErrorCode::SLX_ELONGPATH, "Path too long" },
    { ErrorCode::SLX_ECASTFAIL, "Cast failure" },
    { ErrorCode::SLX_EMEMALLOC, "Memory allocation failure" },
    { ErrorCode::SLX_ENOTCONN, "Not connected" },
    { ErrorCode::SLX_ECYCLE, "Cyclic dependency" },
    { ErrorCode::SLX_EUNSUPPORTED, "Unsupported operation" },
    { ErrorCode::SLX_ELOCKED, "Model locked" },
    { ErrorCode::SLX_ESTATEINVAL, "Invalid state" },
    { ErrorCode::SLX_EPARAMINVAL, "Invalid parameter" },
    { ErrorCode::SLX_EBLOCKNF, "Block not found" },
    { ErrorCode::SLX_EPORTNF, "Port not found" },
    { ErrorCode::SLX_ELINKFAIL, "Link failure" },
    { ErrorCode::SLX_EUNRESOLVED, "Unresolved reference" },
    { ErrorCode::SLX_EUNKNOWN, "Unknown error" }
};

#endif // ERRORCODE_H