// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "Logger.h"
#include "Compiler.h"
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
  : InternalVerbosityLevel(Logger::Verbosity::V_INFO)
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

void Logger::Log(Verbosity level, const char* message)
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
    case V_ERROR:
      slog_error("%s", message);
      break;
    case V_WARNING:
      slog_warn("%s", message);
      break;
    case V_INFO:
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

void Logger::SetStderrVerbosity(Verbosity level)
{
#if SLXIO_LOGURU

  loguru::g_stderr_verbosity = static_cast<loguru::Verbosity>(level);

#elif SLXIO_SLOG

  slog_config_t slgCfg;
  int nEnabledLevels;
  switch (level)
  {
    case Verbosity::V_INVALID:
      nEnabledLevels = SLOG_NOTAG;
      break;
    case Verbosity::V_ERROR:
      nEnabledLevels = SLOG_ERROR;
      break;
    case Verbosity::V_WARNING:
      nEnabledLevels = SLOG_WARN;
      break;
    case Verbosity::V_INFO:
      nEnabledLevels = SLOG_INFO;
      break;
    case Verbosity::V_TRACE:
      nEnabledLevels = SLOG_TRACE;
      break;
    default:
      nEnabledLevels = SLOG_INFO;
      break;
  }
  slgCfg.nFlags = nEnabledLevels;
  slog_config_set(&slgCfg);
#endif
  InternalVerbosityLevel = level;
}

void Logger::SetInternalVerbosity(Verbosity level)
{
  InternalVerbosityLevel = level;
}

void Logger::SetInternalFileMode(Mode mode)
{
  FileMode = mode;
}

void Logger::Print(const char* message, std::ostream& os)
{
  os << message;
}

UInt32 Logger::LogToFile(Verbosity verbosity, const char* path,
  unsigned int linenum, const char* message)
{
#if SLXIO_LOGURU

  loguru::add_file(path, static_cast<loguru::Mode>(filemode),
    static_cast<loguru::Verbosity>(verbosity));
  loguru::log(
    static_cast<loguru::Verbosity>(verbosity), path, linenum, message);
  loguru::flush();
  return ErrorCode::SLX_OK;

#elif SLXIO_SLOG

  std::ofstream out(path, std::ios::app);
  if (out.is_open())
  {
    out << "[" << static_cast<int>(verbosity) << "] " << path << ":" << linenum
        << " " << message << std::endl;
  }
  return SLX_OK;
#endif
  return SLX_OK;
}

UInt32 Logger::LogToFile(Verbosity verbosity, const char* message)
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
    if (errno_ != SLX_OK)
    {
      return errno_;
    }
  }
  else
  {
    return SLX_ELONGPATH;
  }
  return SLX_OK;
}

Logger::Verbosity Logger::ToVerbosity(UInt8 value)
{
  return static_cast<Logger::Verbosity>(value);
}

Logger::Verbosity Logger::ToVerbosity(const char* text)
{

  if (text != nullptr && *text)
  {
    if (strcmp(text, "INVALID"))
    {
      return Verbosity::V_INVALID;
    }
    else if (strcmp(text, "OFF"))
    {
      return Verbosity::V_OFF;
    }
    else if (strcmp(text, "ERROR"))
    {
      return Verbosity::V_ERROR;
    }
    else if (strcmp(text, "WARNING"))
    {
      return Verbosity::V_WARNING;
    }
    else if (strcmp(text, "INFO"))
    {
      return Verbosity::V_INFO;
    }
    else if (strcmp(text, "TRACE"))
    {
      return Verbosity::V_TRACE;
    }
  }
  return Verbosity::V_INVALID;
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