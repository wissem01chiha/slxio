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

#ifndef ERRORBUFFER_H
#define ERRORBUFFER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "Logger.h"
#include "Type.h"
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @class ErrorBuffer
/// @brief A buffer for storing multiple error codes to enable deeper profiling
/// of errors, exceptions, and behavior logs.
/// Example
/// @code
/// ErrorBuffer buffer;
/// buffer.push_back(ErrorCode::SLX_EIOERR);
/// if (buffer.contains(ErrorCode::SLX_EIOERR)) {
///    ...
/// }
/// @endcode
/// allocate a buffer with a given maximum size:
/// @code
/// ErrorBuffer buffer(128);
/// @endcode
class APIEXPORT ErrorBuffer final {
public:
  explicit ErrorBuffer(size_t maxSize = 100);

  void push_back(const ErrorCode &code);

  /// @brief merge a subbuffer elements to this buffer
  /// @note if the resulting buffer excceds the max size trim the subbuffer
  void push_back(const ErrorBuffer &buffer);

  void clear();
  size_t size() const;
  bool empty() const;
  bool contains(const ErrorCode &code) const;

  void print(std::ostream &os) const;
  void log() const;

  ErrorCode &operator[](size_t index);
  const ErrorCode &operator[](size_t index) const;

  ~ErrorBuffer();

private:
  std::vector<ErrorCode> errlist;
  size_t maxSize_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // ERRORBUFFER_H