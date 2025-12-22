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

#ifndef SIMULINKBLOCKTYPE_H
#define SIMULINKBLOCKTYPE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "SimulinkElementType.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Enumeration of Simulink block types.
 */
class APIEXPORT SimulinkBlockType final : public SimulinkElementType {
public:
  enum Type {
    DigitalClock,
    Clock,
    FromWorkspace,
    FromFile,
    Step,
    UniformRandomNumber,
    RandomNumber,
    ToWorkspace,
    Stop,
    ToFile,
    From,
    Goto,
    DataStoreRead,
    DataStoreWrite,
    DataStoreMemory,
    GotoTagVisibility,
    Assertion,
    Terminator,
    Ground,
    Scope,
    Constant,
    Inport,
    Outport,
    Switch,
    RelationalOperator,
    Lookup2D,
    VariableTransportDelay,
    DotProduct,
    FunctionCallSplit,
    ManualSwitch,
    numInPorts,
    numOutPorts
  };
  SimulinkBlockType() = default;
  SimulinkBlockType(SimulinkBlockType::Type type_);
  ~SimulinkBlockType() = default;
  static Type toType(const char *typeName);
  static const char *toString(Type type);
  bool isA(const Si &typeObj);
  bool isA(const SimulinkBlockType::Type &type);
  std::string toString();

private:
  SimulinkBlockType::Type type_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKBLOCKTYPE_H