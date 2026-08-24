// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKOPTIMISATION_H
#define SIMULINKOPTIMISATION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ConfigurationPCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief optimization settings
 */
struct SLXIO_APIEXPORT SimulinkOptimization final // NOSONAR
{
    std::string DisabledProps;
    UInt16 DisabledPropsCount;
    std::string Description;
    std::string Components;
    std::string BlockReduction;
    std::string booleanDataType;
    std::string ConditionallyExecuteInputs;
    std::string DefaultParameterBehavior;
    std::string UseDivisionForNetSlopeComputation;
    std::string GainParamInheritBuiltuint16ype;
    std::string UseFloatMulNetSlope;
    std::string DefaultUnderspecifiedDataType;
    std::string UseSpecifiedMinMax;
    std::string InlineInvariantSignals;
    std::string OptimizeBlockIOStorage;
    std::string BufferReuse;
    std::string EnhancedBackFolding;
    std::string CachingGlobalReferences;
    std::string GlobalBufferReuse;
    std::string StrengthReduction;
    std::string AdvancedOptControl;
    std::string ExpressionFolding;
    std::string booleansAsBitfields;
    std::string BitfieldContainerType;
    std::string EnableMemcpy;
    std::string MemcpyThreshold;
    std::string PassReuseOutputArgsAs;
    std::string PassReuseOutputArgsThreshold;
    std::string ExpressionDepthLimit;
    std::string LocalBlockOutputs;
    std::string RollThreshold;
    std::string StateBitsets;
    std::string DataBitsets;
    std::string ActiveStateOutputEnumStorageType;
    std::string ZeroExternalMemoryAtStartup;
    std::string Zerouint16ernalMemoryAtStartup;
    std::string InitFltsAndDblsToZero;
    std::string NoFixptDivByZeroProtection;
    std::string EfficientFloat2uint16Cast;
    std::string EfficientMapNaN2uint16Zero;
    std::string LifeSpan;
    std::string MaxStackSize;
    std::string BufferReusableBoundary;
    std::string SimCompilerOptimization;
    std::string AccelVerboseBuild;
    std::string OptimizeBlockOrder;
    std::string OptimizeDataStoreBuffers;
    std::string BusAssignmentInplaceUpdate;
    std::string DifferentSizesBufferReuse;
    std::string OptimizationLevel;
    std::string OptimizationPriority;
    std::string OptimizationCustomize;
    std::string UseRowMajorAlgorithm;
    std::string LabelGuidedReuse;
    std::string MultiThreadedLoops;
    std::string DenormalBehavior;
};

bool IsValid(const SimulinkOptimization* optimization);

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKOPTIMISATION_H
