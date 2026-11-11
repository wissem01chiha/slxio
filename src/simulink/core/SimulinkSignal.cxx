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

#include "SimulinkSignal.h"

namespace slxio
{

    SimulinkSignal::SimulinkSignal()
        : m_description(""), m_complexity("auto"), m_dataType(SimulinkDataType::Auto),
          m_min(std::numeric_limits<double>::min()), m_max(std::numeric_limits<double>::max())
    {
    }

    void SimulinkSignal::SetDataType(SimulinkDataType dataType)
    {
        m_dataType = dataType;
    }

    SimulinkDataType SimulinkSignal::GetDataType()
    {
        return m_dataType;
    }

    void SimulinkSignal::SetDataType(const char* type)
    {
        m_dataType = ParseSimulinkDataType(std::string(type));
    }
    void SimulinkSignal::SetComplexityType(const char* complexityType)
    {
        SetComplexityType(std::string(complexityType));
    }

    void SimulinkSignal::SetComplexityType(const std::string& complexityType)
    {
        if (complexityType == "auto")
        {
            m_complexity = "auto";
        }
        else if (complexityType == "real")
        {
            m_complexity = "real";
        }
        else if (complexityType == "complex")
        {
            m_complexity = "complex";
        }
        else
        {
            throw std::invalid_argument("invalid argument: " + std::string(complexityType));
        }
    }

    std::string SimulinkSignal::GetComplexity() const
    {
        return m_complexity;
    }

    std::vector<uint16_t> SimulinkSignal::GetDimensions() const
    {
        return m_dimensions;
    }

    CoderInfo SimulinkSignal::GetCoderInfo() const
    {
        return m_coder;
    }

    std::string SimulinkSignal::GetInitialValue() const
    {
        return m_initialValue;
    }

    std::string SimulinkSignal::GetDescription() const
    {
        return m_description;
    }

    std::string SimulinkSignal::GetDimensionsMode() const
    {
        return m_dimensionsMode;
    }

    std::string SimulinkSignal::GetUnit() const
    {
        return m_unit;
    }

    std::vector<double> SimulinkSignal::GetSampleTime() const
    {
        return m_sampleTime;
    }

    void SimulinkSignal::SetRange(double min, double max)
    {
        m_min = min;
        m_max = max;
    }

}; // namespace slxio
