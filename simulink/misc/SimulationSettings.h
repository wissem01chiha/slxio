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

class SimulationSettings
{
public:
    SimulationSettings() = default;
    ~SimulationSettings();

    char* GetSolverName();
    char* GetSolverType();
    double GetFixedStepSize();

private:
    char SolverType[32];
    char SolverName[64];
    double FixedStepSize;
    double MaxStepSize;
    double MinStepSize;
    double RelativeTolerance;
    double AbsoluteTolerance;
    char StopTime[32];
    char StartTime[32];
    char LoadInitialState[8];
    char SaveFinalState[8];
    char SaveFormat[16];
    char Decimation[16];

    char SimulationMode[32];
    char SILPILModeSetting[32];
    char SILPILSystemUnderTest[64];
    char SILPILSimulationModeTopModel[32];
    char SILPILSimulationModeModelRef[32];
    char SimTabSimulationMode[32];
    char CodeVerificationMode[64];

    uint32_t PauseTimes;
    uint32_t NumberOfSteps;
    uint32_t SnapshotBufferSize;
    uint32_t SnapshotInterval;
    uint32_t NumberOfLastSnapshots;

    char EnablePacing[8];
    uint32_t PacingRate;

    char LinearizationMsg[32];
    char Profile[8];
    char ParamWorkspaceSource[64];
    char AccelSystemTargetFile[64];
    char AccelTemplateMakefile[64];
    char AccelMakeCommand[32];
    char TryForcingSFcnDF[8];
};

}; // namespace slxio
