#include "Doctest.h"
#include "BufferedLogger.h"
#include "LogMessageFixture.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("BufferedLogger basic operations") {
    BufferedLogger logger;

    SUBCASE("Init clears buffer and resets level") {
        logger.SetLogLevel(LogLevelType::LOG_DEBUG);
        logger.Log(LogMessage("test"));
        CHECK(logger.GetBuffer().size() == 1);

        logger.Init();
        CHECK(logger.GetBuffer().empty());
        CHECK(logger.GetLogLevel() == LogLevelType::LOG_INFO);
    }

    SUBCASE("Log stores messages") {
        LogMessage msg("hello");
        logger.Log(msg);
        CHECK(logger.GetBuffer().size() == 1);
        CHECK(logger.GetBuffer()[0]->ToString() == "hello");
    }

    SUBCASE("Log level filtering works") {
        logger.SetLogLevel(LogLevelType::LOG_ERROR);

        LogMessage infoMsg("info");
        LogMessage errorMsg("error");

        logger.Log(infoMsg);
        logger.Log(errorMsg);

        auto& buf = logger.GetBuffer();
        CHECK(buf.size() == 2);
        CHECK(buf[0]->ToString() == "info");
        CHECK(buf[1]->ToString() == "error");
    }
}

SLXIO_ABI_NAMESPACE_END