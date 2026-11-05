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

#include "SimulinkHardware.h"

namespace slxio
{

std::vector<Diagnostic> Validate(const SimulinkHardware& config)
{
    std::vector<Diagnostic> diagnostics;

    if (config.Description.empty())
    {
        Diagnostic diag;
        diag.SetSeverity(DiagnosticSeverity::Error);
        diag.SetMessage("SimulinkHardware Description is empty");
        diagnostics.push_back(std::move(diag));
        return diagnostics;
    }
    return diagnostics;
}

} // namespace slxio
