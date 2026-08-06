// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSIGNAL_H
#define SIMULINKSIGNAL_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "CoderInfo.h"
#include "ErrorCode.h"
#include "PlatformTypes.h"
#include "SimulinkDataType.h"
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A SimulinkSignal Object
 */
class SLXIO_APIEXPORT SimulinkSignal final
{
public:
  /**
   * Construct a new SimulinkSignal object.
   */
  SimulinkSignal();

  /**
   * Destroy the SimulinkSignal object.
   */
  ~SimulinkSignal() = default;

  /**
   * Return the underlying Simulink data type of the signal.
   */
  SimulinkDataType getDataType();

  /**
   * Set the data type of the signal.
   */
  HError setDataType(SimulinkDataType dt);

  /**
   * Set the data type of the signal from a string (MatWorks API style).
   */
  HError setDataType(const char* dt);

  /// @brief Set the complexity type of the signal from a string
  HError setComplexityType(const char* ct);

  /// @brief Get the complexity type of the signal
  const char* getComplexity();

  /// @brief Get the dimensions of the signal
  std::vector<UInt16> getDimensions();

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
  std::vector<Float32> getSampleTime();

  /// @brief Set the valid range (minimum and maximum) for the signal
  HError setRange(Float32 min, Float32 max);

private:
  const char* InitialValue;
  SimulinkDataType DataType;

  const char* Description;
  const char* Unit;
  const char* Complexity = "real";

  const char* DimensionsMode;
  std::vector<UInt16> Dimensions;
  std::vector<Float32> SampleTime;

  Float32 Min;
  Float32 Max;

  CoderInfo coder;
};

SLXIO_ABI_NAMESPACE_END
};

#endif /* SIMULINKSIGNAL_H */
