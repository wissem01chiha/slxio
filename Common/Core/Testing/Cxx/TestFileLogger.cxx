#include "Doctest.h"
#include "FileLogger.h"
#include "LogMessageFixture.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

bool FileExists(const std::string& fileName)
{
  std::ifstream file(fileName.c_str());
  return file.good();
}

TEST_CASE("FileLogger creates log file")
{
  const std::string logFile = "FileLoggerTest.log";

  std::remove(logFile.c_str());

  FileLogger logger(logFile);
  logger.Init();

  CHECK(FileExists(logFile));

  std::remove(logFile.c_str());
}

TEST_CASE("FileLogger log level setter getter")
{
  FileLogger logger;

  logger.SetLogLevel(LogLevelType::LOG_INFO);

  CHECK(logger.GetLogLevel() == LogLevelType::LOG_INFO);
}

TEST_CASE("FileLogger writes message to file")
{
  const std::string logFile = "FileLoggerTest.log";

  std::remove(logFile.c_str());

  FileLogger logger(logFile);
  logger.Init();

  std::string data("Hello");

  LogMessage msg(data);

  logger.Log(msg);

  std::ifstream file(logFile.c_str());
  REQUIRE(file.is_open());

  std::stringstream buffer;
  buffer << file.rdbuf();

  const std::string content = buffer.str();

  CHECK(content.find("Hello") != std::string::npos);

  std::remove(logFile.c_str());
}

TEST_CASE("FileLogger stream operator")
{
  const std::string logFile = "FileLoggerTest.log";

  std::remove(logFile.c_str());

  FileLogger logger(logFile);
  logger.Init();

  std::string data = "Test";

  LogMessage msg(data);

  logger << msg;

  std::ifstream file(logFile.c_str());
  REQUIRE(file.is_open());

  std::stringstream buffer;
  buffer << file.rdbuf();

  const std::string content = buffer.str();

  CHECK(content.find("Test") != std::string::npos);

  std::remove(logFile.c_str());
}
SLXIO_ABI_NAMESPACE_END
