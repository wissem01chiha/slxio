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

#include "ModelWorkspace.h"
#include "SimulinkParameter.h"
#include "SimulinkModel.h"
#include "CommonMacro.h"
#include "DataSourceType.h"

namespace slxio
{
    ModelWorkspace::SimulinkParameterPtr ModelWorkspace::GetVariable(const std::string& name) const
    {
        if (name.empty())
        {
            return nullptr;
        }
        auto it = m_variables.find(name);
        if (it != m_variables.end())
        {
            return it->second;
        }

        return nullptr;
    }

    ErrorCode ModelWorkspace::AssignVariable(const std::string& name,
                                             const ModelWorkspace::SimulinkParameterPtr& p)
    {
        if (!p)
        {
            return ErrorCode::InvalidArgument;
        }
        if (name.empty())
        {
            return ErrorCode::WorkspaceParameterNameEmpty;
        }

        m_variables[name] = p;
        return ErrorCode::Ok;
    }

    ErrorCode ModelWorkspace::ClearVariable(const std::string& name)
    {
        if (name.empty())
        {
            return ErrorCode::InvalidArgument;
        }
        auto it = m_variables.find(name);
        if (it != m_variables.end())
        {
            m_variables.erase(it);
        }

        return ErrorCode::Ok;
    }

    ErrorCode ModelWorkspace::ClearAll()
    {
        m_variables.clear();
        return ErrorCode::Ok;
    }

    std::shared_ptr<DataSourceType> ModelWorkspace::GetDataSourceType() const
    {
        return m_dataSource;
    }

    const std::string ModelWorkspace::GetFileName()
    {
        return m_fileName;
    }

    std::string ModelWorkspace::GetMatlabCode()
    {
        return m_matlabCode;
    }

    uint16_t ModelWorkspace::GetVariableCount() const
    {
        return STATIC_CAST(uint16_t, m_variables.size());
    }

}; // namespace slxio