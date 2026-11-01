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

struct SimulinkOptimization final // NOSONAR
{
    std::string DisabledProps;
    uint16_t DisabledPropsCount;
    std::string Description;
    std::string Components;
    std::string BlockReduction;
    std::string booleanDataType;
    std::string ConditionallyExecuteInputs;
    std::string DefaultParameterBehavior;
    std::string UseDivisionForNetSlopeComputation;
    std::string GainParamInheritBuiltuint16_type;
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
    std::string Zerouint16_ternalMemoryAtStartup;
    std::string InitFltsAndDblsToZero;
    std::string NoFixptDivByZeroProtection;
    std::string EfficientFloat2uint16_tCast;
    std::string EfficientMapNaN2uint16_tZero;
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

}; // namespace slxio
