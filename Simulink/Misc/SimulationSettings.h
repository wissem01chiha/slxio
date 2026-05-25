// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULATIONSETTINGS_H
#define SIMULATIONSETTINGS_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulationSettings
 * @brief
 */
class SLXIO_APIEXPORT SimulationSettings
{
public:
  SimulationSettings() = default;
  ~SimulationSettings();

  char* GetSolverName();
  char* GetSolverType();
  Float32 GetFixedStepSize();

private:
  char SolverType[32];
  char SolverName[64];
  Float32 FixedStepSize;
  Float32 MaxStepSize;
  Float32 MinStepSize;
  Float32 RelativeTolerance;
  Float32 AbsoluteTolerance;
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

  UInt32 PauseTimes;
  UInt32 NumberOfSteps;
  UInt32 SnapshotBufferSize;
  UInt32 SnapshotInterval;
  UInt32 NumberOfLastSnapshots;

  char EnablePacing[8];
  UInt32 PacingRate;

  char LinearizationMsg[32];
  char Profile[8];
  char ParamWorkspaceSource[64];
  char AccelSystemTargetFile[64];
  char AccelTemplateMakefile[64];
  char AccelMakeCommand[32];
  char TryForcingSFcnDF[8];
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULATIONSETTINGS_H
