#include "Logger.h"
#include "Compiler.h"
#include "Config.h"
#include "ErrorTypes.h"
#include <cstring>
#include <fstream>
#include <ostream>
#include <random>
#include <sstream>
#if SLXIO_SLOG
#include "Slog.h"
#elif SLXIO_LOGURU
#include "Loguru.h"
#endif

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Logger::Logger()
  : InternalVerbosityLevel(Logger::MessageLevelType::LOG_INFO), 
  DefaultFileModeType(Logger::LogFileModeType::WRITE)
{
}

ReturnType Logger::Init(int argc, char** argv)
{
#if SLXIO_LOGURU
  loguru::init(argc, argv);
#elif SLXIO_SLOG
  slog_init("logfile.log", SLOG_FLAGS_ALL, 0);
#endif
  return E_OK;
}

Logger& Logger::GetInstance()
{
  static Logger instance;
  return instance;
}

ReturnType Logger::SendMessage(
  const MessageInfoType& logInfo, const std::vector<std::string>& logData)
{
  LogMessage message;
  message.info = logInfo;
  message.messages = logData;
  LogBuffer.push_back(message);
  return E_OK;
}

void Logger::Print()
{
#if SLXIO_LOGURU

#elif SLXIO_SLOG

  slog_config_t cfg;
  slog_config_get(&cfg);
  cfg.eColorFormat = SLOG_COLORING_FULL;
  slog_config_set(&cfg);
  slog_init(NULL, SLOG_FLAGS_ALL, 0);

  for (const auto& entry : LogBuffer)
  {
    const auto& info = entry.info;

    int slogLevel = SLOG_INFO;
    switch (info.logLevel)
    {
      case LOG_FATAL:
        slogLevel = SLOG_FATAL;
        break;
      case LOG_ERROR:
        slogLevel = SLOG_ERROR;
        break;
      case LOG_WARN:
        slogLevel = SLOG_WARN;
        break;
      case LOG_INFO:
        slogLevel = SLOG_INFO;
        break;
      case LOG_DEBUG:
        slogLevel = SLOG_DEBUG;
        break;
      case LOG_VERBOSE:
        slogLevel = SLOG_TRACE;
        break;
      default:
        slogLevel = SLOG_INFO;
        break;
    }

    for (const auto& msg : entry.messages)
    {
      if (slogLevel == SLOG_FATAL)
      {
        slog_fatal("[AppId=%u, Desc=%s] %s", info.appId.appId,
          info.appId.appDescription, msg.c_str());
      }
      else if (slogLevel == SLOG_ERROR)
      {
        slog_error("[AppId=%u, Desc=%s] %s", info.appId.appId,
          info.appId.appDescription, msg.c_str());
      }
      else if (slogLevel == SLOG_WARN)
      {
        slog_warn("[AppId=%u, Desc=%s] %s", info.appId.appId,
          info.appId.appDescription, msg.c_str());
      }
      else if (slogLevel == SLOG_INFO)
      {
        slog_info("[AppId=%u, Desc=%s] %s", info.appId.appId,
          info.appId.appDescription, msg.c_str());
      }
      else if (slogLevel == SLOG_DEBUG)
      {
        slog_debug("[AppId=%u, Desc=%s] %s", info.appId.appId,
          info.appId.appDescription, msg.c_str());
      }
      else if (slogLevel == TRACE)
      {
        slog_trace("[AppId=%u, Desc=%s] %s", info.appId.appId,
          info.appId.appDescription, msg.c_str());
      }
      else
      {
        slog_info("[AppId=%u, Desc=%s] %s", info.appId.appId,
          info.appId.appDescription, msg.c_str());
      }
    }
  }

  slog_destroy();
#endif
}

ReturnType Logger::WriteToFile(const std::string& path)
{
  std::ofstream outFile(path, DefaultFileModeType);
  if (!outFile.is_open())
  {
    return E_FOPEN_FAIL;
  }

  for (const auto& entry : LogBuffer)
  {
    const auto& info = entry.info;
    outFile << "[AppId=" << info.appId.appId
            << ", Desc=" << info.appId.appDescription
            << ", Type=" << static_cast<int>(info.type)
            << ", Level=" << static_cast<int>(info.logLevel) << "] ";

    for (size_t i = 0; i < entry.messages.size(); ++i)
    {
      outFile << entry.messages[i];
      if (i < entry.messages.size() - 1)
      {
        outFile << " ";
      }
    }
    outFile << std::endl;
  }

  outFile.close();
  return E_OK;
}

ReturnType Logger::WriteToFile(const char* path)
{
  return WriteToFile(std::string(path));
}

ReturnType Logger::WriteToFile()
{
  const size_t size = 1024;
  char buffer[size];
  if (getcwd(buffer, size) == nullptr)
  {
    return E_GET_CWD_FAIL;
  }

  std::random_device rand_dev;
  std::mt19937 generator(rand_dev());
  std::uniform_int_distribution<UInt32> distr(10000, 999999);

  std::ostringstream oss;
  oss << distr(generator) << ".log";
  std::string filename = oss.str();

  std::string fullPath = std::string(buffer) + "/" + filename;

  ReturnType result = WriteToFile(fullPath);
  if (result != E_OK)
  {
    return result;
  }

  return E_OK;
}

void Logger::SetLogLevel(Logger::MessageLevelType newLogLevel)
{
  InternalVerbosityLevel = newLogLevel;
}

Logger::MessageLevelType Logger::GetLogLevel(void)
{
  return InternalVerbosityLevel;
}

void Logger::SetLogFileMode(Logger::LogFileModeType mode)
{
  FileModeType = mode;
}

Logger::LogFileModeType Logger::GetDefaultLogFileMode()
{
  return LogFileModeType();
}

void Logger::ResetLogLevelType() {
  InternalVerbosityLevel = DefaultInternalVerbosityLevel;
}

bool Logger::IsEnabled()
{
#if SLXIO_LOGURU || SLXIO_SLOG
  return true;
#else
  return false;
#endif
}

void Logger::ClearBuffer() {
  LogBuffer.clear();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
