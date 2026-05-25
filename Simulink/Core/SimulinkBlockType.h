// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCKTYPE_H
#define SIMULINKBLOCKTYPE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "SimulinkElementType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Enumeration of Simulink block types.
 */
class SLXIO_APIEXPORT SimulinkBlockType final : public SimulinkElementType
{
public:
  enum Type
  {
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
  SimulinkBlockType(Type type_);
  ~SimulinkBlockType() = default;
  static SimulinkBlockType::Type toType(const char* typeName);
  static const char* ToString(Type type);
  bool isA(SimulinkBlockType::Type type);
  std::string ToString() const;

private:
  SimulinkBlockType::Type type_;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKBLOCKTYPE_H
