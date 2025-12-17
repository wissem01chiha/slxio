#include "slxLogger.h"
#include "slxCompiler.h"
#include "slxPlatform.h"
#include <cstring>
#include <random>
#include <sstream>

#ifdef LOGGER_USE_SLOG
#include "Slog.h"
#elif defined(LOGGER_USE_LOGURU)
#include "Loguru.h"
#else
#error "no logging utils is enbaled "
#endif

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

slxLogger::slxLogger() {
  internalVerbosityLevel = slxLogger::Verbosity::V_INFO;
  filemode = File::Mode::Append;
}

void slxLogger::init(int argc, char **argv) {
#ifdef LOGGER_USE_LOGURU
  loguru::init(argc, argv);
#elif defined(LOGGER_USE_SLOG)
  slog_init("logfile.log", SLOG_FLAGS_ALL, 0);
#elif defined(LOGGER_USE_SPDLOG)
  spdlog::info("Spdlog initialized");
#elif defined(LOGGER_USE_GLOG)
  google::InitGoogleLogging("slxLogger");
  google::LogToStderr();
#endif
}

void slxLogger::Log(Verbosity level, const char *message) {
#ifdef LOGGER_USE_LOGURU
  switch (level) {
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

  switch (level) {
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
  (void *)message;
#endif
}

void slxLogger::Log(const char *message) {
  Log(internalVerbosityLevel, message);
}

slxLogger &slxLogger::getInstance() {
  static slxLogger instance;
  return instance;
}

void slxLogger::setStderrVerbosity(Verbosity level) {
#ifdef LOGGER_USE_LOGURU

  loguru::g_stderr_verbosity = static_cast<loguru::Verbosity>(level);

#elif defined(LOGGER_USE_SLOG)

  slog_config_t slgCfg;
  uint16 nEnabledLevels;
  switch (level) {
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
  switch (level) {
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
  (void *)internalVerbosityLevel;
#endif
  internalVerbosityLevel = level;
}

void slxLogger::setInternalVerbosity(Verbosity level) {
  internalVerbosityLevel = level;
}

void slxLogger::setInternalFileMode(File::Mode mode) { filemode = mode; }

void slxLogger::print(const char *message, std::ostream &os) { os << message; }

slxLogger::ErrorCode slxLogger::logToFile(Verbosity verbosity, const char *path,
                                          unsigned int linenum,
                                          const char *message) {
#ifdef LOGGER_USE_LOGURU

  loguru::add_file(path, static_cast<loguru::Mode>(filemode),
                   static_cast<loguru::Verbosity>(verbosity));
  loguru::log(static_cast<loguru::Verbosity>(verbosity), path, linenum,
              message);
  loguru::flush();
  return Ok;

#elif defined(LOGGER_USE_SLOG)

  std::ofstream out(path, std::ios::app);
  if (out.is_open()) {
    out << "[" << static_cast<int>(verbosity) << "] " << path << ":" << linenum
        << " " << message << std::endl;
  }
  return Ok;

#elif defined(LOGGER_USE_SPDLOG)

  auto slxLogger =
      spdlog::rotating_logger_mt("file_logger", path, 1048576 * 5, 3);
  auto slxLogger = spdlog::get("file_logger");
  return Ok;

#elif defined(LOGGER_USE_GLOG)

  google::SetLogDestination(severity, path);
  google::SetLogFilenameExtension(ext);
  google::FlushLogFiles(severity);
  return Ok;

#endif
}

slxLogger::ErrorCode slxLogger::logToFile(Verbosity verbosity,
                                          const char *message) {

  const size_t size = 1024;
  char buffer[size];
  if (getcwd(buffer, size) == nullptr) {
    return GetCwdFailed;
  }

  std::random_device rand_dev;
  std::mt19937 generator(rand_dev());
  std::uniform_int_distribution<uint32> distr(10000, 999999);
  std::ostringstream oss;
  oss << distr(generator) << ".log";
  std::string filename = oss.str();
  const char *path = filename.c_str();

  if (strlen(buffer) + strlen(path) < size) {
    strcat(buffer, path);
    ErrorCode errno_ = logToFile(verbosity, path, 1, message);
    if (errno_ != Ok) {
      return errno_;
    }
  } else {
    return LongFilePath;
  }
  return Ok;
}

slxLogger::Verbosity slxLogger::toVerbosity(uint8 value) {
  return static_cast<slxLogger::Verbosity>(value);
}

slxLogger::Verbosity slxLogger::toVerbosity(const char *text) {

  if (text != nullptr && *text) {
    if (strcmp(text, "INVALID")) {
      return Verbosity::V_INVALID;
    } else if (strcmp(text, "OFF")) {
      return Verbosity::V_OFF;
    } else if (strcmp(text, "ERROR")) {
      return Verbosity::V_ERROR;
    } else if (strcmp(text, "WARNING")) {
      return Verbosity::V_WARNING;
    } else if (strcmp(text, "INFO")) {
      return Verbosity::V_INFO;
    } else if (strcmp(text, "TRACE")) {
      return Verbosity::V_TRACE;
    }
  }
  return Verbosity::V_INVALID;
}

bool slxLogger::IsEnabled() {
#if defined(LOGGER_USE_LOGURU) || defined(LOGGER_USE_GLOG) ||                  \
    defined(LOGGER_USE_SPDLOG) || defined(LOGGER_USE_SLOG)
  return true;
#else
  return false;
#endif
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END