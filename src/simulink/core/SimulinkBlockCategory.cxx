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

#include "SimulinkBlockCategory.h"

namespace slxio
{

    std::string ToString(SimulinkBlockCategory category)
    {
        switch (category)
        {
        case SimulinkBlockCategory::AdditionalMathDiscrete:
            return "AdditionalMathDiscrete";
        case SimulinkBlockCategory::CommonlyUsedBlocks:
            return "CommonlyUsedBlocks";
        case SimulinkBlockCategory::Continuous:
            return "Continuous";
        case SimulinkBlockCategory::Discontinuities:
            return "Discontinuities";
        case SimulinkBlockCategory::Discrete:
            return "Discrete";
        case SimulinkBlockCategory::LogicAndBitOperations:
            return "LogicAndBitOperations";
        case SimulinkBlockCategory::LookupTables:
            return "LookupTables";
        case SimulinkBlockCategory::MathOperations:
            return "MathOperations";
        case SimulinkBlockCategory::MatrixOperations:
            return "MatrixOperations";
        case SimulinkBlockCategory::MessagesEvents:
            return "MessagesAndEvents";
        case SimulinkBlockCategory::ModelVerification:
            return "ModelVerification";
        case SimulinkBlockCategory::ModelWideUtilities:
            return "ModelWideUtilities";
        case SimulinkBlockCategory::PortsSubsystems:
            return "PortsSubsystems";
        case SimulinkBlockCategory::QuickInsert:
            return "QuickInsert";
        case SimulinkBlockCategory::SignalAttributes:
            return "SignalAttributes";
        case SimulinkBlockCategory::SignalRouting:
            return "SignalRouting";
        case SimulinkBlockCategory::Sinks:
            return "Sinks";
        case SimulinkBlockCategory::Sources:
            return "Sources";
        case SimulinkBlockCategory::String:
            return "String";
        case SimulinkBlockCategory::UserDefinedFunctions:
            return "UserDefinedFunctions";
        default:
            return {};
        }
    }

}; // namespace slxio