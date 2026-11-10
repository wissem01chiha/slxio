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
#include "SimulinkModelType.h"
#include "SimulinkBlock.h"
#include "unordered_dense.h"
#include "SimulinkBlockType.h"

namespace slxio
{
    class SimulinkPort;
    class SimulinkLine;
    class SimulinkParameter;
    class SimulinkConfigSet;
    class StateflowMachine;

    class SimulinkModel final : public SimulinkBlock
    {
    public:
        SimulinkModel();
        explicit SimulinkModel(SimulinkModel& model);
        SimulinkModel(SimulinkModelType type, std::string originId);
        SimulinkModel(SimulinkModel& origModel);

        std::shared_ptr<SimulinkModel> GetModel() const override;
        std::vector<ISimulinkElement> GetChildren() const override;

        //  Set a default parameter for all model blocks.
        void SetBlockDefaultParameter(std::string name, SimulinkParameter& value);

        // Set & default parameter for all blocks of a specified type.
        void SetBlockTypeDefaultParameter(SimulinkBlockType type,
                                          std::string name,
                                          SimulinkParameter& value);

        // Set default parameter for lines.
        void SetLineDefaultParameter(std::string name, SimulinkParameter& value);

        // Get default annotation parameter.
        std::shared_ptr<SimulinkParameter> GetAnnotationDefaultParameter(std::string name) const;

        // Get names of annotation default parameters.
        std::set<std::string> GetAnnotationDefaultParameterNames() const;

        /**
         * Get a block specified by its full qualified name. The name must start
         * with the models name. This returns nullptr if the block was not
         * found.
         */
        std::shared_ptr<SimulinkBlock> GetBlock(std::string blockId) const;

        // Get block default parameter.
        std::shared_ptr<SimulinkParameter> GetBlockDefaultParameter(std::string name) const;

        /**
         * Get named default parameter for a given type. If a type-specific
         * parameter is defined, it is returned. Otherwise the block default (
         *  is returned.
         */
        std::shared_ptr<SimulinkParameter> GetTypeBlockDefaultParameter(SimulinkBlockType type,
                                                                        std::string name) const;

        // Get names of block default parameters.
        std::set<std::string> GetBlockDefaultParameterNames() const;

        // Get all default parameter names for a given type.
        std::set<std::string> GetBlockDefaultParameterNames(SimulinkBlockType type) const;

        // This throws an exception as models cannot have parents.
        void SetParent(SimulinkBlock parent) override;

        // Get a configuration default parameter.
        std::shared_ptr<SimulinkParameter> GetConfigSetDefaultParameter(std::string name) const;

        // Get a configuration by it's name
        std::shared_ptr<SimulinkConfigSet> GetConfigSet(std::string name) const;

        // Add a new configuration to the model
        void AddConfigSet(const std::string& name,
                          const std::shared_ptr<SimulinkConfigSet>& config);

        // Set the value of a given parameter in a given configuration
        void SetConfigSetParameter(std::string config,
                                   std::string name,
                                   std::shared_ptr<SimulinkParameter> value);

        // Get the value of a given parameter in a given configuration
        std::shared_ptr<SimulinkParameter> GetConfigSetParameter(std::string config,
                                                                 std::string name);

        // Get Stateflow machine of this model (may be nullptr).
        std::shared_ptr<StateflowMachine> GetStateflowMachine() const;

        SimulinkModelType GetModelType() const;

        std::string GetOriginId() const;

        std::string GetModelName() const;

        std::string ToString() const;

    private:
        std::string m_name;
        std::string m_originId;
        SimulinkModelType m_type;
        std::vector<std::shared_ptr<SimulinkBlock>> m_blocks;
        std::vector<std::shared_ptr<SimulinkLine>> m_lines;
        ankerl::unordered_dense::map<std::string, std::shared_ptr<SimulinkParameter>> m_parameters;
        std::vector<std::shared_ptr<SimulinkConfigSet>> m_configurations;
    };

}; // namespace slxio
