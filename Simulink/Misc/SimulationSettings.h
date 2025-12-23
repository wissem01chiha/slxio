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

#ifndef SIMULATIONSETTINGS_H
#define SIMULATIONSETTINGS_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/** @brief Simulation settings for a Simulink model. */
class APIEXPORT SimulationSettings {
public:
  SimulationSettings() = default;
  ~SimulationSettings();

  char *getSolverName();
  char *getSolverType();
  Float getFixedStepSize();

private:
  char SolverType[32];
  char SolverName[64];
  Float FixedStepSize;
  Float MaxStepSize;
  Float MinStepSize;
  Float RelativeTolerance;
  Float AbsoluteTolerance;
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

  uint32 PauseTimes;
  uint32 NumberOfSteps;
  uint32 SnapshotBufferSize;
  uint32 SnapshotInterval;
  uint32 NumberOfLastSnapshots;

  char EnablePacing[8];
  uint32 PacingRate;

  char LinearizationMsg[32];
  char Profile[8];
  char ParamWorkspaceSource[64];
  char AccelSystemTargetFile[64];
  char AccelTemplateMakefile[64];
  char AccelMakeCommand[32];
  char TryForcingSFcnDF[8];
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULATIONSETTINGS_H
