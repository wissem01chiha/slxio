#include "Doctest.h"
#include "ErrorHandler.h"
#include "Logger.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Logger Singleton Constructor Test") {
  Logger &logger = Logger::GetInstance();
  CHECK(&logger != nullptr);
}

TEST_CASE("Logger Set and Get Verbosity Test") {
  Logger &logger = Logger::GetInstance();

  logger.SetLogLevel(Logger::MessageLevelType::LOG_DEBUG);
  CHECK(logger.GetLogLevel() == Logger::MessageLevelType::LOG_DEBUG);

  logger.SetLogLevel(Logger::MessageLevelType::LOG_INFO);
  CHECK(logger.GetLogLevel() == Logger::MessageLevelType::LOG_INFO);

  logger.ResetLogLevelType();
  CHECK(logger.GetLogLevel() == Logger::MessageLevelType::LOG_OFF);
}

TEST_CASE("Logger Enabled Test") {
  Logger &logger = Logger::GetInstance();
  CHECK(logger.IsEnabled() == true);
}

TEST_CASE("Logger Buffer Clear Test") {
  Logger &logger = Logger::GetInstance();

  Logger::ApplicationInfoType appInfo = {1, "TestApp", ""};
  Logger::MessageInfoType info = {
      Logger::MessageType::LOG, Logger::MessageLevelType::LOG_INFO, appInfo, 1};
  std::vector<std::string> data = {"hello world"};

  logger.SendLogMessage(info, data);

  auto filtered = logger.GetFiltredLogMessage(1);
  CHECK(filtered.size() > 0);

  logger.ClearBuffer();
  auto filteredAfterClear = logger.GetFiltredLogMessage(1);
  CHECK(filteredAfterClear.empty());
}

TEST_CASE("Logger Filtered Message By Name Test") {
  Logger &logger = Logger::GetInstance();

  Logger::ApplicationInfoType appInfo = {2, "MyApp", ""};
  Logger::MessageInfoType info = {
      Logger::MessageType::LOG, Logger::MessageLevelType::LOG_WARN, appInfo, 1};
  std::vector<std::string> data = {"Warning message"};

  logger.SendLogMessage(info, data);

  auto filtered = logger.GetFiltredLogMessage("MyApp");
  CHECK(filtered.size() > 0);
  CHECK(filtered[0].info.logLevel == Logger::MessageLevelType::LOG_WARN);
}

TEST_CASE("Logger File Mode Test") {
  Logger &logger = Logger::GetInstance();

  logger.SetLogFileMode(Logger::LogFileModeType::APPEND);
  CHECK(logger.GetLogFileMode() == Logger::LogFileModeType::APPEND);

  logger.SetLogFileMode(Logger::LogFileModeType::TRUNCATE);
  CHECK(logger.GetLogFileMode() == Logger::LogFileModeType::TRUNCATE);
}

TEST_CASE("Logger Print Test") {
  Logger &logger = Logger::GetInstance();

  logger.ClearBuffer();

  Logger::ApplicationInfoType appInfo = {3, "PrintApp", "Dummy Application"};
  Logger::MessageInfoType info = {
      Logger::MessageType::LOG, Logger::MessageLevelType::LOG_INFO, appInfo, 1};
  std::vector<std::string> data = {"Hello from Print"};

  logger.SendLogMessage(info, data);

  logger.Print();
}

TEST_CASE("Logger WriteToFile Test") {
  Logger &logger = Logger::GetInstance();
  logger.ClearBuffer();

  Logger::ApplicationInfoType appInfo = {42, "FileApp",
                                         "File test application"};
  Logger::MessageInfoType info = {
      Logger::MessageType::LOG, Logger::MessageLevelType::LOG_INFO, appInfo, 1};
  std::vector<std::string> data = {"Message written to file"};
  logger.SendLogMessage(info, data);

  HError result = logger.WriteToFile("testlogfile.log");
  ErrorHandler::PrintErrorMessage(result);
  CHECK(result == E_OK);
}
SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
