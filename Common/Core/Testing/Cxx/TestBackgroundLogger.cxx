#include "BackgroundLogger.h"
#include "Doctest.h"
#include "LogMessageFixture.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("BackgroundLogger basic init and level get/set")
{
    BackgroundLogger logger;

    SUBCASE("init sets defaults")
    {
        logger.Init();
        CHECK(logger.GetLogLevel() == LogLevelType::LOG_INFO);
    }

    SUBCASE("set and get log level")
    {
        logger.SetLogLevel(LogLevelType::LOG_DEBUG);
        CHECK(logger.GetLogLevel() == LogLevelType::LOG_DEBUG);

        logger.SetLogLevel(LogLevelType::LOG_ERROR);
        CHECK(logger.GetLogLevel() == LogLevelType::LOG_ERROR);
    }

    SUBCASE("Queue size can be set")
    {
        logger.SetQueueSize(4096);
        CHECK(logger.GetQueueSize() == 4096);
    }
}

TEST_CASE("BackgroundLogger logging call")
{

    BackgroundLogger logger;
    logger.Init();

    LogMessage msg("hello from background logger");
    CHECK_NOTHROW(logger.Log(msg));
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
