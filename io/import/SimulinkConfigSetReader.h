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
#include "SimulinkReader.h"
#include "SimulinkReaderResult.h"
#include "SimulinkConfigSet.h"
#include "SimulinkCodeGenerationReader.h"
#include "SimulinkCoverageReader.h"
#include "SimulinkDebuggingReader.h"
#include "SimulinkHardwareReader.h"
#include "SimulinkModelReferenceReader.h"
#include "SimulinkOptimizationReader.h"
#include "SimulinkRTWReader.h"
#include "SimulinkSFSimReader.h"
#include "SimulinkSolverReader.h"

namespace slxio
{

template <typename T>
class SimulinkConfigSetReader : public SimulinkReader<T, SimulinkConfigSet>
{
public:

    SimulinkReaderResult Read(T serializedData, SimulinkConfigSet& object) const override
    {
        m_codeGenerationReader.Read(serializedData, object.GetCodeGeneration());
        m_coverageReader.Read(serializedData, object.GetCoverage());
        m_debuggingReader.Read(serializedData, object.GetDebugging());
        m_hardwareReader.Read(serializedData, object.GetHardware());
        m_modelReferenceReader.Read(serializedData, object.GetModelReference());
        m_optimizationReader.Read(serializedData, object.GetOptimization());
        m_rtwReader.Read(serializedData, object.GetRTW());
        m_sfSimReader.Read(serializedData, object.GetSFSim());
        m_solverReader.Read(serializedData, object.GetSolver());
        return SimulinkReaderResult::Success;
    }

private:
    SimulinkCodeGenerationReader<T> m_codeGenerationReader;
    SimulinkCoverageReader<T> m_coverageReader;
    SimulinkDebuggingReader<T> m_debuggingReader;
    SimulinkHardwareReader<T> m_hardwareReader;
    SimulinkModelReferenceReader<T> m_modelReferenceReader;
    SimulinkOptimizationReader<T> m_optimizationReader;
    SimulinkRTWReader<T> m_rtwReader;
    SimulinkSFSimReader<T> m_sfSimReader;
    SimulinkSolverReader<T> m_solverReader;
};

}; // namespace slxio