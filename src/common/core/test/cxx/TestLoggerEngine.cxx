#include "Doctest.h"
#include "LoggerEngine.h"
#include "LoggerEngineOptions.h"

namespace slxio
{

    TEST_CASE("LoggerEngine stores its options")
    {
        LoggerEngineOptions options;
        options.enableLogging = false;
        options.logFilePath = "test.log";
        options.maxLogFileSize = 4096;

        LoggerEngine engine(options);

        CHECK_FALSE(engine.GetOptions().enableLogging);
        CHECK(engine.GetOptions().logFilePath == "test.log");
        CHECK(engine.GetOptions().maxLogFileSize == 4096);
        CHECK(engine.GetOptions().m_nthreads == 1);
        CHECK(engine.GetOptions().m_queueSize == 8192);
    }

}  // namespace slxio