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
#include "DiagnosticEngine.h"
#include "DiagnosticEngineOptions.h"

namespace slxio
{

    TEST_CASE("stores reported diagnostics")
    {
        DiagnosticEngineOptions options;
        options.warningsAsErrors = true;
        options.maxErrors = 5;

        DiagnosticEngine engine(options);
        CHECK(engine.GetOptions().warningsAsErrors);
        CHECK(engine.GetOptions().maxErrors == 5);
        CHECK(engine.GetDiagnostics().empty());

        Diagnostic diagnostic;
        diagnostic.SetSeverity(DiagnosticSeverity::Error);
        diagnostic.SetMessage("invalid configuration");
        engine.Report(std::move(diagnostic));

        REQUIRE(engine.GetDiagnostics().size() == 1);
        CHECK(engine.GetDiagnostics().front().GetSeverity() == DiagnosticSeverity::Error);
        CHECK(engine.GetDiagnostics().front().GetDiagnosticMessage() == "invalid configuration");
    }

}  // namespace slxio