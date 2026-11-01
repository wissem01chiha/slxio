/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "CommonPCH.h"

namespace slxio
{

struct SimulinkSFSim // NOSONAR
{
    std::string DisabledProps;
    std::string Description;
    std::string Components;
    std::string SimCustomSourceCode;
    std::string SimCustomHeaderCode;
    std::string SimCustomInitializer;
    std::string SimCustomTerminator;
    std::string SimReservedNameArray;
    std::string SimUserSources;
    std::string SimUserIncludeDirs;
    std::string SimUserLibraries;
    std::string SimUserDefines;
    std::string SimCustomCompilerFlags;
    std::string SimCustomLinkerFlags;
    std::string SFSimEcho;
    std::string SimCtrlC;
    std::string Simuint16_tegrity;
    std::string SimUseLocalCustomCode;
    std::string SimParseCustomCode;
    std::string SimAnalyzeCustomCode;
    std::string SimBuildMode;
    std::string SimGenImportedTypeDefs;
    std::string ModelFunctionsGlobalVisibility;
    uint16_t CompileTimeRecursionLimit;
    std::string EnableRuntimeRecursion;
    std::string MATLABDynamicMemAlloc;
    uint16_t MATLABDynamicMemAllocThreshold;
    std::string CustomCodeFunctionArrayLayout;
    std::string DefaultCustomCodeFunctionArrayLayout;
};

}; // namespace slxio
