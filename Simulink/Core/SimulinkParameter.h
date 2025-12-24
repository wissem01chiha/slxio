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

#ifndef SIMULINKPARAMETER_H
#define SIMULINKPARAMETER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "CoderInfo.h"
#include "ErrorCode.h"
#include "SimulinkDataType.h"
#include "SimulinkElementBase.h"
#include "Type.h"
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Simulink Parameter object.
 * @see https://www.mathworks.com/help/simulink/slref/simulink.parameter.html
 */
class APIEXPORT SimulinkParameter : public SimulinkElementBase {
public:
  /// @brief Default constructor
  SimulinkParameter();

  /// @brief Explicit constructor.
  /// Accepts values provided as string literals, such as:
  /// - Numeric literals: "10.0", "1", "true"
  /// - Arrays: "[1,2,3]"
  /// - Complex values: "2+2i"
  /// Other types are treated as strings and mapped to
  /// SimulinkDataType::String. Expressions and structs are not supported.
  /// @note No public data type setting is exposed.
  /// Resolution from const char* to SimulinkDataType is handled internally
  /// by the class. Complexity defaults to "real" and is also resolved
  /// internally.
  SimulinkParameter(const char *val);

  /// @brief get the resolved parameter SimulinkDataType
  SimulinkDataType getDataType();

  /// @brief Returns the default type representation of the parameter value.
  /// This provides the raw value as stored internally, without conversion
  /// to another data type.
  const char *getValue();

  /// @brief Attempts to resolve the value as double.
  ErrorCode getValueAsDouble(Float &fval);

  /// @brief Attempts to resolve the value as Single if enbaled.
  ErrorCode getValueAsSingle(Float &sval);

  /// @brief Resolves the parameter value as an unsigned 8-bit integer.
  /// @param[out] u8val Parsed value.
  ErrorCode getValueAsUInt8(uint8 &u8val);

  /// @brief Resolves the parameter value as an unsigned 16-bit integer.
  /// @param[out] u16val Parsed value.
  ErrorCode getValueAsUInt16(uint16 &u16val);

  /// @brief Resolves the parameter value as an array of floats.
  /// @param[out] vecval Parsed array.
  ErrorCode getValueAsArray(std::vector<Float> &vecval);

  /// @brief Resolves the parameter value as a string.
  /// @param[out] strval Parsed string.
  ErrorCode getValueAsString(std::string &strval);

  /// @brief get parameter dimensions
  std::vector<uint16> getDimensions();

  /// @brief return current parameter name 
  const char *getName();

  /// @brief modify parameter name, no backup used 
  ErrorCode setName(const char *name);

  SimulinkElementType getType() const override;

  /// @brief by default parameter do not have ids
  /// when called dipslay a waring , fallback to 0
  Index getID() const override;

  /// @brief no logic return always true, an a warning message
  bool contains(const Index &id) const override;

  std::string toString() const override;

  /// @brief Parameters cannot remove child elements. Returns
  /// SLX_ERR_UNSUPPORTED.
  ErrorCode remove(const std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Parameters cannot add child elements. Returns SLX_ERR_UNSUPPORTED.
  ErrorCode add(const std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief get code generation data struct
  CoderInfo getCoderInfo();

  /// @brief Parameter minumin value 
  Float getMin();

  /// @brief Parameter maxiumum value 
  Float getMax();

private:
  const char *Name;
  const char *Value;
  SimulinkDataType DataType;

  const char *Unit;
  const char *Description;
  const char *Complexity = "real";

  Float Min;
  Float Max;
  std::vector<uint16> Dimensions;
  CoderInfo coder;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKPARAMETER_H