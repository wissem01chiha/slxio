#include "Logger.h"
#include "Compiler.h"
#include "ErrorCode.h"
#include "Libuv.h"
#include <fstream>
#include <ostream>
#include <random>
#include <sstream>
#if SLXIO_SLOG
#include "Slog.h"
#elif SLXIO_LOGURU
#include "Loguru.h"
#endif // SLXIO_SLOG

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Logger::Logger()
  : InternalVerbosityLevel(Logger::MessageLevelType::LOG_INFO)
  , DefaultFileModeType(Logger::LogFileModeType::WRITE)
{
}

ReturnType Logger::Init(int argc, char** argv)
{
#if SLXIO_LOGURU
  loguru::init(argc, argv);
#elif SLXIO_SLOG
  slog_config_t cfg;
  slog_config_get(&cfg);
  cfg.eColorFormat = SLOG_COLORING_FULL;
  slog_config_set(&cfg);
  slog_init(NULL, SLOG_FLAGS_ALL, 0);
#endif
  return E_OK;
}

Logger& Logger::GetInstance()
{
  static Logger instance;
  return instance;
}

ReturnType Logger::SendLogMessage(
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
    int slogLevel = ToSlogLevel(entry.info.logLevel);

    for (const auto& msg : entry.messages)
    {
      std::string FormatMsg = FormatLogEntry(entry, msg);

      switch (slogLevel)
      {
        case SLOG_FATAL:
          slog_fatal("%s", FormatMsg.c_str());
          break;
        case SLOG_ERROR:
          slog_error("%s", FormatMsg.c_str());
          break;
        case SLOG_WARN:
          slog_warn("%s", FormatMsg.c_str());
          break;
        case SLOG_INFO:
          slog_info("%s", FormatMsg.c_str());
          break;
        case SLOG_DEBUG:
          slog_debug("%s", FormatMsg.c_str());
          break;
        case SLOG_TRACE:
          slog_trace("%s", FormatMsg.c_str());
          break;
        default:
          slog_info("%s", FormatMsg.c_str());
          break;
      }
    }
  }
  slog_destroy();
#endif
}

ReturnType Logger::WriteToFile(const std::string& filename)
{
  std::string logFilePath = GetDefaultLogDirectoryPath() + PATH_SEP + filename;

  uv_fs_t req;
  int flags = O_CREAT | O_WRONLY | O_TRUNC;
  int mode = DefaultFileModeType;
  uv_file file = uv_fs_open(uv_default_loop(), &req, logFilePath.c_str(), flags, mode, nullptr);
  uv_fs_req_cleanup(&req);

  for (const auto& entry : LogBuffer)
  {
    for (const auto& msg : entry.messages)
    {
      std::string formatted = FormatLogEntry(entry, msg);
      uv_buf_t buf = uv_buf_init(
        const_cast<char*>(formatted.c_str()), static_cast<unsigned int>(formatted.size()));

      uv_fs_write(uv_default_loop(), &req, file, &buf, 1, -1, nullptr);
      uv_fs_req_cleanup(&req);

      const char* newline = "\n";
      uv_buf_t nlBuf = uv_buf_init(const_cast<char*>(newline), 1);
      uv_fs_write(uv_default_loop(), &req, file, &nlBuf, 1, -1, nullptr);
      uv_fs_req_cleanup(&req);
    }
  }

  uv_fs_close(uv_default_loop(), &req, file, nullptr);
  uv_fs_req_cleanup(&req);

  return E_OK;
}

ReturnType Logger::WriteToFile(const char* path)
{
  return WriteToFile(std::string(path));
}

ReturnType Logger::WriteToFile()
{
  std::random_device rand_dev;
  std::mt19937 generator(rand_dev());
  std::uniform_int_distribution<UInt32> distr(10000, 999999);

  std::ostringstream oss;
  oss << distr(generator) << ".log";
  std::string filename = oss.str();

  std::string FullFilepath = GetDefaultLogDirectoryPath() + PATH_SEP + filename;
  return WriteToFile(FullFilepath);
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
  return DefaultFileModeType;
}

Logger::LogFileModeType Logger::GetLogFileMode()
{
  return FileModeType;
}

void Logger::ResetLogLevelType()
{
  InternalVerbosityLevel = DefaultInternalVerbosityLevel;
}

std::vector<Logger::LogMessage> Logger::GetFiltredLogMessage(UInt32 Id)
{
  std::vector<Logger::LogMessage> result;
  for (const auto& entry : LogBuffer)
  {
    if (entry.info.appId.appId == Id)
    {
      result.push_back(entry);
    }
  }
  return result;
}

std::vector<Logger::LogMessage> Logger::GetFiltredLogMessage(const char* Name)
{
  std::vector<Logger::LogMessage> result;
  for (const auto& entry : LogBuffer)
  {
    if (entry.info.appId.appName == std::string(Name))
    {
      result.push_back(entry);
    }
  }
  return result;
}

bool Logger::IsEnabled()
{
#if SLXIO_LOGURU || SLXIO_SLOG
  return true;
#else
  return false;
#endif
}

void Logger::ClearBuffer()
{
  LogBuffer.clear();
}

std::string Logger::GetLogDirectoryPath(void)
{
  return LogDirectoryPath;
}

void Logger::SetLogDirectoryPath(const std::string pathname)
{
  LogDirectoryPath = pathname;
}

std::string Logger::GetDefaultLogDirectoryPath(void)
{
  char buffer[1024];
  size_t size = sizeof(buffer);
  uv_cwd(buffer, &size);
  return std::string(buffer);
}

std::string Logger::FormatLogEntry(const Logger::LogMessage& entry, const std::string& msg)
{
  const auto& info = entry.info;
  std::ostringstream oss;
  oss << "[" << info.appId.appId << "," << info.appId.appName << "," << info.appId.appDescription
      << "," << static_cast<int>(info.type) << "," << static_cast<int>(info.logLevel) << "] "
      << msg;
  return oss.str();
}

#if SLXIO_SLOG
int Logger::ToSlogLevel(Logger::MessageLevelType level)
{
  int slogLevel;
  switch (level)
  {
    case Logger::MessageLevelType::LOG_FATAL:
      slogLevel = SLOG_FATAL;
      break;
    case Logger::MessageLevelType::LOG_ERROR:
      slogLevel = SLOG_ERROR;
      break;
    case Logger::MessageLevelType::LOG_WARN:
      slogLevel = SLOG_WARN;
      break;
    case Logger::MessageLevelType::LOG_INFO:
      slogLevel = SLOG_INFO;
      break;
    case Logger::MessageLevelType::LOG_DEBUG:
      slogLevel = SLOG_DEBUG;
      break;
    case Logger::MessageLevelType::LOG_VERBOSE:
      slogLevel = SLOG_TRACE;
      break;
    default:
      slogLevel = SLOG_INFO;
      break;
  }
  return slogLevel;
};
#endif // SLXIO_SLOG

#if SLXIO_LOGURU
int Logger::ToLoguruLevel(Logger::MessageLevelType level)
{
  return 0;
};
#endif // SLXIO_LOGURU

SLXIO_ABI_NAMESPACE_END
};
