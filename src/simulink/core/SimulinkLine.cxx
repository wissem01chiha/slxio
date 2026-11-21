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

#include "SimulinkLine.h"
#include "SimulinkParameter.h"
#include "SimulinkOutPort.h"
#include "SimulinkInPort.h"

namespace slxio
{
    SimulinkLine::SimulinkLine() : m_index(""), m_destPort(nullptr), m_sourcePort(nullptr)
    {
    }

    SimulinkLine::SimulinkLine(std::shared_ptr<SimulinkInPort> pOut,
                               std::shared_ptr<SimulinkOutPort> pIn)
        : m_destPort(std::move(pIn)), m_sourcePort(std::move(pOut))
    {
    }

    std::string SimulinkLine::GetIndex() const
    {
        return std::string();
    }

    bool SimulinkLine::IsConnected()
    {
        return m_destPort != nullptr && m_sourcePort != nullptr;
    }

    std::shared_ptr<SimulinkInPort> SimulinkLine::GetSourcePort()
    {
        return std::shared_ptr<SimulinkInPort>();
    }

    std::shared_ptr<SimulinkOutPort> SimulinkLine::GetDestPort()
    {
        return std::shared_ptr<SimulinkOutPort>();
    }

    std::string SimulinkLine::ToString() const
    {
        std::ostringstream oss;
        oss << "SimulinkLine[ID=" << m_index;
        oss << ", Source=  " << m_sourcePort->ToString();
        oss << ", Destination=  " << m_destPort->ToString();
        oss << "]";
        return oss.str();
    }

}; // namespace slxio
