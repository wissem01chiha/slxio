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