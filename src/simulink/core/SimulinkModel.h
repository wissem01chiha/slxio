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
#include "Error.h"

namespace slxio
{
    class ISimulinkBlock;
    class ModelWorkspace;
    class SimulinkObject;
    class SimulinkArray;
    class SimulinkPort;
    class SimulinkLine;
    class SimulinkBlock;
    class SimulinkParameter;
    class SimulationSettings;

    class SLXIO_APIEXPORT SimulinkModel final : public ISimulinkElement
    {
    public:
        SimulinkModel();

        SimulinkModel* New() const override;
        explicit SimulinkModel(SimulinkModelType Type);

        HError AcceptInsert(ISimulinkElement& parent) override;
        HError Insert(const std::shared_ptr<ISimulinkElement>& element) override;

        SId GetId() const override;
        SimulinkModelType GetModelType() const;
        std::shared_ptr<SimulationSettings> GetSimulationSettings() const;
        std::shared_ptr<ModelWorkspace> GetModelWorkspace() const;

        std::shared_ptr<ISimulinkBlock> GetBlock(SId blockIdx) const;
        std::string ToString() const override;

        HError AddConfig(const std::string& name,
                         const std::shared_ptr<IConfigurationObject>& p) override;
        HError SetConfig(const std::string& name,
                         const std::shared_ptr<IConfigurationObject>& p) override;
        std::shared_ptr<IConfigurationObject> GetConfig(const std::string& name) override;

        void AddParam(const std::string& name,
                      const std::shared_ptr<IParameterObjectBase>& p) override;
        void SetParam(const std::string& name,
                      const std::shared_ptr<IParameterObjectBase>& p) override;
        std::shared_ptr<IParameterObjectBase> GetParam(const std::string& name) override;

    private:
        SId m_id{SId(0)};
        SimulinkModelType m_type;
        std::shared_ptr<ModelWorkspace> m_workspace;
        std::shared_ptr<SimulationSettings> m_simSet;
        std::vector<std::shared_ptr<ISimulinkBlock>> m_blocks;
        std::vector<std::shared_ptr<SimulinkLine>> m_lines;
        std::vector<std::shared_ptr<SimulinkParameter>> m_parameters;
        std::vector<std::shared_ptr<IConfigurationObject>> m_configurations;
    };

    SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKMODEL_H
