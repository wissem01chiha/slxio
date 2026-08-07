#include "ErrorManager.h"
#include "ErrorHandler.h"
#include "ErrorHandlerMacro.h"
#include "ErrorTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ErrorManager::ErrorManager() {
  m_ringBuffer.resize(m_bufferSize);
  m_logger = nullptr;
}

ErrorManager &ErrorManager::GetInstance() {
  static ErrorManager instance;
  return instance;
}

void ErrorManager::SetBufferSize(size_t new_size) {
  std::lock_guard<std::mutex> lock(m_logMutex);
  m_ringBuffer.resize(new_size);
  head = 0;
}

HError ErrorManager::GetLastResult(void) {
  std::lock_guard<std::mutex> lock(m_logMutex);
  for (size_t i = 0; i < m_bufferSize; ++i) {
    size_t idx = (head + m_bufferSize - 1 - i) % m_bufferSize;
    if (m_ringBuffer[idx] != HError())
      return m_ringBuffer[idx];
  }
  return E_OK;
}

HError ErrorManager::GetLastInfoResult(void) {
  std::lock_guard<std::mutex> lock(m_logMutex);
  for (size_t i = 0; i < m_bufferSize; ++i) {
    size_t idx = (head + m_bufferSize - 1 - i) % m_bufferSize;
    if (IsInfo(m_ringBuffer[idx]))
      return m_ringBuffer[idx];
  }
  return E_OK;
}

HError ErrorManager::GetLastWarningResult(void) {
  std::lock_guard<std::mutex> lock(m_logMutex);
  for (size_t i = 0; i < m_bufferSize; ++i) {
    size_t idx = (head + m_bufferSize - 1 - i) % m_bufferSize;
    if (IsWarning(m_ringBuffer[idx]))
      return m_ringBuffer[idx];
  }
  return E_OK;
}

HError ErrorManager::GetLastFatalResult(void) {
  std::lock_guard<std::mutex> lock(m_logMutex);
  for (size_t i = 0; i < m_bufferSize; ++i) {
    size_t idx = (head + m_bufferSize - 1 - i) % m_bufferSize;
    if (IsFatal(m_ringBuffer[idx]))
      return m_ringBuffer[idx];
  }
  return E_OK;
}

void ErrorManager::SetResult(HError status) {
  UInt32 level = GetLevelIdentifier(status);
  if (level == 0)
    return;

  std::lock_guard<std::mutex> lock(m_logMutex);

  m_ringBuffer[head] = {status = status};

  head = (head + 1) % m_bufferSize;
}

std::vector<HError> ErrorManager::GetBuffer() {
  std::lock_guard<std::mutex> lock(m_logMutex);
  return m_ringBuffer;
}

void ErrorManager::SetLogger(const ILogger *logger) { m_logger = logger; }

const ILogger *ErrorManager::GetLogger() { return m_logger; }

void ErrorManager::EnableLogging() { m_logStatus = true; }

void ErrorManager::DisableLogging() { m_logStatus = false; }

bool ErrorManager::GetLogStatus() { return m_logStatus; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
