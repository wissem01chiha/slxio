#include "doctest.h"
#include "Logger.h"
#include "LoggerOptions.h"
#include "Diagnostic.h"

namespace slxio
{

    TEST_CASE("Store Logger options test")
    {
        LoggerOptions options;
        options.m_enableLogging = false;
        options.m_logFilePath = "test.log";
        options.m_maxLogFileSize = 4096;

        Logger engine(options);

        CHECK_FALSE(engine.GetOptions().m_enableLogging);
        CHECK(engine.GetOptions().m_logFilePath == "test.log");
        CHECK(engine.GetOptions().m_maxLogFileSize == 4096);
        CHECK(engine.GetOptions().m_nthreads == 1);
        CHECK(engine.GetOptions().m_queueSize == 8192);
    }

    TEST_CASE("Log diagnostic message to stdio test")
    {
        Diagnostic diagnostic;

        diagnostic.SetSeverity(DiagnosticSeverity::Warning);
        diagnostic.SetMessage("missing optional setting");

        LoggerOptions options;
        options.m_enableLogging = true;
        options.m_logFilePath = "test.log";
        options.m_maxLogFileSize = 4096;

        Logger engine(options);
        // https://stackoverflow.com/questions/4191089/how-to-unit-test-function-writing-to-stdout-stdcout
        std::ostringstream oss;
        std::streambuf* p_cout_streambuf = std::cout.rdbuf();
        std::cout.rdbuf(oss.rdbuf());

        CHECK_NOTHROW(engine.Log(diagnostic));
        std::cout.rdbuf(p_cout_streambuf);
        CHECK(oss);
        CHECK(oss.str() == "missing optional setting");
    }

    TEST_CASE("Flush logs to file test")
    {
        Diagnostic diagnostic;

        diagnostic.SetSeverity(DiagnosticSeverity::Warning);
        diagnostic.SetMessage("missing optional setting");

        LoggerOptions options;
        options.m_enableLogging = true;
        options.m_logFilePath = "test.log";
        options.m_maxLogFileSize = 4096;

        Logger engine(options);
        engine.Log(diagnostic);
        CHECK_NOTHROW(engine.Flush());
    }

} // namespace slxio