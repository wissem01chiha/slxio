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

#include "SimulinkSFSim.h"

namespace slxio
{

std::vector<Diagnostic> Validate(const SimulinkSFSim&)
{
    return {};
}

std::string ToString(const SimulinkSFSim& config)
{
    std::ostringstream oss;
    oss << "SimulinkSFSim {" << std::endl;
    oss << "  DisabledProps: " << config.DisabledProps << std::endl;
    oss << "  Description: " << config.Description << std::endl;
    oss << "  Components: " << config.Components << std::endl;
    oss << "  SimCustomSourceCode: " << config.SimCustomSourceCode << std::endl;
    oss << "  SimCustomHeaderCode: " << config.SimCustomHeaderCode << std::endl;
    oss << "  SimCustomInitializer: " << config.SimCustomInitializer << std::endl;
    oss << "  SimCustomTerminator: " << config.SimCustomTerminator << std::endl;
    oss << "  SimReservedNameArray: " << config.SimReservedNameArray << std::endl;
    oss << "  SimUserSources: " << config.SimUserSources << std::endl;
    oss << "  SimUserIncludeDirs: " << config.SimUserIncludeDirs << std::endl;
    oss << "  SimUserLibraries: " << config.SimUserLibraries << std::endl;
    oss << "  SimUserDefines: " << config.SimUserDefines << std::endl;
    oss << "}";

    return oss.str();
}

}; // namespace slxio
