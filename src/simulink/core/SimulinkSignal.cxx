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

    void SimulinkSignal::SetDataType(SimulinkDataType dt)
    {
        m_dataType = dt;
    }

    SimulinkDataType SimulinkSignal::GetDataType()
    {
        return m_dataType;
    }

    void SimulinkSignal::SetDataType(const char* type)
    {
        m_dataType = FromString(std::string(type));
    }
    void SimulinkSignal::SetComplexityType(const char* type)
    {
        if (strcmp(type, "auto") == 0)
        {
            m_complexity = "auto";
        }
        else if (strcmp(type, "real") == 0)
        {
            m_complexity = "real";
        }
        else if (strcmp(type, "complex") == 0)
        {
            m_complexity = "complex";
        }
        else
        {
            throw std::invalid_argument("invalid argument: " + std::string(type));
        }
    }

    const char* SimulinkSignal::GetComplexity()
    {
        return m_complexity;
    }

    std::vector<uint16_t> SimulinkSignal::GetDimensions()
    {
        return m_dimensions;
    }

    CoderInfo SimulinkSignal::GetCoderInfo()
    {
        return m_coder;
    }

    const char* SimulinkSignal::GetInitialValue()
    {
        return m_initialValue;
    }

    const char* SimulinkSignal::GetDescription()
    {
        return m_description;
    }

    const char* SimulinkSignal::GetDimensionsMode()
    {
        return m_dimensionsMode;
    }

    const char* SimulinkSignal::GetUnit()
    {
        return m_unit;
    }

    std::vector<double> SimulinkSignal::GetSampleTime()
    {
        return m_sampleTime;
    }

    void SimulinkSignal::SetRange(double min, double max)
    {
        m_min = min;
        m_max = max;
    }

}; // namespace slxio
