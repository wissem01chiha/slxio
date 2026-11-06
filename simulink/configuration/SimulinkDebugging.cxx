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

#include "SimulinkDebugging.h"

namespace slxio
{

std::vector<Diagnostic> Validate(const SimulinkDebugging&)
{
    return {};
}

std::string ToString(const SimulinkDebugging& config)
{
    std::string result = "SimulinkDebugging:\n";
    result += "  DisabledProps: " + config.DisabledProps + "\n";
    result += "  DisabledPropsCount: " + std::to_string(config.DisabledPropsCount) + "\n";
    result += "  Description: " + config.Description + "\n";
    result += "  Components: " + config.Components + "\n";
    result += "  RTPrefix: " + config.RTPrefix + "\n";
    result += "  ConsistencyChecking: " + config.ConsistencyChecking + "\n";
    result += "  ArrayBoundsChecking: " + config.ArrayBoundsChecking + "\n";
    result += "  SignalInfNanChecking: " + config.SignalInfNanChecking + "\n";
    result += "  StringTruncationChecking: " + config.StringTruncationChecking + "\n";
    result += "  SignalRangeChecking: " + config.SignalRangeChecking + "\n";
    return result;
}

} // namespace slxio
