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

#ifndef SIMULINKSIGNAL_H
#define SIMULINKSIGNAL_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "CoderInfo.h"
#include "ErrorCode.h"
#include "SimulinkDataType.h"
#include "Type.h"
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A SimulinkSignal Object
 */
class APIEXPORT SimulinkSignal final {
public:
  /// @brief Construct a new SimulinkSignal object
  SimulinkSignal();

  /// @brief Destroy the SimulinkSignal object
  ~SimulinkSignal() = default;

  /// @brief Return the underlying Simulink data type of the signal
  SimulinkDataType getDataType();

  /// @brief Set the data type of the signal
  ErrorCode setDataType(SimulinkDataType dt);

  /// @brief Set the data type of the signal from a string (MatWorks API style)
  ErrorCode setDataType(const char *dt);

  /// @brief Set the complexity type of the signal from a string
  ErrorCode setComplexityType(const char *ct);

  /// @brief Get the complexity type of the signal
  const char *getComplexity();

  /// @brief Get the dimensions of the signal
  std::vector<uint16> getDimensions();

  /// @brief Get code generation metadata for the signal
  CoderInfo getCoderInfo();

  /// @brief Get the initial value of the signal
  const char* getInitialValue();

  /// @brief Get the description of the signal
  const char* getDescription();

  /// @brief Get the dimensions mode of the signal
  const char* getDimensionsMode();

  /// @brief Get the unit of the signal
  const char* getUnit();

  /// @brief Get the sample time values of the signal
  std::vector<Float> getSampleTime();

  /// @brief Set the valid range (minimum and maximum) for the signal
  ErrorCode setRange(Float min, Float max);

private:
  const char *InitialValue;
  SimulinkDataType DataType;

  const char *Description;
  const char *Unit;
  const char *Complexity = "real";

  const char *DimensionsMode;
  std::vector<uint16> Dimensions;
  std::vector<Float> SampleTime;

  Float Min;
  Float Max;
  
  CoderInfo coder;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKSIGNAL_H