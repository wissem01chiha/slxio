#include "ResultManager.h"
#include "CoreMacro.h"
#include "ResultHandler.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ResultManager::ResultManager()
{
  ringBuffer.resize(bufferSize);
}

ResultManager& ResultManager::GetInstance()
{
  static ResultManager instance;
  return instance;
}

void ResultManager::SetBufferSize(size_t new_size)
{
  std::lock_guard<std::mutex> lock(log_mutex);
  ringBuffer.resize(new_size);
  head = 0;
}

SResult ResultManager::GetLastResult(void)
{
  std::lock_guard<std::mutex> lock(log_mutex);
  for (size_t i = 0; i < bufferSize; ++i)
  {
    size_t idx = (head + bufferSize - 1 - i) % bufferSize;
    if (ringBuffer[idx] != SResult())
      return ringBuffer[idx];
  }
  return E_OK;
}

SResult ResultManager::GetLastInfoResult(void)
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

SResult ResultManager::GetLastWarningResult(void)
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

SResult ResultManager::GetLastFatalResult(void)
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

void ResultManager::SetResult(SResult status)
{
  UInt32 level = GetLevelIdentifier(status);
  if (level == 0)
    return;

  std::lock_guard<std::mutex> lock(log_mutex);

  ringBuffer[head] = { status = status };

  head = (head + 1) % bufferSize;
}

std::vector<SResult> ResultManager::GetBuffer()
{
  std::lock_guard<std::mutex> lock(log_mutex);
  return ringBuffer;
}

SLXIO_ABI_NAMESPACE_END
};
