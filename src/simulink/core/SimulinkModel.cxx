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

#include "SimulinkModel.h"
#include "SimulinkParameter.h"
#include "SimulinkConfigSet.h"
#include "StateflowMachine.h"

namespace slxio
{

    SimulinkModel::SimulinkModel() : m_type(SimulinkModelType::Model)
    {
    }

    std::string SimulinkModel::ToString() const
    {
        return std::string();
    }

    std::shared_ptr<SimulinkModel> SimulinkModel::GetModel() const
    {
        return nullptr;
    }

    std::vector<std::shared_ptr<ISimulinkElement>> SimulinkModel::GetChildren() const
    {
        return m_children;
    }

    NODISCARD ErrorCode SimulinkModel::SetParent(const std::shared_ptr<SimulinkBlock> parent)
    {
        return ErrorCode::Ok;
    }

    SimulinkModelType SimulinkModel::GetModelType() const
    {
        return m_type;
    }

    std::string SimulinkModel::GetOriginId() const
    {
        return m_originId;
    }

    std::shared_ptr<SimulinkConfigSet> SimulinkModel::GetConfigSet(const std::string& name) const
    {
        for (const auto& config : m_configurations)
        {
            if (config != nullptr && config->GetName() == name)
            {
                return config;
            }
        }
        return nullptr;
    }

    NODISCARD ErrorCode SimulinkModel::AddConfigSet(
        const std::string& name, const std::shared_ptr<SimulinkConfigSet>& config)
    {
        if (name.empty())
        {
            return ErrorCode::InvalidParameterName;
        }
        if (config == nullptr)
        {
            return ErrorCode::InvalidConfigSet;
        }

        config->SetName(name);
        m_configurations.push_back(config);
        return ErrorCode::Ok;
    }

    std::shared_ptr<SimulinkParameter> SimulinkModel::GetConfigSetParameter(std::string config,
                                                                            std::string name)
    {
        if (config.empty() || name.empty())
        {
            return nullptr;
        }

        const std::string qualifiedKey = config + "::" + name;
        const auto it = m_parameters.find(qualifiedKey);
        if (it != m_parameters.end())
        {
            return it->second;
        }
        return nullptr;
    }

    NODISCARD ErrorCode SimulinkModel::SetConfigSetParameter(
        std::string config, std::string name, std::shared_ptr<SimulinkParameter> value)
    {
        if (config.empty())
        {
            return ErrorCode::InvalidParameterName;
        }
        if (name.empty() || value == nullptr)
        {
            return ErrorCode::ParameterNotFound;
        }

        const auto configSet = GetConfigSet(config);
        if (configSet == nullptr)
        {
            return ErrorCode::ParameterNotFound;
        }

        const std::string qualifiedKey = config + "::" + name;
        m_parameters[qualifiedKey] = std::move(value);
        return ErrorCode::Ok;
    }

    std::shared_ptr<SimulinkBlock> SimulinkModel::GetBlock(std::string blockId) const
    {
        return std::shared_ptr<SimulinkBlock>();
    }
}; // namespace slxio
