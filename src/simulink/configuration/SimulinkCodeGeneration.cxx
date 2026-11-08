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

    std::vector<Diagnostic> FromComponent(const SimulinkConfigSetComponent& source,
                                          SimulinkCodeGeneration& destination)
    {
        std::vector<Diagnostic> diagnostics;
        if (const auto* folder = source.FindParam("CodeGenFolder"))
        {
            destination.m_codeGenFolder = *folder;
        }
        else
        {
            DIAGNOSTIC(diagnostics, DiagnosticSeverity::Error, "Parameter CodeGenFolder not found");
        }

        if (const auto* language = source.FindParam("TargetLang"))
        {
            destination.m_codeGenLanguage = *language;
        }
        else
        {
            DIAGNOSTIC(diagnostics, DiagnosticSeverity::Error, "Parameter TargetLang not found");
        }

        if (const auto* enabled = source.FindParam("EnableCodeGeneration"))
        {
            if (*enabled == "on")
            {
                destination.m_enableCodeGeneration = true;
            }
            else if (*enabled == "off")
            {
                destination.m_enableCodeGeneration = false;
            }
            else
            {
                DIAGNOSTIC(diagnostics,
                           DiagnosticSeverity::Error,
                           "Invalid value for parameter EnableCodeGeneration");
            }
        }
        return diagnostics;
    }

}; // namespace slxio