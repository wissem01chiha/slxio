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

namespace slxio
{

    enum class DiagnosticSeverity
    {
        Note,
        Warning,
        Error,
        Remark,
    };

    class Diagnostic final
    {
    public:
        Diagnostic(Diagnostic&&) = default;
        Diagnostic& operator=(Diagnostic&&) = default;
        Diagnostic(const Diagnostic&) = delete;
        Diagnostic& operator=(const Diagnostic&) = delete;
        Diagnostic() = default;

        DiagnosticSeverity GetSeverity() const;
        void SetSeverity(DiagnosticSeverity s);
        void SetMessage(const std::string& msg);
        std::string GetDiagnosticMessage() const;
        void SetErrorCode(std::error_code error);
        std::optional<std::error_code> GetErrorCode() const;

        void Print(std::ostream& os) const;

        ~Diagnostic() = default;

    private:
        DiagnosticSeverity m_severity{DiagnosticSeverity::Note};
        std::string m_message;
        std::optional<std::error_code> m_errorCode;
    };

#define DIAGNOSTIC(vector, severity, message)                                                      \
    do                                                                                             \
    {                                                                                              \
        Diagnostic diagnostic;                                                                     \
        diagnostic.SetMessage(message);                                                            \
        diagnostic.SetSeverity(severity);                                                          \
        vector.push_back(std::move(diagnostic));                                                   \
    } while (false)

}; // namespace slxio