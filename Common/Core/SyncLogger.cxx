#include "SyncLogger.h"
#include "Loguru.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

void SyncLogger::Log(const ILogMessage& msg) {
    
    switch (m_level)
    {
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

void SyncLogger::SetLogLevel(LogLevelType level){ m_level = level; }

LogLevelType SyncLogger::GetLogLevel() const
{
  return m_level;
}

DataType SyncLogger::GetDataType() const
{
  return DataType::SLXIO_TYPE_SYNCHRONOUS_LOGGER;
}

SLXIO_ABI_NAMESPACE_END
};
