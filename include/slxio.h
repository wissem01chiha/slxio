/*
 * Copyright 2025-2026 Wissem Chiha
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

    // Forward declarations

    class SimulinkObject;
    class SimulinkModel;
    class SimulinkLibrary;
    class SimulinkSubsystem;
    class SimulinkBlock;
    class SimulinkPort;
    class SimulinkLine;
    class SimulinkAnnotation;
    class StateflowObject;
    class StateflowMachine;
    class StateflowChart;
    class StateflowState;
    class StateflowTransition;
    class StateflowJunction;
    class StateflowEvent;
    class StateflowData;
    class StateflowFunction;
    class SimulinkModelInfo;

    // Handles and Paths

    using Handle = std::uint64_t;

    Handle GetSimulinkBlockHandle(const std::string& path);
    std::string GetFullName(Handle handle);
    SimulinkAnnotation* GetCurrentAnnotation();
    SimulinkAnnotation* GetCallbackAnnotation();
    std::string Gcs();
    std::string Gcb();
    SimulinkBlock* Gcbp();
    SimulinkModel* BdRoot();
    Handle Gcbh();

    // Model Metadata

    SimulinkModelInfo ModelInfo(const fs::path& path);
    std::string GetDescription(const fs::path& path);
    std::vector<std::string> GetMetadata(const fs::path& path);

    // Model Management

    SimulinkModel* NewSystem();
    SimulinkModel* LoadSystem(const fs::path& path);
    bool OpenSystem(const fs::path& path);
    bool SaveSystem(SimulinkModel& model);
    bool SaveSystemAs(SimulinkModel& model, const fs::path& path);
    bool CloseSystem(SimulinkModel& model);
    bool BdClose();
    bool IsLoaded(const fs::path& path);
    bool IsDirty(SimulinkModel& model);
    bool IsFileChangedOnDisk(SimulinkModel& model);

    // Libraries

    SimulinkLibrary* CreateLibrary();
    bool IsLibrary(const SimulinkModel& model);

    // Search

    std::vector<SimulinkObject*> FindSystem();
    std::vector<SimulinkBlock*> FindBlocks(SimulinkModel& model);
    std::vector<SimulinkBlock*> FindBlocksOfType(SimulinkModel& model,
                                                 const std::string& blockType);
    void HiliteSystem(SimulinkObject& object);

    // Blocks

    SimulinkBlock* AddBlock(SimulinkModel& model,
                            const std::string& sourceBlock,
                            const std::string& destinationPath);
    bool DeleteBlock(SimulinkBlock& block);
    std::size_t ReplaceBlock(SimulinkModel& model,
                             const std::string& sourceType,
                             const std::string& destinationType);

    void AddTerms(SimulinkModel& model);
    bool DeleteModelContents(SimulinkModel& model);

    // Subsystems

    SimulinkSubsystem* CreateSubsystem();
    SimulinkSubsystem* CreateSubsystem(const std::vector<SimulinkBlock*>& blocks);
    bool ExpandSubsystem(SimulinkSubsystem& subsystem);
    bool DeleteSubsystemContents(SimulinkSubsystem& subsystem);
    bool CopyContentsToBlockDiagram(SimulinkSubsystem& source, SimulinkModel& destination);
    bool IsSubsystem(const SimulinkModel& model);
    bool BdIsSubsystem(const SimulinkModel& model);

    // Ports

    std::vector<SimulinkPort*> FindPorts(SimulinkBlock& block);
    std::string GetPortType(SimulinkPort& port);
    int GetPortNumber(SimulinkPort& port);

    // Lines and Connections

    SimulinkLine*
    AddLine(SimulinkModel& model, const std::string& source, const std::string& destination);
    SimulinkLine* ConnectBlocks(SimulinkBlock& source, SimulinkBlock& destination);
    bool DeleteLine(SimulinkLine& line);
    bool RouteLine(SimulinkLine& line);

    // Parameters

    std::string GetParam(SimulinkObject& object, const std::string& parameter);
    bool SetParam(SimulinkObject& object, const std::string& parameter, const std::string& value);
    bool AddParam(SimulinkObject& object, const std::string& parameter, const std::string& value);
    bool DeleteParam(SimulinkObject& object, const std::string& parameter);

    // Annotations

    SimulinkAnnotation* AddAnnotation(SimulinkModel& model, const std::string& text);
    bool DeleteAnnotation(SimulinkAnnotation& annotation);

    // Layout

    bool ArrangeSystem(SimulinkModel& model);
    bool ResizeBlocksToFitContent(SimulinkModel& model);

    // Diagnostics

    std::vector<std::string> GetDisplayIssues(SimulinkModel& model);
    void SetDisplayIssues(SimulinkModel& model, bool enabled);

    // Stateflow

    std::vector<StateflowChart*> FindCharts(SimulinkModel& model);
    std::vector<StateflowState*> FindStates(SimulinkModel& model);
    std::vector<StateflowTransition*> FindTransitions(SimulinkModel& model);
    std::vector<StateflowData*> FindData(SimulinkModel& model);
    std::vector<StateflowEvent*> FindEvents(SimulinkModel& model);
    StateflowChart* AddChart(SimulinkModel& model);
    StateflowState* AddState(StateflowChart& chart);
    StateflowTransition* AddTransition(StateflowState& source, StateflowState& destination);
    StateflowJunction* AddJunction(StateflowChart& chart);
    StateflowData* AddData(StateflowChart& chart);
    StateflowEvent* AddEvent(StateflowChart& chart);
    StateflowFunction* AddFunction(StateflowChart& chart);
    bool DeleteStateflowObject(StateflowObject& object);
    StateflowObject* GetParent(StateflowObject& object);
    std::vector<StateflowObject*> GetChildren(StateflowObject& object);
    std::string GetPath(StateflowObject& object);
    Handle GetId(StateflowObject& object);

    // Model Indexing

    std::vector<fs::path> ModelFinder();
    void RegisterFolder(const fs::path& folder);
    void UnregisterFolder(const fs::path& folder);

} // namespace slxio