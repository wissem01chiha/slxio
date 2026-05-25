// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETER_H
#define SIMULINKPARAMETER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "CoderInfo.h"
#include "ErrorCode.h"
#include "PlatformTypes.h"
#include "SimulinkDataType.h"
#include "SimulinkElementBase.h"
#include <string>
#include <vector>

class Logger;

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkParameter
 * @brief A Simulink Parameter object.
 */
class SLXIO_APIEXPORT SimulinkParameter : public SimulinkElementBase
{
public:
  /** Default constructor */
  SimulinkParameter();

  /// @brief Explicit constructor.
  /// Accepts values provided as string literals, such as:
  /// - Numeric literals: "10.0", "1", "true"
  /// - Arrays: "[1,2,3]"
  /// - Complex values: "2+2i"
  /// Other types are treated as strings and mapped to
  /// SimulinkDataType::String. Expressions and structs are not
  /// supported.
  /// @note No public data type setting is exposed.
  /// Resolution from const char* to SimulinkDataType is handled
  /// internally by the class. Complexity defaults to "real" and is
  /// also resolved internally.
  explicit SimulinkParameter(const char* val);

  /// @brief get the resolved parameter SimulinkDataType
  SimulinkDataType GetDataType();

  /// @brief set the parameter data type
  /// @warning this function overrites the default Min, Max values
  /// based on new type
  /// @note not implemented the automatic range override
  void SetDataType(SimulinkDataType DataType_);

  /// @brief Returns the default type representation of the parameter
  /// value. This provides the raw value as stored internally, without
  /// conversion to another data type.
  const char* getValue();

  /// @brief Provide a way to modify the parameter value, mimicking the Matlab
  /// API.
  void setValue(const char* value);

  /// @brief Attempts to resolve the value as double.
  UInt32 getValueAsDouble(Float32& fval);

  /// @brief Attempts to resolve the value as Single if enbaled.
  UInt32 getValueAsSingle(Float32& sval);

  /// @brief Resolves the parameter value as an unsigned 8-bit
  /// integer.
  /// @param[out] u8val Parsed value.
  UInt32 getValueAsUInt8(UInt8& u8val);

  /// @brief Resolves the parameter value as an unsigned 16-bit
  /// integer.
  /// @param[out] u16val Parsed value.
  UInt32 getValueAsUInt16(UInt16& u16val);

  /// @brief Resolves the parameter value as an array of floats.
  /// @param[out] vecval Parsed array.
  UInt32 getValueAsArray(std::vector<Float32>& vecval);

  /// @brief Resolves the parameter value as a string.
  /// @param[out] strval Parsed string.
  UInt32 getValueAsString(std::string& strval);

  /// @brief get parameter dimensions
  std::vector<UInt16> GetDimensions();

  /// @brief return current parameter name
  const char* getName();

  /// @brief modify parameter name, no backup used
  UInt32 setName(const char* name);

  SimulinkElementType GetElementType() const override;

  /// @brief by default parameter do not have ids
  /// when called dipslay a waring , fallback to 0
  IdType GetElementId() const override;

  /// @brief no logic return always true, an a warning message
  bool Contains(const IdType& id) const override;

  std::string ToString() const override;

  /// @brief Parameters cannot remove child elements. Returns
  /// E_NOT_IMPLEMENTED.
  ReturnType Erase(
    const std::shared_ptr<SimulinkElementBase>& element) override;

  /// @brief Parameters cannot add child elements. Returns
  /// E_NOT_IMPLEMENTED.
  ReturnType Insert(
    const std::shared_ptr<SimulinkElementBase>& element) override;

  /// @brief get code generation data struct
  CoderInfo GetCoderInfo();

  /// @brief Parameter minumin value
  Float32 GetMin();

  /// @brief Parameter maxiumum value
  Float32 GetMax();

  /* Get the class internal logger*/
  Logger& GetLogger() const;

private:
  Logger& logger;

  const char* Name;
  const char* Value;
  SimulinkDataType DataType;

  const char* Unit;
  const char* Description;
  const char* Complexity;

  Float32 Min;
  Float32 Max;
  std::vector<UInt16> Dimensions;
  CoderInfo coder;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKPARAMETER_H
