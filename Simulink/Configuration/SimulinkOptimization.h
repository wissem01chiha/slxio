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

#ifndef SIMULINKOPTIMISATION_H
#define SIMULINKOPTIMISATION_H

#include "ABINamespace.h"
#include "Type.h"
#include "APIExport.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief 
 */
class APIEXPORT SimulinkOptimization final {
public:
  SimulinkOptimization();

private:
  const char **DisabledProps;
  uint16 DisabledPropsCount;
  const char *Description;
  const char *Components;
  const char *BlockReduction;
  const char *booleanDataType;
  const char *ConditionallyExecuteInputs;
  const char *DefaultParameterBehavior;
  const char *UseDivisionForNetSlopeComputation;
  const char *GainParamInheritBuiltuint16ype;
  const char *UseFloatMulNetSlope;
  const char *DefaultUnderspecifiedDataType;
  const char *UseSpecifiedMinMax;
  const char *InlineInvariantSignals;
  const char *OptimizeBlockIOStorage;
  const char *BufferReuse;
  const char *EnhancedBackFolding;
  const char *CachingGlobalReferences;
  const char *GlobalBufferReuse;
  const char *StrengthReduction;
  const char *AdvancedOptControl;
  const char *ExpressionFolding;
  const char *booleansAsBitfields;
  const char *BitfieldContainerType;
  const char *EnableMemcpy;
  const char *MemcpyThreshold;
  const char *PassReuseOutputArgsAs;
  const char *PassReuseOutputArgsThreshold;
  const char *ExpressionDepthLimit;
  const char *LocalBlockOutputs;
  const char *RollThreshold;
  const char *StateBitsets;
  const char *DataBitsets;
  const char *ActiveStateOutputEnumStorageType;
  const char *ZeroExternalMemoryAtStartup;
  const char *Zerouint16ernalMemoryAtStartup;
  const char *InitFltsAndDblsToZero;
  const char *NoFixptDivByZeroProtection;
  const char *EfficientFloat2uint16Cast;
  const char *EfficientMapNaN2uint16Zero;
  const char *LifeSpan;
  const char *MaxStackSize;
  const char *BufferReusableBoundary;
  const char *SimCompilerOptimization;
  const char *AccelVerboseBuild;
  const char *OptimizeBlockOrder;
  const char *OptimizeDataStoreBuffers;
  const char *BusAssignmentInplaceUpdate;
  const char *DifferentSizesBufferReuse;
  const char *OptimizationLevel;
  const char *OptimizationPriority;
  const char *OptimizationCustomize;
  const char *UseRowMajorAlgorithm;
  const char *LabelGuidedReuse;
  const char *MultiThreadedLoops;
  const char *DenormalBehavior;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKOPTIMISATION_H