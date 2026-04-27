// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARSERBASE_H
#define SIMULINKPARSERBASE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorTypes.h"
#include "Logger.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkParserBase
 * @brief Generic parser base class for all readers of data files.
 * This class defines the main interface for utilities that construct
 * SimulinkElementBase objects from any input source (slx, json, ...),
 * corresponding to modules in the Simulink namespace.
 * Objects of type SimulinkParserBase can be composed, and each parser
 * should initialize its custom data structure internally. After
 * parsing or building, the parser must return a smart pointer
 * reference to the constructed object. This class is designed so that
 * each parser may call sub-parser objects. Child classes should also
 * add any errors thrown during parsing to the internal error buffer
 * for profiling and diagnostics.
 * @tparam T the input data object to read from
 * @tparam P the retrun type object beeing constructed
 */
template <typename T, typename P>
class APIEXPORT SimulinkParserBase
{
public:
  /// @brief Virtual destructor (proper cleanup of derived classes.)
  virtual ~SimulinkParserBase() = default;

  /// @brief Set the input data for the parser.
  virtual ErrorCode setInputData(const T data)
  {
    dataObject = data;
    return ErrorCode::E_OK;
  };

  /// @brief Set the input data for the parser.
  /// @note  Used when the input data is a pointer type or a heavy
  /// object,
  ///        to avoid unnecessary copying.
  virtual ErrorCode setInputData(const T& data)
  {
    dataObject = data;
    return ErrorCode::E_OK;
  };

  /// @brief Retrieve the parsed SimulinkElementBase object.
  std::shared_ptr<P> getOutputData() { return ptr; };

  /// @brief Retrieve the input data object.
  T& getDataObject() { return dataObject; };

  /// @brief Parsing Callback
  virtual ErrorCode parse() = 0;

protected:
  /// @brief Default constructor
  SimulinkParserBase()
    : ptr(std::make_shared<P>())
    , dataObject()
    , l(Logger::getInstance()) {};
  std::shared_ptr<P> ptr;
  T dataObject;
  Logger& l;
};

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKPARSERBASE_H
