#include "doctest.h"
#include "Diagnostic.h"

namespace slxio
{

    TEST_CASE("Print diagnostic messages test")
    {
        Diagnostic diagnostic;

        diagnostic.level = DiagnosticLevel::Warning;
        diagnostic.message = "missing optional setting";
        diagnostic.level = DiagnosticLevel::Warning;
        diagnostic.message = "missing optional setting";

        std::ostringstream output;
        diagnostic.Print(output);
        CHECK(output.str() == "[Warning] missing optional setting\n");
    }

    TEST_CASE("Print diagnostic messages recusilly test")
    {
        Diagnostic diagnostic;
        diagnostic.level = DiagnosticLevel::Warning;
        diagnostic.message = "missing optional setting";

        Diagnostic subdiagnostic;
        subdiagnostic.level = DiagnosticLevel::Error;
        subdiagnostic.message = "no file found";

        diagnostic.diagnostics.push_back(subdiagnostic);

        std::ostringstream os;
        diagnostic.Print(os);
        INFO(os.str());
        CHECK(os.str().size() ==
              std::string("[Warning] missing optional setting\n  [Error] no file found\n").size());
    }
}; // namespace slxio