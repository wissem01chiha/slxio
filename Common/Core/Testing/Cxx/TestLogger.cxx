#include "Doctest.h"
#include "LogMessageFixture.h"
#include "Logger.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Logger With SimpleLogMessage Logging Test") {
  Logger logger;
  logger.Init();
  logger.SetLogLevel(LogLevelType::LOG_INFO);

  LogMessage msg("Hello World");
  CHECK_NOTHROW(logger.Log(msg));
}

TEST_CASE("Logger With SimpleLogMessage via << operator") {
  Logger logger;
  logger.Init();
  logger.SetLogLevel(LogLevelType::LOG_INFO);

  LogMessage msg("Hello World");
  CHECK_NOTHROW(logger << msg);
}

SLXIO_ABI_NAMESPACE_END
