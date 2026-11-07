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

#include "Diagnostic.h"
#include "DiagnosticLocation.h"

namespace slxio
{
    DiagnosticSeverity
    Diagnostic::GetSeverity() const
    {
        return severity;
    }
    void
    Diagnostic::SetSeverity(DiagnosticSeverity s)
    {
        severity = s;
    }
    void
    Diagnostic::SetMessage(const std::string &msg)
    {
        message = msg;
    }
    std::string
    Diagnostic::GetDiagnosticMessage() const
    {
        return message;
    }
    void
    Diagnostic::Print(std::ostream &os) const
    {
        switch ( severity ) {
            case DiagnosticSeverity::Note:
                os << "Note";
                break;
            case DiagnosticSeverity::Warning:
                os << "Warning";
                break;
            case DiagnosticSeverity::Error:
                os << "Error";
                break;
            case DiagnosticSeverity::Remark:
                os << "Remark";
                break;
        }
        os << " " << GetDiagnosticMessage() << "\n";
    }
    DiagnosticLocation
    Diagnostic::GetLocation() const
    {
        return loc ? *loc : DiagnosticLocation();
    }
}  // namespace slxio