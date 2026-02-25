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

#ifndef SIMULINKWRITERBASE_H
#define SIMULINKWRITERBASE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorBuffer.h"
#include "ErrorCode.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base class for all exporters
 * @tparam T the input type, usually a SimulinkElementBase or derived class
 * @tparam P the output type, can be a stream, string, pointer,...
 */
template <typename T, typename P>
class SimulinkWriterBase
{
public:
  virtual ~SimulinkWriterBase() = default;

  /// @brief Set input data for writing
  virtual ErrorCode setInputData(const T data) = 0;

  virtual ErrorCode setInputData(const T& data) { return ErrorCode::SLX_OK; };

  /// @brief Set ouput data for writing
  /// can be stream, string (eg toString()), custom struct
  P getOutputData() const { return dataObject; }

  /// @brief Write data to output
  virtual ErrorCode Write() = 0;

protected:
  SimulinkWriterBase(Logger& logger)
    : l(logger)
    , dataObject(P()), ptr(std::shared_ptr<T>()) {};
  std::shared_ptr<T> ptr;
  P dataObject;
  Logger& l;
};

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKWRITERBASE_H