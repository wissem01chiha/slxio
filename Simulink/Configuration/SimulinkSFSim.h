// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSFSIM_H
#define SIMULINKSFSIM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ConfigurationPCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

struct SLXIO_APIEXPORT SimulinkSFSim // NOSONAR
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
    std::string Simuint16egrity;
    std::string SimUseLocalCustomCode;
    std::string SimParseCustomCode;
    std::string SimAnalyzeCustomCode;
    std::string SimBuildMode;
    std::string SimGenImportedTypeDefs;
    std::string ModelFunctionsGlobalVisibility;
    UInt16 CompileTimeRecursionLimit;
    std::string EnableRuntimeRecursion;
    std::string MATLABDynamicMemAlloc;
    UInt16 MATLABDynamicMemAllocThreshold;
    std::string CustomCodeFunctionArrayLayout;
    std::string DefaultCustomCodeFunctionArrayLayout;

    bool IsValid() const;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKSFSIM_H
