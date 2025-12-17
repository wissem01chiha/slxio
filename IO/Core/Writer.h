// Copyright 2024-2026 Wissem Chiha
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

#ifndef WRITER_H
#define WRITER_H

#include "slxABINamespace.h"
#include "slxType.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class Writer {
public:
  enum ErrorCode { Ok = 0, InvalidData, NotImplemented };

  virtual ~Writer() = default;

  /// @brief Write data to output
  virtual ErrorCode Write() = 0;

  /// @brief Set input data for writing
  virtual void setInputData(const void *data, size_t size) = 0;

  /// @brief Set input data by index
  virtual void setInputData(Index index, const void *data, size_t size) = 0;

  virtual std::string toString() = 0;
  static const char *toString(ErrorCode code);

protected:
  Writer() = default;
  void setError(ErrorCode code);

private:
  Writer(const Writer &) = delete;
  Writer &operator=(const Writer &) = delete;

  ErrorCode lastError_;
};
SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END

#endif // WRITER_H