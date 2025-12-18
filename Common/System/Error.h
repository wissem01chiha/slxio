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

#ifndef ERROR_H
#define ERROR_H

#include "APIExport.h"
#include "ErrorCode.h"
#include "Type.h"

/**
 * @class Error
 * This class contian all the error codes used across the library/and modules
 * naming of module related code gnerally is : <MODULE_NAME>_ERR_<DESCRIPTION>
 * eg; SLX_ERR_OPEN, SYSTEM_ERR_TIMEOUT, ....
 * this class contain general error codes and each module canadd it own errors
 * @example return an error code from a function
 */
class APIEXPORT Error {
public:
  Error();
  Error(ErrorCode id);
  static const char *toString(ErrorCode type);
  const char *toString() const;
  static ErrorCode toErrorCode(uint32 value);
  bool isA(ErrorCode type) const;
  ~Error() = default;

private:
  ErrorCode errno_;
};

#endif // ERROR_H