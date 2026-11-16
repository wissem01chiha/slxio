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

#include "SimulinkCodeGeneration.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{

    ErrorCode ParseCodeGenerationComponent(const SimulinkConfigSetComponent& source,
                                           SimulinkCodeGeneration& destination)
    {
        auto parsed = destination;
        if (const auto* folder = source.FindParam("CodeGenFolder"))
        {
            parsed.m_codeGenFolder = *folder;
        }
        else
        {
            return ErrorCode::ConfigSetParameterNotFound;
        }

        if (const auto* language = source.FindParam("TargetLang"))
        {
            parsed.m_codeGenLanguage = *language;
        }
        else
        {
            return ErrorCode::ConfigSetParameterNotFound;
        }

        if (const auto* enabled = source.FindParam("EnableCodeGeneration"))
        {
            if (*enabled == "on")
            {
                parsed.m_enableCodeGeneration = true;
            }
            else if (*enabled == "off")
            {
                parsed.m_enableCodeGeneration = false;
            }
            else
            {
                return ErrorCode::ConfigSetParameterInvalid;
            }
        }
        destination = std::move(parsed);
        return ErrorCode::Ok;
    }

}; // namespace slxio