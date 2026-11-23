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

#include "Diagnostic.h"

namespace slxio
{

    namespace
    {
        const char* ToString(DiagnosticLevel level)
        {
            switch (level)
            {
            case DiagnosticLevel::Fatal:
                return "Fatal";
            case DiagnosticLevel::Critical:
                return "Critical";
            case DiagnosticLevel::Error:
                return "Error";
            case DiagnosticLevel::Warning:
                return "Warning";
            case DiagnosticLevel::Notice:
                return "Notice";
            case DiagnosticLevel::Information:
                return "Information";
            case DiagnosticLevel::Debug:
                return "Debug";
            case DiagnosticLevel::Trace:
                return "Trace";
            case DiagnosticLevel::Test:
                return "Test";
            }

            return "Unknown";
        }

        void
        PrintDiagnostic(const slxio::Diagnostic& diagnostic, std::ostream& os, std::size_t depth)
        {
            os << std::string(depth * 2, ' ') << '[' << ToString(diagnostic.level) << "] "
               << diagnostic.message << '\n';

            for (const auto& child : diagnostic.diagnostics)
            {
                PrintDiagnostic(child, os, depth + 1);
            }
        }
    } // namespace

    void Diagnostic::Print(std::ostream& os) const
    {
        PrintDiagnostic(*this, os, 0);
    }

} // namespace slxio