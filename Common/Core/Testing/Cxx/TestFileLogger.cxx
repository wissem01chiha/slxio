#include "ArrayLogMessage.h"
#include "Doctest.h"
#include "FileLogger.h"

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

  std::array<std::string, 3> data{ "Hello", "File", "Logger" };

  ArrayLogMessage<std::string, 3> msg(data);

  logger.Log(msg);

  std::ifstream file(logFile.c_str());
  REQUIRE(file.is_open());

  std::stringstream buffer;
  buffer << file.rdbuf();

  const std::string content = buffer.str();

  CHECK(content.find("Hello") != std::string::npos);
  CHECK(content.find("File") != std::string::npos);
  CHECK(content.find("Logger") != std::string::npos);

  std::remove(logFile.c_str());
}

TEST_CASE("FileLogger stream operator")
{
  const std::string logFile = "FileLoggerTest.log";

  std::remove(logFile.c_str());

  FileLogger logger(logFile);
  logger.Init();

  std::array<std::string, 2> data{ "Test", "Message" };

  ArrayLogMessage<std::string, 2> msg(data);

  logger << msg;

  std::ifstream file(logFile.c_str());
  REQUIRE(file.is_open());

  std::stringstream buffer;
  buffer << file.rdbuf();

  const std::string content = buffer.str();

  CHECK(content.find("Test") != std::string::npos);
  CHECK(content.find("Message") != std::string::npos);

  std::remove(logFile.c_str());
}
SLXIO_ABI_NAMESPACE_END