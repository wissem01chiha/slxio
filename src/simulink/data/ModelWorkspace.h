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
#include "Error.h"

namespace slxio
{
    enum class DataSourceType;
    class SimulinkParameter;
    class SimulinkModel;

    class ModelWorkspace final
    {
    public:
        using SimulinkParameterPtr = std::shared_ptr<SimulinkParameter>;

        ModelWorkspace() = default;

        ErrorCode AssignVariable(const std::string& name, const SimulinkParameterPtr& p);
        ErrorCode ClearVariable(const std::string& name);
        ErrorCode ClearAll();

        SimulinkParameterPtr GetVariable(const std::string& name) const;
        std::shared_ptr<DataSourceType> GetDataSourceType() const;
        const std::string GetFileName();
        std::string GetMatlabCode();
        uint16_t GetVariableCount() const;

        ~ModelWorkspace() = default;

    private:
        std::string m_fileName;
        std::string m_matlabCode;
        std::shared_ptr<DataSourceType> m_dataSource = nullptr;
        ankerl::unordered_dense::map<std::string, SimulinkParameterPtr> m_variables;
    };

}; // namespace slxio
