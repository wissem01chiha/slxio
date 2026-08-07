#include "BackgroundLogger.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

void BackgroundLogger::Log(const ILogMessage &msg) {}

void BackgroundLogger::SetLogLevel(LogLevelType level) {}

LogLevelType BackgroundLogger::GetLogLevel() const { return m_level; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio