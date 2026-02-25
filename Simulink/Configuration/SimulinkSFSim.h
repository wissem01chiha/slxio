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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef SIMULINKSFSIM_H
#define SIMULINKSFSIM_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief
 */
class SimulinkSFSim final
{
public:
  SimulinkSFSim();

private:
  const char** DisabledProps;
  const char* Description;
  const char** Components;
  const char* SimCustomSourceCode;
  const char* SimCustomHeaderCode;
  const char* SimCustomInitializer;
  const char* SimCustomTerminator;
  const char** SimReservedNameArray;
  const char* SimUserSources;
  const char* SimUserIncludeDirs;
  const char* SimUserLibraries;
  const char* SimUserDefines;
  const char* SimCustomCompilerFlags;
  const char* SimCustomLinkerFlags;
  const char* SFSimEcho;
  const char* SimCtrlC;
  const char* Simuint16egrity;
  const char* SimUseLocalCustomCode;
  const char* SimParseCustomCode;
  const char* SimAnalyzeCustomCode;
  const char* SimBuildMode;
  const char* SimGenImportedTypeDefs;
  const char* ModelFunctionsGlobalVisibility;
  uint16 CompileTimeRecursionLimit;
  const char* EnableRuntimeRecursion;
  const char* MATLABDynamicMemAlloc;
  uint16 MATLABDynamicMemAllocThreshold;
  const char** CustomCodeFunctionArrayLayout;
  const char* DefaultCustomCodeFunctionArrayLayout;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKSFSIM_H