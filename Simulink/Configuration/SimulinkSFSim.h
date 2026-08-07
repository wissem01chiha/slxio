// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSFSIM_H
#define SIMULINKSFSIM_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief
 */
class SimulinkSFSim final {
public:
  SimulinkSFSim();

private:
  const char **DisabledProps;
  const char *Description;
  const char **Components;
  const char *SimCustomSourceCode;
  const char *SimCustomHeaderCode;
  const char *SimCustomInitializer;
  const char *SimCustomTerminator;
  const char **SimReservedNameArray;
  const char *SimUserSources;
  const char *SimUserIncludeDirs;
  const char *SimUserLibraries;
  const char *SimUserDefines;
  const char *SimCustomCompilerFlags;
  const char *SimCustomLinkerFlags;
  const char *SFSimEcho;
  const char *SimCtrlC;
  const char *Simuint16egrity;
  const char *SimUseLocalCustomCode;
  const char *SimParseCustomCode;
  const char *SimAnalyzeCustomCode;
  const char *SimBuildMode;
  const char *SimGenImportedTypeDefs;
  const char *ModelFunctionsGlobalVisibility;
  UInt16 CompileTimeRecursionLimit;
  const char *EnableRuntimeRecursion;
  const char *MATLABDynamicMemAlloc;
  UInt16 MATLABDynamicMemAllocThreshold;
  const char **CustomCodeFunctionArrayLayout;
  const char *DefaultCustomCodeFunctionArrayLayout;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKSFSIM_H
