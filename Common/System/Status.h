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
 * A wrapper class for handling error codes within the system.
 * naming of module related code gnerally is : <MODULE_NAME>_ERR_<DESCRIPTION>
 * eg; SLX_ERR_OPEN, SYSTEM_ERR_TIMEOUT, ....
 * this class contain general error codes and each module canadd it own errors
 * @note This class was renamed from "Error" class name for MSBuild
 * compatibility (MSB8066) and issue with doxygen documentation generation. for
 * more information see:
 * https://developercommunity.visualstudio.com/t/MSBuild:-error:-output-of-custom-build/10554390?sort=newest
 * https://stackoverflow.com/questions/78622876/visual-studio-msbuild-error-msb8066-custom-build
 */
class APIEXPORT Status {
public:
  Status();
  Status(ErrorCode id);
  Status(ErrorCode id, const std::string &message);

  /// @brief Convert an explict ErrorCode to a string.
  static const char *toString(ErrorCode type);

  /// @brief Convert the current Error object's code to a string.
  const char *toString() const;

  static ErrorCode toErrorCode(uint32 value);
  bool isA(ErrorCode type) const;
  bool isA(Status &type) const;

  ~Status() = default;

private:
  ErrorCode errno_;
  std::string message_;
};

#endif // STATUS_H