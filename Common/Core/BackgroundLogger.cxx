#include "BackgroundLogger.h"
#include "Spdlog.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

BackgroundLogger::BackgroundLogger()
  : m_nthreads(1)
  , m_queueSize(8192)
  , m_level(LogLevelType::LOG_INFO)
{
}

void BackgroundLogger::Init()
{
  // queue with 8k items and 1 backing thread.
  spdlog::init_thread_pool(m_queueSize, m_nthreads);
  auto async_file = spdlog::basic_logger_mt<spdlog::async_factory>(
    "background_logger", "logs/background.log");
  spdlog::set_default_logger(async_file);
  m_level = LogLevelType::LOG_INFO;
  spdlog::set_level(spdlog::level::info);
}

void BackgroundLogger::Log(const ILogMessage& msg)
{

  spdlog::level::level_enum lvl = spdlog::level::info;
  switch (m_level) {
    case LogLevelType::LOG_DEBUG:
      spdlog::get("background_logger")->debug(msg.ToString());
      break;
    case LogLevelType::LOG_INFO:
      spdlog::get("background_logger")->info(msg.ToString());
      break;
    case LogLevelType::LOG_WARN:
      spdlog::get("background_logger")->warn(msg.ToString());
      break;
    case LogLevelType::LOG_ERROR:
      spdlog::get("background_logger")->error(msg.ToString());
      break;
  }

  spdlog::get("background_logger")->flush();
}

void BackgroundLogger::SetLogLevel(LogLevelType level)
{
  m_level = level;
}

LogLevelType BackgroundLogger::GetLogLevel() const
{
  return m_level;
}

void BackgroundLogger::SetQueueSize(UInt32 q) 
{
  m_queueSize = q;
}

UInt32 BackgroundLogger::GetQueueSize() const
{
  return m_queueSize;
}

BackgroundLogger::~BackgroundLogger()
{
  spdlog::shutdown();
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
