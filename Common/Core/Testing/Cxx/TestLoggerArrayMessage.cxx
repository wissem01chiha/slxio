#include "ArrayLogMessage.h"
#include "Doctest.h"
#include "Logger.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Logger With ArrayLogMessage Logging Test") {
  Logger logger;
  logger.Init();
  logger.SetLogLevel(LogLevelType::LOG_INFO);

  std::array<std::string, 4> d = {"one", "two", "three", "four"};

  ArrayLogMessage<std::string, 4> msg(d);

  CHECK_NOTHROW(logger.Log(msg););
}

TEST_CASE("Logger With ArrayLogMessage via << operator") {
  Logger logger;
  logger.Init();
  logger.SetLogLevel(LogLevelType::LOG_INFO);

  std::array<std::string, 4> d = {"one", "two", "three", "four"};

  ArrayLogMessage<std::string, 4> msg(d);

  CHECK_NOTHROW(logger << msg);
}
SLXIO_ABI_NAMESPACE_END