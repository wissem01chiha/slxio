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

}  // namespace slxio