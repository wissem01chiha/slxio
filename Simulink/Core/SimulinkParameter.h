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
#include "Type.h"
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Simulink parameter object.
 * @see https://www.mathworks.com/help/simulink/slref/simulink.parameter.html
 */
class APIEXPORT SimulinkParameter {
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

  /// @brief Function overloading cannot be done by return type alone,
  /// so a variant is used instead.
  /// @brief Resolves the const char* value and maps it to the requested
  /// implementation data type.
  Float getValueAsDouble();
  Float getValueAsSingle();
  uint8 getValueAsUInt8();
  uint16 getValueAsUInt16();
  const std::vector<Float> getValueAsArray();
  std::string getValueAsString();

  std::vector<uint16> getDimensions();
  std::string toString();

  const char *getName();
  ErrorCode setName(const char *name);

  CoderInfo getCoderInfo();

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