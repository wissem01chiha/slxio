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

#pragma once

#include "CommonPCH.h"
#include "DiagnosticLocation.h"

namespace slxio
{

    // Defines the different supported severity of a diagnostic.
    enum class DiagnosticSeverity
    {
        Note,
        Warning,
        Error,
        Remark,
    };

    // This class contains all of the information necessary to 
    // report a diagnostic to the DiagnosticEngine.
    class Diagnostic final
    {
    public:
        Diagnostic(Diagnostic &&) = default;
        Diagnostic &operator=(Diagnostic &&) = default;
        Diagnostic(const Diagnostic &) = delete;
        Diagnostic &operator=(const Diagnostic &) = delete;
        Diagnostic() = default;

        /// Returns the severity of this diagnostic.
        DiagnosticSeverity GetSeverity() const;

        /// Sets the severity of this diagnostic.
        void SetSeverity(DiagnosticSeverity s);

        /// Set the message for this diagnostic.
        void SetMessage(const std::string &msg);

        std::string GetDiagnosticMessage() const;

        /// Outputs this diagnostic to a stream.
        void Print(std::ostream &os) const;

        DiagnosticLocation GetLocation() const;

        ~Diagnostic() = default;

    private:
        DiagnosticSeverity severity{DiagnosticSeverity::Note};
        std::string message;
        std::unique_ptr<DiagnosticLocation> loc;
    };

}  // namespace slxio