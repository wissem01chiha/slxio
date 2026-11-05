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

#include "DiagnosticEngine.h"
#include "Diagnostic.h"

namespace slxio
{
DiagnosticEngine::DiagnosticEngine(const DiagnosticEngineOptions& options)
{
    m_options = std::make_unique<DiagnosticEngineOptions>(options);
}

void DiagnosticEngine::Report(Diagnostic &&diag)
{
    m_diagnostics.push_back(std::move(diag));
}
const DiagnosticEngineOptions& DiagnosticEngine::GetOptions() const
{
    return *m_options;
}
const std::vector<Diagnostic>& DiagnosticEngine::GetDiagnostics() const
{
     return m_diagnostics; 
}
} // namespace slxio