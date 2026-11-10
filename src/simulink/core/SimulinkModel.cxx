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
#include "SimulinkLine.h"
#include "SimulinkPort.h"

namespace slxio
{

    SimulinkModel::SimulinkModel()
        : m_type(SimulinkModelType::Model), m_workspace(nullptr), m_simSet(nullptr)
    {
    }

    SimulinkModel::SimulinkModel(SimulinkModelType Type) : m_type(Type)
    {
    }

    std::string SimulinkModel::ToString() const
    {
        return std::string();
    }

    HError SimulinkModel::AddConfig(const std::string& name,
                                    const std::shared_ptr<IConfigurationObject>& p)
    {
        return E_OK;
    }

    HError SimulinkModel::SetConfig(const std::string& name,
                                    const std::shared_ptr<IConfigurationObject>& p)
    {
        return E_OK;
    }

    std::shared_ptr<IConfigurationObject> SimulinkModel::GetConfig(const std::string& name)
    {
        return nullptr;
    }

    void SimulinkModel::AddParam(const std::string& name,
                                 const std::shared_ptr<IParameterObjectBase>& p)
    {
        if (p == nullptr)
        {
            return;
        }
    }

    void SimulinkModel::SetParam(const std::string& name,
                                 const std::shared_ptr<IParameterObjectBase>& p)
    {
        if (p == nullptr)
        {
            return;
        }
    }

    std::shared_ptr<IParameterObjectBase> SimulinkModel::GetParam(const std::string& name)
    {
        return nullptr;
    }

    std::shared_ptr<ISimulinkBlock> SimulinkModel::GetBlock(SId blockIdx) const
    {
        for (const auto& blk : m_blocks)
        {
            if (blk->GetId() == blockIdx)
            {
                return blk;
            }
        }
        return nullptr;
    }

    SimulinkModelType SimulinkModel::GetModelType() const
    {
        return m_type;
    }

    std::shared_ptr<SimulationSettings> SimulinkModel::GetSimulationSettings() const
    {
        return m_simSet;
    }

    std::shared_ptr<ModelWorkspace> SimulinkModel::GetModelWorkspace() const
    {
        return m_workspace;
    }

    SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
