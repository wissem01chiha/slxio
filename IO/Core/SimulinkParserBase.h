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

#ifndef SIMULINKPARSERBASE_H
#define SIMULINKPARSERBASE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorBuffer.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkParserBase
 * @brief Generic parser base class for all readers of data files.
 * This class defines the main interface for utilities that construct
 * SimulinkElementBase objects from any input source (SLX, JSON, ...),
 * corresponding to modules in the Simulink namespace.
 * Objects of type SimulinkParserBase can be composed, and each parser
 * should initialize its custom data structure internally. After parsing
 * or building, the parser must return a smart pointer reference to the
 * constructed object.
 * This class is designed so that each parser may call sub-parser objects.
 * Child classes should also add any errors thrown during parsing to the
 * internal error buffer for profiling and diagnostics.
 * @tparam T the input data object to read from 
 * @tparam P the retrun type object beeing constructed 
 * Example
 * @code
	ErrorCode ParentParser::parse() { 
	  // call sub-parser 
	  SubParser sub;
	  sub.setInputData(...); 
	  ErrorCode ec = sub.parse(); 
	  // merge sub-parser errors into parent buffer 
	  buffer_.push_back(sub.getErrorBuffer()); 
	  return ec;
	 }
  *@endcode
  * @note this class do not provide any implenation or provide a dummy cxx file
 */
template <typename T, typename P>
class APIEXPORT SimulinkParserBase {
public:
  virtual ~SimulinkParserBase() = default;

  /// @brief Set the input data for the parser.
  virtual ErrorCode setInputData(const T data) = 0;

  /// @brief Retrieve the parsed SimulinkElementBase object.
  virtual std::shared_ptr<P> getDataObject() const = 0;

  /// @brief parsing process.
  virtual ErrorCode parse() = 0;

  /// @brief Return the accumulated error buffer.
  /// This includes errors collected from all sub-parsers invoked
  /// during the parse method.
  ErrorBuffer &getErrorBuffer() { return buffer_; }

  /// @brief toget subparser buffer and merge it with the parent 
  const ErrorBuffer &getErrorBuffer() const { return buffer_; }

protected:
  SimulinkParserBase() = default;

  /// @brief Internal error buffer 
  ErrorBuffer buffer_;
};

SLXIO_NAMESPACE_END
SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKPARSERBASE_H
