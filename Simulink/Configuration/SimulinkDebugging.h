// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKDEBUGGING_H
#define SIMULINKDEBUGGING_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ConfigurationPCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @struct SimulinkDebugging
 * @brief SimulinkDebugging represents the debugging settings in a Simulink
 */
struct SLXIO_APIEXPORT SimulinkDebugging final // NOSONAR
{
    std::string* DisabledProps;
    UInt16 DisabledPropsCount;
    std::string Description;
    std::string Components;
    std::string RTPrefix;
    std::string ConsistencyChecking;
    std::string ArrayBoundsChecking;
    std::string SignalInfNanChecking;
    std::string StringTruncationChecking;
    std::string SignalRangeChecking;
    std::string ReadBeforeWriteMsg;
    std::string WriteAfterWriteMsg;
    std::string WriteAfterReadMsg;
    std::string AlgebraicLoopMsg;
    std::string ArtificialAlgebraicLoopMsg;
    std::string SaveWithDisabledLinksMsg;
    std::string SaveWithParameterizedLinksMsg;
    std::string CheckSSInitialOutputMsg;
    std::string UnderspecifiedInitializationDetection;
    std::string MergeDetectMultiDrivingBlocksExec;
    std::string CheckExecutionContextPreStartOutputMsg;
    std::string CheckExecutionContextRuntimeOutputMsg;
    std::string SignalResolutionControl;
    std::string BlockPriorityViolationMsg;
    std::string MinStepSizeMsg;
    std::string TimeAdjustmentMsg;
    std::string MaxConsecutiveZCsMsg;
    std::string MaskedZcDiagnostic;
    std::string IgnoredZcDiagnostic;
    std::string SolverPrmCheckMsg;
    std::string InheritedTsInSrcMsg;
    std::string MultiTaskDSMMsg;
    std::string MultiTaskCondExecSysMsg;
    std::string MultiTaskRateTransMsg;
    std::string SingleTaskRateTransMsg;
    std::string TasksWithSamePriorityMsg;
    std::string ExportedTasksRateTransMsg;
    std::string SigSpecEnsureSampleTimeMsg;
    std::string CheckMatrixSingularityMsg;
    std::string uint16egerOverflowMsg;
    std::string uint1632ToFloatConvMsg;
    std::string ParameterDowncastMsg;
    std::string ParameterOverflowMsg;
    std::string ParameterUnderflowMsg;
    std::string ParameterPrecisionLossMsg;
    std::string ParameterTunabilityLossMsg;
    std::string FixptConstUnderflowMsg;
    std::string FixptConstOverflowMsg;
    std::string FixptConstPrecisionLossMsg;
    std::string UnderSpecifiedDataTypeMsg;
    std::string UnnecessaryDatatypeConvMsg;
    std::string VectorMatrixConversionMsg;
    std::string InvalidFcnCallConnMsg;
    std::string FcnCallInpInsideContextMsg;
    std::string SignalLabelMismatchMsg;
    std::string UnconnectedInputMsg;
    std::string UnconnectedOutputMsg;
    std::string UnconnectedLineMsg;
    std::string UseOnlyExistingSharedCode;
    std::string SFcnCompatibilityMsg;
    std::string FrameProcessingCompatibilityMsg;
    std::string UniqueDataStoreMsg;
    std::string BusObjectLabelMismatch;
    std::string RootOutportRequireBusObject;
    std::string AssertControl;
    std::string AllowSymbolicDim;
    std::string RowMajorDimensionSupport;
    std::string ModelReferenceIOMsg;
    std::string ModelReferenceMultiInstanceNormalModeStructChecksumCheck;
    std::string ModelReferenceVersionMismatchMessage;
    std::string ModelReferenceIOMismatchMessage;
    std::string UnknownTsInhSupMsg;
    std::string ModelReferenceDataLoggingMessage;
    std::string ModelReferenceSymbolNameMessage;
    std::string ModelReferenceExtraNoncontSigs;
    std::string StateNameClashWarn;
    std::string OperatingPouint16uint16erfaceChecksumMismatchMsg;
    std::string NonCurrentReleaseOperatingPouint16Msg;
    std::string ChecksumConsistencyForSSReuse;
    std::string PregeneratedLibrarySubsystemCodeDiagnostic;
    std::string MatchCodeGenerationContextForUpdateDiagram;
    std::string InitInArrayFormatMsg;
    std::string StrictBusMsg;
    std::string BusNameAdapt;
    std::string NonBusSignalsTreatedAsBus;
    std::string SymbolicDimMinMaxWarning;
    std::string LossOfSymbolicDimsSimulationWarning;
    std::string LossOfSymbolicDimsCodeGenerationWarning;
    std::string SymbolicDimsDataTypeCodeGenerationDiagnostic;
    std::string BlockIODiagnostic;
    std::string SFUnusedDataAndEventsDiag;
    std::string SFUnexpectedBacktrackingDiag;
    std::string SFInvalidInputDataAccessInChartInitDiag;
    std::string SFNoUnconditionalDefaultTransitionDiag;
    std::string SFTransitionOutsideNaturalParentDiag;
    std::string SFUnreachableExecutionPathDiag;
    std::string SFUndirectedBroadcastEventsDiag;
    std::string SFTransitionActionBeforeConditionDiag;
    std::string SFOutputUsedAsStateInMooreChartDiag;
    std::string SFTemporalDelaySmallerThanSampleTimeDiag;
    std::string SFSelfTransitionDiag;
    std::string SFExecutionAtInitializationDiag;
    std::string SFMachineParentedDataDiag;
    std::string uint16egerSaturationMsg;
    std::string AllowedUnitSystems;
    std::string UnitsInconsistencyMsg;
    std::string AllowAutomaticUnitConversions;
    std::string RCSCRenamedMsg;
    std::string RCSCObservableMsg;
    std::string ForceCombineOutputUpdateInSim;
};

bool IsValid(const SimulinkDebugging* debugging);

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKDEBUGGING_H
