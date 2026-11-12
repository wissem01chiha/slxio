#include "doctest.h"
#include "Diagnostic.h"
#include "DiagnosticEngine.h"
#include "DiagnosticEngineOptions.h"
#include "Error.h"

namespace slxio
{

    TEST_CASE("Store diagnostics test")
    {
        DiagnosticEngineOptions options;
        options.m_warningsAsErrors = true;
        options.m_maxErrors = 5;

        DiagnosticEngine engine(options);
        CHECK(engine.GetOptions().m_warningsAsErrors);
        CHECK(engine.GetOptions().m_maxErrors == 5);
        CHECK(engine.GetDiagnostics().empty());

        Diagnostic diagnostic;
        diagnostic.SetSeverity(DiagnosticSeverity::Error);
        diagnostic.SetMessage("invalid configuration");
        engine.Report(std::move(diagnostic));

        REQUIRE(engine.GetDiagnostics().size() == 1);
        CHECK(engine.GetDiagnostics().front().GetSeverity() == DiagnosticSeverity::Error);
        CHECK(engine.GetDiagnostics().front().GetDiagnosticMessage() == "invalid configuration");
    }

    TEST_CASE("Report error codes test")
    {
        DiagnosticEngine engine;
        const auto error = make_error_code(error_code::InvalidArgument);

        CHECK(engine.ReportError(error, "Failed to read model"));
        REQUIRE(engine.GetDiagnostics().size() == 1);

        const auto& diagnostic = engine.GetDiagnostics().front();
        CHECK(diagnostic.GetSeverity() == DiagnosticSeverity::Error);
        CHECK(diagnostic.GetDiagnosticMessage() == "Failed to read model: invalid argument");
        REQUIRE(diagnostic.GetErrorCode().has_value());
        CHECK(*diagnostic.GetErrorCode() == error);
    }

    TEST_CASE("Report success test")
    {
        DiagnosticEngine engine;

        CHECK_FALSE(engine.ReportError(make_error_code(error_code::Ok)));
        CHECK(engine.GetDiagnostics().empty());
    }

}; // namespace slxio