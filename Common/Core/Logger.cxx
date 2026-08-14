#include "Logger.h"
#include "Loguru.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

void Logger::Init()
{
  static bool initialized = false;
  if (initialized) {
    return;
  }
  int argc = 1;
  char appName[] = "slxio";
  char* argv[] = { appName, nullptr };
  loguru::g_preamble_date = false;
  loguru::g_preamble_time = false;
  loguru::g_preamble_uptime = false;
  loguru::g_preamble_thread = false;
  loguru::g_preamble_file = false;
  loguru::g_preamble_verbose = false;
  loguru::init(argc, argv);
  initialized = true;
}

void Logger::Log(const ILogMessage& msg)
{

  switch (m_level) {
    case LogLevelType::LOG_FATAL:
      LOG_F(ERROR, "%s", msg.ToString().c_str());
      break;

    case LogLevelType::LOG_ERROR:
      LOG_F(ERROR, "%s", msg.ToString().c_str());
      break;

    case LogLevelType::LOG_WARN:
      LOG_F(WARNING, "%s", msg.ToString().c_str());
      break;

    case LogLevelType::LOG_INFO:
      LOG_F(INFO, "%s", msg.ToString().c_str());
      break;

    case LogLevelType::LOG_DEBUG:
      VLOG_F(1, "%s", msg.ToString().c_str());
      break;

    case LogLevelType::LOG_VERBOSE:
      VLOG_F(2, "%s", msg.ToString().c_str());
      break;

    case LogLevelType::LOG_OFF:
    default:
      break;
  }
}

void Logger::SetLogLevel(LogLevelType level)
{
  m_level = level;
}

LogLevelType Logger::GetLogLevel() const
{
  return m_level;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
