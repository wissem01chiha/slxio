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

#include "SimulinkPortType.h"

namespace slxio
{
    std::string ToString(SimulinkPortType type)
    {
        switch (type)
        {
        case SimulinkPortType::Inport:
            return "Inport";
        case SimulinkPortType::Outport:
            return "Outport";
        case SimulinkPortType::Enable:
            return "Enable";
        case SimulinkPortType::Trigger:
            return "Trigger";
        case SimulinkPortType::State:
            return "State";
        case SimulinkPortType::LConn:
            return "LConn";
        case SimulinkPortType::RConn:
            return "RConn";
        case SimulinkPortType::IfAction:
            return "IfAction";
        default:
            return {};
        }
    }

}; // namespace slxio