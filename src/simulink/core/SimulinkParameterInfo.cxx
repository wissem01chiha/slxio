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

#include "SimulinkParameterInfo.h"
#include "CoderInfo.h"

namespace slxio
{
    SimulinkParameterInfo::SimulinkParameterInfo()
        : m_min(0.0f), m_max(0.0f), m_description(""), m_unit(""), m_complexity("real")
    {
    }

    SimulinkParameterInfo::~SimulinkParameterInfo() = default;

    const std::string& SimulinkParameterInfo::GetUnit() const
    {
        return m_unit;
    }
    void SimulinkParameterInfo::SetUnit(const std::string& unit)
    {
        m_unit = unit;
    }

    const std::string& SimulinkParameterInfo::GetDescription() const
    {
        return m_description;
    }
    void SimulinkParameterInfo::SetDescription(const std::string& desc)
    {
        m_description = desc;
    }

    const std::string& SimulinkParameterInfo::GetComplexity() const
    {
        return m_complexity;
    }
    void SimulinkParameterInfo::SetComplexity(const std::string& comp)
    {
        m_complexity = comp;
    }

    double SimulinkParameterInfo::GetMin() const
    {
        return m_min;
    }
    void SimulinkParameterInfo::SetMin(double min)
    {
        m_min = min;
    }

    double SimulinkParameterInfo::GetMax() const
    {
        return m_max;
    }
    void SimulinkParameterInfo::SetMax(double max)
    {
        m_max = max;
    }

    const std::vector<uint16_t>& SimulinkParameterInfo::GetDimensions() const
    {
        return m_dimensions;
    }
    void SimulinkParameterInfo::SetDimensions(const std::vector<uint16_t>& dims)
    {
        m_dimensions = dims;
    }

    void SimulinkParameterInfo::SetCoderInfo(const std::shared_ptr<CoderInfo>& coder)
    {
        if (coder != nullptr)
        {
            m_coder = coder;
        }
    }

    std::shared_ptr<CoderInfo> SimulinkParameterInfo::GetCoderInfo() const
    {
        return m_coder;
    }

}; // namespace slxio
