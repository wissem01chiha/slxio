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

#include "SimulinkCoverage.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{

    ErrorCode ParseCoverageComponent(const SimulinkConfigSetComponent& source,
                                     SimulinkCoverage& destination)
    {
        auto parsed = destination;
        if (const auto* covEnable = source.FindParam("CovEnable"))
        {
            if (*covEnable == "on")
            {
                parsed.CovEnable = true;
            }
            else if (*covEnable == "off")
            {
                parsed.CovEnable = false;
            }
            else
            {
                return ErrorCode::InvalidParameter;
            }
        }
        else
        {
            return ErrorCode::ParameterNotFound;
        }
        destination = std::move(parsed);
        return ErrorCode::Ok;
    }

}; // namespace slxio
