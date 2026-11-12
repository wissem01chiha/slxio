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

#include "SimulinkModel.h"
#include "SimulinkParameter.h"
#include "SimulinkConfigSet.h"

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
        return std::make_shared<SimulinkModel>(*this);
    }

    std::vector<std::shared_ptr<ISimulinkElement>> SimulinkModel::GetChildren() const
    {
        return m_children;
    }

    void SimulinkModel::SetParent(const std::shared_ptr<SimulinkBlock> parent)
    {
        return;
    }

    SimulinkModelType SimulinkModel::GetModelType() const
    {
        return m_type;
    }

    std::string SimulinkModel::GetOriginId() const
    {
        return m_originId;
    }

    std::shared_ptr<SimulinkConfigSet> SimulinkModel::GetConfigSet(std::string name) const
    {
        for (auto config : m_configurations)
        {
            if (config->GetName() == name)
            {
                return config;
            }
        }
        return nullptr;
    }

    error_code SimulinkModel::AddConfigSet(const std::string& name,
                                           const std::shared_ptr<SimulinkConfigSet>& config)
    {
        if (name.empty())
        {
            return error_code::ConfigSetNameEmpty;
        }
        if (config == nullptr)
        {
            return error_code::ConfigSetInvalid;
        }

        m_configurations.push_back(config);
        return error_code::Ok;
    }

    std::shared_ptr<SimulinkParameter> SimulinkModel::GetConfigSetParameter(std::string config,
                                                                            std::string name)
    {
        if (config.empty())
        {
            return nullptr;
        }
        auto it = m_parameters.find(name);
        if (it != m_parameters.end())
        {
            std::shared_ptr<SimulinkParameter> param = it->second;
            return param;
        }
        return nullptr;
    }

    error_code SimulinkModel::SetConfigSetParameter(std::string config,
                                                    std::string name,
                                                    std::shared_ptr<SimulinkParameter> value)
    {
        if (config.empty())
        {
            return error_code::ConfigSetNameEmpty;
        }
        auto it = m_parameters.find(name);
        if (it == m_parameters.end())
        {
            return error_code::ConfigSetParameterNotFound;
        }
        it->second = value;
        return error_code::Ok;
    }
}; // namespace slxio
