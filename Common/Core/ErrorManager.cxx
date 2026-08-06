#include "ErrorManager.h"
#include "ErrorHandlerMacro.h"
#include "ErrorHandler.h"
#include "ErrorTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ErrorManager::ErrorManager()
{
  ringBuffer.resize(bufferSize);
}

ErrorManager& ErrorManager::GetInstance()
{
  static ErrorManager instance;
  return instance;
}

void ErrorManager::SetBufferSize(size_t new_size)
{
  std::lock_guard<std::mutex> lock(log_mutex);
  ringBuffer.resize(new_size);
  head = 0;
}

HError ErrorManager::GetLastResult(void)
{
  std::lock_guard<std::mutex> lock(log_mutex);
  for (size_t i = 0; i < bufferSize; ++i)
  {
    size_t idx = (head + bufferSize - 1 - i) % bufferSize;
    if (ringBuffer[idx] != HError())
      return ringBuffer[idx];
  }
  return E_OK;
}

HError ErrorManager::GetLastInfoResult(void)
{
  std::lock_guard<std::mutex> lock(log_mutex);
  for (size_t i = 0; i < bufferSize; ++i)
  {
    size_t idx = (head + bufferSize - 1 - i) % bufferSize;
    if (IsInfo(ringBuffer[idx]))
      return ringBuffer[idx];
  }
  return E_OK;
}

HError ErrorManager::GetLastWarningResult(void)
{
  std::lock_guard<std::mutex> lock(log_mutex);
  for (size_t i = 0; i < bufferSize; ++i)
  {
    size_t idx = (head + bufferSize - 1 - i) % bufferSize;
    if (IsWarning(ringBuffer[idx]))
      return ringBuffer[idx];
  }
  return E_OK;
}

HError ErrorManager::GetLastFatalResult(void)
{
  std::lock_guard<std::mutex> lock(log_mutex);
  for (size_t i = 0; i < bufferSize; ++i)
  {
    size_t idx = (head + bufferSize - 1 - i) % bufferSize;
    if (IsFatal(ringBuffer[idx]))
      return ringBuffer[idx];
  }
  return E_OK;
}

void ErrorManager::SetResult(HError status)
{
  UInt32 level = GetLevelIdentifier(status);
  if (level == 0)
    return;

  std::lock_guard<std::mutex> lock(log_mutex);

  ringBuffer[head] = { status = status };

  head = (head + 1) % bufferSize;
}

std::vector<HError> ErrorManager::GetBuffer()
{
  std::lock_guard<std::mutex> lock(log_mutex);
  return ringBuffer;
}

SLXIO_ABI_NAMESPACE_END
};
