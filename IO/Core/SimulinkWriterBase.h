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

#ifndef SIMULINKWRITERBASE_H
#define SIMULINKWRITERBASE_H

#include "ABINamespace.h"
#include "ErrorBuffer.h"
#include "ErrorCode.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief base class for all exporters
 * @tparam object data type to write to 
 * @tparam P object
 */
template <typename T, typename P> 
class SimulinkWriterBase {
public:
  virtual ~SimulinkWriterBase() = default;

  /// @brief Write data to output
  virtual ErrorCode Write() = 0;

  /// @brief Set input data for writing
  virtual ErrorCode setInputData(const T data) = 0;

  /// @brief Set ouput data for writing
  /// can be stream, string (eg toString()), custom struct
  virtual ErrorCode setOutputData(const P data) = 0;

   /// @brief Return the accumulated error buffer.
  /// This includes errors collected from all sub-writers invoked
  /// during the parse method.
  ErrorBuffer &getErrorBuffer() { return buffer_; }

  /// @brief toget subwriter buffer and merge it with the parent
  const ErrorBuffer &getErrorBuffer() const { return buffer_; }

protected:
  SimulinkWriterBase() = default;

/// @brief Internal error buffer
  ErrorBuffer buffer_;
};
SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKWRITERBASE_H