#include "BufferedLogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

BufferedLogger::BufferedLogger() = default;

BufferedLogger::~BufferedLogger() = default;

void BufferedLogger::Init()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_buffer.clear();
    m_level = LogLevelType::LOG_INFO;
}

void BufferedLogger::Log(const ILogMessage& msg)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_buffer.push_back(msg.Clone());
}

void BufferedLogger::SetLogLevel(LogLevelType level)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_level = level;
}

LogLevelType BufferedLogger::GetLogLevel() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_level;
}

const std::vector<std::unique_ptr<ILogMessage>>&
BufferedLogger::GetBuffer() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_buffer;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
