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
class APIEXPORT SimulinkSignal {
public:
  SimulinkSignal();
  ~SimulinkSignal() = default;
  ErrorCode setDataType(SimulinkDataType dt);

  /// @brief Mimics MatWorks API for setting data type from char
  ErrorCode setDataType(const char *dt);
  ErrorCode setComplexityType(const char *ct);

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