#include "Doctest.h"
#include "ArrayLogMessage.h"
#include "SyncLogger.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SyncLogger With ArrayLogMessage Logging Test")
{
  SyncLogger logger;
  logger.Init();
  logger.SetLogLevel(LogLevelType::LOG_INFO);

  std::array<std::string, 4> d = {"one","two","three","four"};

  ArrayLogMessage<std::string,4> msg(d);
    
  CHECK_NOTHROW(logger.Log(msg););
}

TEST_CASE("SyncLogger With ArrayLogMessage via << operator")
{
  SyncLogger logger;
  logger.Init();
  logger.SetLogLevel(LogLevelType::LOG_INFO);

  std::array<std::string, 4> d = {"one","two","three","four"};

  ArrayLogMessage<std::string,4> msg(d);
    
  CHECK_NOTHROW(logger << msg);
}
SLXIO_ABI_NAMESPACE_END