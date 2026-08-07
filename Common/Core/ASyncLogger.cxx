#include "ASyncLogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

void ASyncLogger::Log(const ILogMessage& msg) {}

void ASyncLogger::SetLogLevel(LogLevelType level) {}

LogLevelType ASyncLogger::GetLogLevel() const
{
  return m_level;
}

SLXIO_ABI_NAMESPACE_END
};