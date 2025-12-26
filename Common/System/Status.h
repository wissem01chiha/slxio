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

#ifndef STATUS_H
#define STATUS_H

#include "APIExport.h"
#include "ErrorCode.h"
#include "Type.h"
#include <string>

/**
 * @class Status
 * @brief Wrapper class for handling error codes within the system.
 * @details Provides general error codes; each module can add its own.
 * Naming convention: <MODULE>_ERR_<DESCRIPTION> (e.g., SLX_EIOERR, SYSTEM_ERR_TIMEOUT).
 * @note Renamed from "Error" for MSBuild compatibility (MSB8066) and Doxygen issues.
 * @warning Not yet fully used; most methods fallback to ErrorCode.
 * @example Status s(ErrorCode::SLX_EIOERR);
 *  fprintf(stdout, "Error: %s\n", s.toString());  
 *  Status::log(ErrorCode::SLX_ENOENT); 
 */
class APIEXPORT Status {
public:
  /// @brief Default constructor, initializes with SLX_OK.
  Status();

  /// @brief Construct from an ErrorCode.
  Status(ErrorCode err);

  /// @brief Construct from an ErrorCode and message string.
  Status(ErrorCode err, const std::string &str);

  /// @brief Construct from raw integer error and message string.
  Status(sint32 err, const std::string &str);

  /// @brief Convert an explicit ErrorCode to a string message.
  static const char* toString(ErrorCode err);

  /// @brief Log an ErrorCode and its message to stderr.
  static void log(ErrorCode err);

  /// @brief Convert raw integer to ErrorCode.
  static ErrorCode toErrorCode(uint32 err);

  /// @brief Convert current Status object to a string message.
  const char* toString() const;

  /// @brief Check if current Status matches given ErrorCode.
  bool isA(ErrorCode err) const;

  /// @brief Check if current Status matches another Status.
  bool isA(Status &err) const;

  ~Status() = default;

private:
  ErrorCode errno_;          ///< Stored error code
  std::string strerror_;     ///< Optional error message
};


#endif // STATUS_H