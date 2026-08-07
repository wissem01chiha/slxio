#include "Doctest.h"
#include "ErrorLogMessage.h"
#include "ErrorTypes.h"
#include "Loguru.h"
#include "SyncLogger.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SyncLogger SetAndGetLogLevel")
{
  SyncLogger logger;
  logger.SetLogLevel(LogLevelType::LOG_INFO);
  CHECK(logger.GetLogLevel() == LogLevelType::LOG_INFO);

  logger.SetLogLevel(LogLevelType::LOG_DEBUG);
  CHECK(logger.GetLogLevel() == LogLevelType::LOG_DEBUG);
}

TEST_CASE("SyncLogger LogSingleErrorMessage")
{
  SyncLogger logger;
  ErrorLogMessage msg(E_OK);

  CHECK_NOTHROW(logger.Log(msg));
}

TEST_CASE("SyncLogger LogCombinedErrorMessage")
{
  SyncLogger logger;
  logger.Init();
  logger.SetLogLevel(LogLevelType::LOG_WARN);

  ErrorLogMessage msg1(E_OK);
  ErrorLogMessage msg2(E_INVALID_ARGUMENT);

  auto combined = msg1 + msg2;

  REQUIRE(combined != nullptr);
  CHECK_NOTHROW(logger.Log(*combined));
}
SLXIO_ABI_NAMESPACE_END