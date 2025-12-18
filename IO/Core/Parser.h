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

#ifndef PARSER_H
#define PARSER_H

#include "ABINamespace.h"
#include "Type.h"
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Generic Parser base class for all IO modules.
 * Provides a common interface and error handling for
 * specialized parsers.
 * @note each parser shouled init the custom data structure
 * internally and after parsing/building return a smart pointer
 * refrence to it
 */
class Parser {
public:
  enum ErrorCode {
    Ok = 0,
    InvalidFormat,
    FormatNotSupported,
    NotImplemented,
    InvalidArgument
  };
  virtual ~Parser() = default;

  virtual ErrorCode setInputData(void *data);

  virtual ErrorCode parse() = 0;
  virtual std::string toString() = 0;

  ErrorCode getLastError() const;
  static const char *toString(ErrorCode code);

protected:
  Parser();
  void setError(ErrorCode code);

private:
  ErrorCode lastError_;
  void *input_;
};

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END

#endif // PARSER_H
