#include "FileLogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

FileLogger::FileLogger(const std::string& fileName)
    : m_fileName(fileName), m_logLevel(LogLevelType::LOG_INFO)
{
}

void FileLogger::Init()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if (!m_file.is_open())
    {
        m_file.open(m_fileName, std::ios::out | std::ios::app);
    }
}

void FileLogger::Log(const ILogMessage& msg)
{
    std::lock_guard<std::mutex> lock(m_mutex);

    if (!m_file.is_open())
        Init();

    if (!m_file.is_open())
        return;

    m_file << msg.ToString() << std::endl;
}

void FileLogger::SetLogLevel(LogLevelType level) { m_logLevel = level; }

LogLevelType FileLogger::GetLogLevel() const { return m_logLevel; }

FileLogger::~FileLogger() noexcept = default;

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio