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

#ifndef SIMULINKDEBUGGING_H
#define SIMULINKDEBUGGING_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief
 */
class APIEXPORT SimulinkDebugging final {
public:
  SimulinkDebugging();

private:
  const char **DisabledProps;
  uint16 DisabledPropsCount;
  const char *Description;
  const char *Components;
  const char *RTPrefix;
  const char *ConsistencyChecking;
  const char *ArrayBoundsChecking;
  const char *SignalInfNanChecking;
  const char *StringTruncationChecking;
  const char *SignalRangeChecking;
  const char *ReadBeforeWriteMsg;
  const char *WriteAfterWriteMsg;
  const char *WriteAfterReadMsg;
  const char *AlgebraicLoopMsg;
  const char *ArtificialAlgebraicLoopMsg;
  const char *SaveWithDisabledLinksMsg;
  const char *SaveWithParameterizedLinksMsg;
  const char *CheckSSInitialOutputMsg;
  const char *UnderspecifiedInitializationDetection;
  const char *MergeDetectMultiDrivingBlocksExec;
  const char *CheckExecutionContextPreStartOutputMsg;
  const char *CheckExecutionContextRuntimeOutputMsg;
  const char *SignalResolutionControl;
  const char *BlockPriorityViolationMsg;
  const char *MinStepSizeMsg;
  const char *TimeAdjustmentMsg;
  const char *MaxConsecutiveZCsMsg;
  const char *MaskedZcDiagnostic;
  const char *IgnoredZcDiagnostic;
  const char *SolverPrmCheckMsg;
  const char *InheritedTsInSrcMsg;
  const char *MultiTaskDSMMsg;
  const char *MultiTaskCondExecSysMsg;
  const char *MultiTaskRateTransMsg;
  const char *SingleTaskRateTransMsg;
  const char *TasksWithSamePriorityMsg;
  const char *ExportedTasksRateTransMsg;
  const char *SigSpecEnsureSampleTimeMsg;
  const char *CheckMatrixSingularityMsg;
  const char *uint16egerOverflowMsg;
  const char *uint1632ToFloatConvMsg;
  const char *ParameterDowncastMsg;
  const char *ParameterOverflowMsg;
  const char *ParameterUnderflowMsg;
  const char *ParameterPrecisionLossMsg;
  const char *ParameterTunabilityLossMsg;
  const char *FixptConstUnderflowMsg;
  const char *FixptConstOverflowMsg;
  const char *FixptConstPrecisionLossMsg;
  const char *UnderSpecifiedDataTypeMsg;
  const char *UnnecessaryDatatypeConvMsg;
  const char *VectorMatrixConversionMsg;
  const char *InvalidFcnCallConnMsg;
  const char *FcnCallInpInsideContextMsg;
  const char *SignalLabelMismatchMsg;
  const char *UnconnectedInputMsg;
  const char *UnconnectedOutputMsg;
  const char *UnconnectedLineMsg;
  const char *UseOnlyExistingSharedCode;
  const char *SFcnCompatibilityMsg;
  const char *FrameProcessingCompatibilityMsg;
  const char *UniqueDataStoreMsg;
  const char *BusObjectLabelMismatch;
  const char *RootOutportRequireBusObject;
  const char *AssertControl;
  const char *AllowSymbolicDim;
  const char *RowMajorDimensionSupport;
  const char *ModelReferenceIOMsg;
  const char *ModelReferenceMultiInstanceNormalModeStructChecksumCheck;
  const char *ModelReferenceVersionMismatchMessage;
  const char *ModelReferenceIOMismatchMessage;
  const char *UnknownTsInhSupMsg;
  const char *ModelReferenceDataLoggingMessage;
  const char *ModelReferenceSymbolNameMessage;
  const char *ModelReferenceExtraNoncontSigs;
  const char *StateNameClashWarn;
  const char *OperatingPouint16uint16erfaceChecksumMismatchMsg;
  const char *NonCurrentReleaseOperatingPouint16Msg;
  const char *ChecksumConsistencyForSSReuse;
  const char *PregeneratedLibrarySubsystemCodeDiagnostic;
  const char *MatchCodeGenerationContextForUpdateDiagram;
  const char *InitInArrayFormatMsg;
  const char *StrictBusMsg;
  const char *BusNameAdapt;
  const char *NonBusSignalsTreatedAsBus;
  const char *SymbolicDimMinMaxWarning;
  const char *LossOfSymbolicDimsSimulationWarning;
  const char *LossOfSymbolicDimsCodeGenerationWarning;
  const char *SymbolicDimsDataTypeCodeGenerationDiagnostic;
  const char *BlockIODiagnostic;
  const char *SFUnusedDataAndEventsDiag;
  const char *SFUnexpectedBacktrackingDiag;
  const char *SFInvalidInputDataAccessInChartInitDiag;
  const char *SFNoUnconditionalDefaultTransitionDiag;
  const char *SFTransitionOutsideNaturalParentDiag;
  const char *SFUnreachableExecutionPathDiag;
  const char *SFUndirectedBroadcastEventsDiag;
  const char *SFTransitionActionBeforeConditionDiag;
  const char *SFOutputUsedAsStateInMooreChartDiag;
  const char *SFTemporalDelaySmallerThanSampleTimeDiag;
  const char *SFSelfTransitionDiag;
  const char *SFExecutionAtInitializationDiag;
  const char *SFMachineParentedDataDiag;
  const char *uint16egerSaturationMsg;
  const char *AllowedUnitSystems;
  const char *UnitsInconsistencyMsg;
  const char *AllowAutomaticUnitConversions;
  const char *RCSCRenamedMsg;
  const char *RCSCObservableMsg;
  const char *ForceCombineOutputUpdateInSim;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKDEBUGGING_H