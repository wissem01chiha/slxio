#include "Logger.h"
#include "Compiler.h"
#include "Platform.h"
#include <cstring>
#include <fstream>
#include <random>
#include <sstream>

#ifdef LOGGER_USE_SLOG
#include "Slog.h"
#elif defined(LOGGER_USE_LOGURU)
#include "Loguru.h"
#else
#error "No logging utility is enbaled"
#endif

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

Logger::Logger()
  : internalVerbosityLevel(Logger::Verbosity::V_INFO)
  , filemode(File::Mode::Append)
{
}

void Logger::init(int argc, char** argv)
{
#ifdef LOGGER_USE_LOGURU
  loguru::init(argc, argv);
#elif defined(LOGGER_USE_SLOG)
  slog_init("logfile.log", SLOG_FLAGS_ALL, 0);
#elif defined(LOGGER_USE_SPDLOG)
  spdlog::info("Spdlog initialized");
#elif defined(LOGGER_USE_GLOG)
  google::InitGoogleLogging("Logger");
  google::LogToStderr();
#endif
}

void Logger::log(Verbosity level, const char* message)
{
#ifdef LOGGER_USE_LOGURU
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
#elif defined(LOGGER_USE_SLOG)

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

#elif defined(LOGGER_USE_SPDLOG)

  spdlog::log(spdlog::level::info, "%s", message);

#elif defined(LOGGER_USE_GLOG)

  LOG(INFO) << message;

#else
  (void*)message;
#endif
}

void Logger::log(const char* message)
{
  log(internalVerbosityLevel, message);
}

Logger& Logger::getInstance()
{
  static Logger instance;
  return instance;
}

void Logger::setStderrVerbosity(Verbosity level)
{
#ifdef LOGGER_USE_LOGURU

  loguru::g_stderr_verbosity = static_cast<loguru::Verbosity>(level);

#elif defined(LOGGER_USE_SLOG)

  slog_config_t slgCfg;
  uint16 nEnabledLevels;
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

#elif defined(LOGGER_USE_SPDLOG)

  spdlog::level::level_enum severity;
  switch (level)
  {
    case Verbosity::OFF:
      severity = spdlog::level::off;
      break;
    case Verbosity::ERROR:
      severity = spdlog::level::err;
      break;
    case Verbosity::WARNING:
      severity = spdlog::level::warn;
      break;
    case Verbosity::INFO:
      severity = spdlog::level::info;
      break;
    case Verbosity::TRACE:
      severity = spdlog::level::trace;
      break;
    default:
      severity = spdlog::level::info;
      break;
  }
  spdlog::set_level(severity);

#elif defined(LOGGER_USE_GLOG)

  google::SetStderrLogging(severity);
  google::LogToStderr();

#else
  (void*)internalVerbosityLevel;
#endif
  internalVerbosityLevel = level;
}

void Logger::setInternalVerbosity(Verbosity level)
{
  internalVerbosityLevel = level;
}

void Logger::setInternalFileMode(File::Mode mode)
{
  filemode = mode;
}

void Logger::print(const char* message, std::ostream& os)
{
  os << message;
}

ErrorCode Logger::logToFile(Verbosity verbosity, const char* path,
  unsigned int linenum, const char* message)
{
#ifdef LOGGER_USE_LOGURU

  loguru::add_file(path, static_cast<loguru::Mode>(filemode),
    static_cast<loguru::Verbosity>(verbosity));
  loguru::log(
    static_cast<loguru::Verbosity>(verbosity), path, linenum, message);
  loguru::flush();
  return ErrorCode::SLX_OK;

#elif defined(LOGGER_USE_SLOG)

  std::ofstream out(path, std::ios::app);
  if (out.is_open())
  {
    out << "[" << static_cast<int>(verbosity) << "] " << path << ":" << linenum
        << " " << message << std::endl;
  }
  return ErrorCode::SLX_OK;
#endif
}

ErrorCode Logger::logToFile(Verbosity verbosity, const char* message)
{

  const size_t size = 1024;
  char buffer[size];
  if (getcwd(buffer, size) == nullptr)
  {
    return ErrorCode::SLX_EGETCWD;
  }

  std::random_device rand_dev;
  std::mt19937 generator(rand_dev());
  std::uniform_int_distribution<uint32> distr(10000, 999999);
  std::ostringstream oss;
  oss << distr(generator) << ".log";
  std::string filename = oss.str();
  const char* path = filename.c_str();

  if (strlen(buffer) + strlen(path) < size)
  {
    strcat(buffer, path);
    ErrorCode errno_ = logToFile(verbosity, path, 1, message);
    if (errno_ != ErrorCode::SLX_OK)
    {
      return errno_;
    }
  }
  else
  {
    return ErrorCode::SLX_ELONGPATH;
  }
  return ErrorCode::SLX_OK;
}

Logger::Verbosity Logger::toVerbosity(uint8 value)
{
  return static_cast<Logger::Verbosity>(value);
}

Logger::Verbosity Logger::toVerbosity(const char* text)
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
#if defined(LOGGER_USE_SLOG) || defined(LOGGER_USE_LOGURU)
  return true;
#else
  return false;
#endif
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END