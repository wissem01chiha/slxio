// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKWRITERBASE_H
#define SIMULINKWRITERBASE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "ErrorCode.h"
#include "Logger.h"
#include <memory>

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
  virtual ReturnType setInputData(const T data) = 0;

  virtual ReturnType setInputData(const T& data) { return E_OK; };

  /// @brief Set ouput data for writing
  /// can be stream, string (eg ToString()), custom struct
  P getOutputData() const { return dataObject; }

  /// @brief Write data to output
  virtual ReturnType Write() = 0;

protected:
  SimulinkWriterBase(Logger& logger)
    : l(logger)
    , dataObject(P())
    , ptr(std::shared_ptr<T>()) {};
  std::shared_ptr<T> ptr;
  P dataObject;
  Logger& l;
};

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKWRITERBASE_H