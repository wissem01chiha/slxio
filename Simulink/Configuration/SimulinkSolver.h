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

#include "ABINamespace.h"
#include "Type.h"
#include "APIExport.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base Class for Simulink Solver Configuration
 * Parameters
 */
class SimulinkSolver {
public:
  SimulinkSolver() = default;

private:
  const char *DisabledProps;
  const char *Description;
  const char *Components;
  const char *StartTime;
  const char *StopTime;
  const char *AbsTol;
  const char *AutoScaleAbsTol;
  const char *FixedStep;
  const char *InitialStep;
  const char *MaxOrder;
  const char *ZcThreshold;
  const char *ConsecutiveZCsStepRelTol;
  const char *MaxConsecutiveZCs;
  const char *ExtrapolationOrder;
  const char *NumberNewtonIterations;
  const char *MaxStep;
  const char *MinStep;
  const char *MaxConsecutiveMinStep;
  const char *RelTol;
  const char *EnableMultiTasking;
  const char *ConcurrentTasks;
  const char *Solver;
  const char *SolverName;
  const char *SolverJacobianMethodControl;
  const char *ShapePreserveControl;
  const char *ZeroCrossControl;
  const char *ZeroCrossAlgorithm;
  const char *AlgebraicLoopSolver;
  const char *SolverInfoToggleStatus;
  const char *IsAutoAppliedInSIP;
  const char *SolverResetMethod;
  const char *PositivePriorityOrder;
  const char *AutoInsertRateTranBlk;
  const char *SampleTimeConstrauint16;
  const char *InsertRTBMode;
  const char *SampleTimeProperty;
  const char *DecoupledContinuousuint16egration;
  const char *MinimalZcImpactuint16egration;
  const char *SolverOrder;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END