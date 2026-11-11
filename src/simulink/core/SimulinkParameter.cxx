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

#include "SimulinkParameter.h"
#include "SimulinkParameterInfo.h"

namespace slxio
{
    SimulinkParameter::SimulinkParameter()
        : m_information(std::make_unique<SimulinkParameterInfo>())
    {
    }

    SimulinkParameter::SimulinkParameter(const std::string& value)
        : m_value(value), m_information(std::make_unique<SimulinkParameterInfo>())
    {
    }

    SimulinkParameter::~SimulinkParameter() = default;

    std::string& SimulinkParameter::GetValue()
    {
        return m_value;
    }

    uint16_t SimulinkParameter::GetValueAsInt() const
    {
        return static_cast<uint16_t>(std::stoll(m_value));
    }

    float SimulinkParameter::GetValueAsFloat() const
    {
        return std::stof(m_value);
    }

    double SimulinkParameter::GetValueAsDouble() const
    {
        return std::stod(m_value);
    }

    SimulinkDataType SimulinkParameter::GetSimulinkDataType() const
    {
        return m_dataType;
    }

    void SimulinkParameter::SetSimulinkDataType(SimulinkDataType type)
    {
        m_dataType = type;
    }

    SimulinkParameterInfo& SimulinkParameter::GetSimulinkParameterInfo() const
    {
        return *m_information;
    }

    std::string SimulinkParameter::ToString() const
    {
        return std::string("");
    }

}; // namespace slxio
