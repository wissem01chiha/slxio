// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base Class for Simulink Solver Configuration
 * Parameters
 */
struct SLXIO_APIEXPORT SimulinkSolver // NOSONAR
{
    std::string DisabledProps;
    std::string Description;
    std::string Components;
    std::string StartTime;
    std::string StopTime;
    std::string AbsTol;
    std::string AutoScaleAbsTol;
    std::string FixedStep;
    std::string InitialStep;
    std::string MaxOrder;
    std::string ZcThreshold;
    std::string ConsecutiveZCsStepRelTol;
    std::string MaxConsecutiveZCs;
    std::string ExtrapolationOrder;
    std::string NumberNewtonIterations;
    std::string MaxStep;
    std::string MinStep;
    std::string MaxConsecutiveMinStep;
    std::string RelTol;
    std::string EnableMultiTasking;
    std::string ConcurrentTasks;
    std::string Solver;
    std::string SolverName;
    std::string SolverJacobianMethodControl;
    std::string ShapePreserveControl;
    std::string ZeroCrossControl;
    std::string ZeroCrossAlgorithm;
    std::string AlgebraicLoopSolver;
    std::string SolverInfoToggleStatus;
    std::string IsAutoAppliedInSIP;
    std::string SolverResetMethod;
    std::string PositivePriorityOrder;
    std::string AutoInsertRateTranBlk;
    std::string SampleTimeConstrauint16;
    std::string InsertRTBMode;
    std::string SampleTimeProperty;
    std::string DecoupledContinuousuint16egration;
    std::string MinimalZcImpactuint16egration;
    std::string SolverOrder;
};

bool IsValid(const SimulinkSolver* solver);

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
