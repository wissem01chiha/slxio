// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "Logger.h"
#include "Compiler.h"
#include "ErrorTypes.h"
#include "Config.h"
#include <cstring>
#include <fstream>
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
  : InternalVerbosityLevel(Logger::MessageLogLevelType::LOG_INFO)
{
}

void Logger::Init(int argc, char** argv)
{
#if SLXIO_LOGURU
  loguru::init(argc, argv);
#elif SLXIO_SLOG
  slog_init("logfile.log", SLOG_FLAGS_ALL, 0);
#endif
}

void Logger::Log(Logger::MessageLogLevelType level, const char* message)
{
#if SLXIO_LOGURU
  switch (level)
  {
    case V_ERROR:
      LOG_F(ERROR, "%s", message);
      break;
    case V_WARNING:
      LOG_F(WARNING, "%s", message);
      break;
    case V_INFO:
      LOG_F(INFO, "%s", message);
      break;
    default:
      LOG_F(INFO, "%s", message);
      break;
  }
#elif SLXIO_SLOG

  slog_config_t cfg;
  slog_config_get(&cfg);
  cfg.eColorFormat = SLOG_COLORING_FULL;
  slog_config_set(&cfg);
  slog_init(NULL, SLOG_FLAGS_ALL, 0);

  switch (level)
  {
    case LOG_ERROR:
      slog_error("%s", message);
      break;
    case LOG_WARN:
      slog_warn("%s", message);
      break;
    case LOG_INFO:
      slog_info(message);
      break;
    default:
      slog_debug("%s", message);
      break;
  };
  slog_destroy();

#else
  (void*)message;
#endif
}

void Logger::Log(const char* message)
{
  Log(InternalVerbosityLevel, message);
}

Logger& Logger::GetInstance()
{
  static Logger instance;
  return instance;
}

void Logger::SetLogLevel(Logger::MessageLogLevelType level)
{
  InternalVerbosityLevel = level;
}

Logger::MessageLogLevelType Logger::GetLogLevel(void)
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

void Logger::Print(const char* message, std::ostream& os)
{
  os << message;
}

UInt32 Logger::LogToFile(Logger::MessageLogLevelType verbosity, const char* path,
  unsigned int linenum, const char* message)
{
#if SLXIO_LOGURU

  loguru::add_file(path, static_cast<loguru::Mode>(filemode),
    static_cast<loguru::Verbosity>(verbosity));
  loguru::log(
    static_cast<loguru::Verbosity>(verbosity), path, linenum, message);
  loguru::flush();
  return ErrorCode::E_OK;

#elif SLXIO_SLOG

  std::ofstream out(path, std::ios::app);
  if (out.is_open())
  {
    out << "[" << static_cast<int>(verbosity) << "] " << path << ":" << linenum
        << " " << message << std::endl;
  }
  return E_OK;
#endif
  return E_OK;
}

UInt32 Logger::LogToFile(Logger::MessageLogLevelType verbosity, const char* message)
{

  const size_t size = 1024;
  char buffer[size];
  if (getcwd(buffer, size) == nullptr)
  {
    return SLX_EGETCWD;
  }

  std::random_device rand_dev;
  std::mt19937 generator(rand_dev());
  std::uniform_int_distribution<UInt32> distr(10000, 999999);
  std::ostringstream oss;
  oss << distr(generator) << ".log";
  std::string filename = oss.str();
  const char* path = filename.c_str();

  if (strlen(buffer) + strlen(path) < size)
  {
    strcat(buffer, path);
    UInt32 errno_ = LogToFile(verbosity, path, 1, message);
    if (errno_ != E_OK)
    {
      return errno_;
    }
  }
  else
  {
    return SLX_ELONGPATH;
  }
  return E_OK;
}

Logger::MessageLogLevelType Logger::ToMessageLogLevelType(UInt8 value)
{
  return static_cast<Logger::MessageLogLevelType>(value);
}

bool Logger::IsEnabled()
{
#if SLXIO_LOGURU || SLXIO_SLOG
  return true;
#else
  return false;
#endif
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END