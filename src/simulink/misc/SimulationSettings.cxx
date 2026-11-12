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

#include "SimulationSettings.h"

namespace slxio
{

    std::string ToString(const SimulationSettings& settings)
    {
        std::ostringstream oss;

        oss << "SimulationSettings {\n"
            << "  SolverType: \"" << settings.SolverType << "\"\n"
            << "  SolverName: \"" << settings.SolverName << "\"\n"
            << "  FixedStepSize: " << settings.FixedStepSize << "\n"
            << "  MaxStepSize: " << settings.MaxStepSize << "\n"
            << "  MinStepSize: " << settings.MinStepSize << "\n"
            << "  RelativeTolerance: " << settings.RelativeTolerance << "\n"
            << "  AbsoluteTolerance: " << settings.AbsoluteTolerance << "\n"
            << "  StopTime: \"" << settings.StopTime << "\"\n"
            << "  StartTime: \"" << settings.StartTime << "\"\n"
            << "  LoadInitialState: \"" << settings.LoadInitialState << "\"\n"
            << "  SaveFinalState: \"" << settings.SaveFinalState << "\"\n"
            << "  SaveFormat: \"" << settings.SaveFormat << "\"\n"
            << "  Decimation: \"" << settings.Decimation << "\"\n"
            << "  SimulationMode: \"" << settings.SimulationMode << "\"\n"
            << "  SILPILModeSetting: \"" << settings.SILPILModeSetting << "\"\n"
            << "  SILPILSystemUnderTest: \"" << settings.SILPILSystemUnderTest << "\"\n"
            << "  SILPILSimulationModeTopModel: \"" << settings.SILPILSimulationModeTopModel
            << "\"\n"
            << "  SILPILSimulationModeModelRef: \"" << settings.SILPILSimulationModeModelRef
            << "\"\n"
            << "  SimTabSimulationMode: \"" << settings.SimTabSimulationMode << "\"\n"
            << "  CodeVerificationMode: \"" << settings.CodeVerificationMode << "\"\n"
            << "  PauseTimes: " << settings.PauseTimes << "\n"
            << "  NumberOfSteps: " << settings.NumberOfSteps << "\n"
            << "  SnapshotBufferSize: " << settings.SnapshotBufferSize << "\n"
            << "  SnapshotInterval: " << settings.SnapshotInterval << "\n"
            << "  NumberOfLastSnapshots: " << settings.NumberOfLastSnapshots << "\n"
            << "  EnablePacing: \"" << settings.EnablePacing << "\"\n"
            << "  PacingRate: " << settings.PacingRate << "\n"
            << "  LinearizationMsg: \"" << settings.LinearizationMsg << "\"\n"
            << "  Profile: \"" << settings.Profile << "\"\n"
            << "  ParamWorkspaceSource: \"" << settings.ParamWorkspaceSource << "\"\n"
            << "  AccelSystemTargetFile: \"" << settings.AccelSystemTargetFile << "\"\n"
            << "  AccelTemplateMakefile: \"" << settings.AccelTemplateMakefile << "\"\n"
            << "  AccelMakeCommand: \"" << settings.AccelMakeCommand << "\"\n"
            << "  TryForcingSFcnDF: \"" << settings.TryForcingSFcnDF << "\"\n"
            << "}";

        return oss.str();
    }

}; // namespace slxio
