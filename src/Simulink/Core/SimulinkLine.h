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
#include "SimulinkElementBase.h"

namespace slxio
{

    class SimulinkInPort;
    class SimulinkOutPort;

    class SimulinkLine final : public SimulinkElementBase
    {
    public:
        SimulinkLine();
        SimulinkLine(std::shared_ptr<SimulinkInPort> pOut, std::shared_ptr<SimulinkOutPort> pIn);

        std::string GetIndex() const;

        /**
         * Check if the line is connected to both source and
         * destination ports. A line is considered connected if both the source and
         * destination ports are non-null (set during creation).
         */
        bool IsConnected();

        std::shared_ptr<SimulinkInPort> GetSourcePort();
        std::shared_ptr<SimulinkOutPort> GetDestPort();

        std::string ToString() const;

        ~SimulinkLine() = default;

    private:
        std::string m_index;
        std::shared_ptr<SimulinkInPort> m_sourcePort;
        std::shared_ptr<SimulinkOutPort> m_destPort;
    };

}; // namespace slxio
