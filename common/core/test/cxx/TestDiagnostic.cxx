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

#include "Doctest.h"
#include "Diagnostic.h"

namespace slxio
{

TEST_CASE("stores and prints severity and message")
{
    Diagnostic diagnostic;
    CHECK(diagnostic.GetSeverity() == DiagnosticSeverity::Note);
    CHECK(diagnostic.GetDiagnosticMessage().empty());

    diagnostic.SetSeverity(DiagnosticSeverity::Warning);
    diagnostic.SetMessage("missing optional setting");

    CHECK(diagnostic.GetSeverity() == DiagnosticSeverity::Warning);
    CHECK(diagnostic.GetDiagnosticMessage() == "missing optional setting");

    std::ostringstream output;
    diagnostic.Print(output);
    CHECK(output.str() == "Warning missing optional setting\n");

    const DiagnosticLocation location = diagnostic.GetLocation();
    CHECK(location.getFile().empty());
    CHECK(location.getLine() == 0);
    CHECK(location.getColumn() == 0);
}

} // namespace slxio