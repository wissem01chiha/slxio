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

#include "SimulinkParameterInformation.h"
#include "CoderInfo.h"

namespace slxio
{
    SimulinkParameterInformation::SimulinkParameterInformation()
        : m_min(0.0f), m_max(0.0f), m_description(""), m_unit(""), m_complexity("real")
    {
    }

    SimulinkParameterInformation::~SimulinkParameterInformation() = default;

    const std::string& SimulinkParameterInformation::GetUnit() const
    {
        return m_unit;
    }
    void SimulinkParameterInformation::SetUnit(const std::string& unit)
    {
        m_unit = unit;
    }

    const std::string& SimulinkParameterInformation::GetDescription() const
    {
        return m_description;
    }
    void SimulinkParameterInformation::SetDescription(const std::string& desc)
    {
        m_description = desc;
    }

    const std::string& SimulinkParameterInformation::GetComplexity() const
    {
        return m_complexity;
    }
    void SimulinkParameterInformation::SetComplexity(const std::string& comp)
    {
        m_complexity = comp;
    }

    double SimulinkParameterInformation::GetMin() const
    {
        return m_min;
    }
    void SimulinkParameterInformation::SetMin(double min)
    {
        m_min = min;
    }

    double SimulinkParameterInformation::GetMax() const
    {
        return m_max;
    }
    void SimulinkParameterInformation::SetMax(double max)
    {
        m_max = max;
    }

    const std::vector<uint16_t>& SimulinkParameterInformation::GetDimensions() const
    {
        return m_dimensions;
    }
    void SimulinkParameterInformation::SetDimensions(const std::vector<uint16_t>& dims)
    {
        m_dimensions = dims;
    }

    void SimulinkParameterInformation::SetCoderInfo(const std::shared_ptr<CoderInfo>& coder)
    {
        if (coder != nullptr)
        {
            m_coder = coder;
        }
    }

    std::shared_ptr<CoderInfo> SimulinkParameterInformation::GetCoderInfo() const
    {
        return m_coder;
    }

}; // namespace slxio
