// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETER_H
#define SIMULINKPARAMETER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkDataType.h"
#include "SimulinkParameterBase.h"
#include <memory>
#include <string>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;
class CoderInfo;

/**
 * @class SimulinkParameter
 * @brief A Simulink Parameter object.
 * Accepts values provided as string literals, such as:
 * - Numeric literals: "10.0", "1", "true"
 * Other types are treated as strings and mapped to
 * SimulinkDataType::String. Expressions and structs are not supported.
 * @note No public data type setting is exposed.
 * Resolution from const char* to SimulinkDataType is handled internally.
 * Complexity defaults to "real" and is also resolved internally.
 */
class SLXIO_APIEXPORT SimulinkParameter : public SimulinkParameterBase
{
public:
  /** Default constructor */
  SimulinkParameter();

  /** Explicit constructor */
  explicit SimulinkParameter(const char* val);

  /** Returns current parameter name */
  std::string GetName() override;

  /** Returns parameter dimensions */
  std::vector<UInt16> GetDimensions() override;

  /** Serializes parameter to string */
  std::string ToString() const override;

  /** Returns code generation data struct */
  std::shared_ptr<CoderInfo> GetCoderInfo() override;

  /** Returns parameter minimum value */
  Float32 GetMin() override;

  /** Returns parameter maximum value */
  Float32 GetMax() override;

  /** Returns the resolved parameter SimulinkDataType */
  SimulinkDataType GetDataType() override;

  /**
   * Sets the parameter data type.
   * @warning This function overwrites the default Min/Max values
   * based on the new type.
   * @note Automatic range override is not implemented.
   */
  void SetDataType(SimulinkDataType dataType);

  /** Returns the raw parameter value as stored internally */
  const char* GetValue();

  /** Sets the parameter value */
  void SetValue(const char* value);

  /** Attempts to resolve the value as double */
  HError GetValueAsDouble(Float32& fval);

  /** Attempts to resolve the value as single */
  HError GetValueAsSingle(Float32& sval);

  /** Resolves the parameter value as unsigned 8-bit integer */
  HError GetValueAsUInt8(UInt8& u8val);

  /** Resolves the parameter value as unsigned 16-bit integer */
  HError GetValueAsUInt16(UInt16& u16val);

  /** Sets the parameter name (no backup used) */
  HError SetName(const char* name);

  /** Returns the internal logger */
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
  std::shared_ptr<CoderInfo> coder;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKPARAMETER_H
