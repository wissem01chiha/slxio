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

struct SimulinkSolver // NOSONAR
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

}; // namespace slxio