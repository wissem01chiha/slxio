#include "doctest.h"
#include "Diagnostic.h"

namespace slxio
{

    TEST_CASE("Stores diagnostic messages test")
    {
        Diagnostic diagnostic;
        CHECK(diagnostic.GetSeverity() == DiagnosticSeverity::Note);
        CHECK(diagnostic.GetDiagnosticMessage().empty());

        diagnostic.SetSeverity(DiagnosticSeverity::Warning);
        diagnostic.SetMessage("missing optional setting");

        CHECK(diagnostic.GetSeverity() == DiagnosticSeverity::Warning);
        CHECK(diagnostic.GetDiagnosticMessage() == "missing optional setting");
    }

    TEST_CASE("Print diagnostic messages test")
    {
        Diagnostic diagnostic;

        diagnostic.SetSeverity(DiagnosticSeverity::Warning);
        diagnostic.SetMessage("missing optional setting");

        std::ostringstream output;
        diagnostic.Print(output);
        CHECK(output.str() == "Warning missing optional setting\n");
    }
}; // namespace slxio