#include "doctest.h"
#include "Logger.h"
#include "LoggerOptions.h"

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

} // namespace slxio