#include "BufferedErrorHandler.h"
#include "CommonECH.h"
#include "ErrorLogMessage.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

BufferedErrorHandler::BufferedErrorHandler() = default;

BufferedErrorHandler::~BufferedErrorHandler() = default;

void BufferedErrorHandler::SetResult(HError status)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_buffer.push_back(status);
    m_last = status;

    if (m_logger != nullptr)
    {
        ErrorLogMessage msg(status);
        m_logger->Log(msg);
    }
}

HError BufferedErrorHandler::GetLastResult() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_last;
}

std::vector<HError> BufferedErrorHandler::GetBuffer() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_buffer;
}

HError BufferedErrorHandler::SetLogger(ILogger* logger)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_logger = logger;
    return E_OK;
}

const ILogger* BufferedErrorHandler::GetLogger() const
{
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_logger;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
