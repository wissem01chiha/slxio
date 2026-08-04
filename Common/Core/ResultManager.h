// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RESULTMANAGER_H
#define RESULTMANAGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 *
 */
class SLXIO_APIEXPORT ResultManager final
{
private:
  static const size_t BUFFER_SIZE = 500; // Keep last 500 warnings/infos
  std::vector<SResult> ringBuffer;
  size_t head = 0;
  std::mutex log_mutex;

  // Private constructor for Singleton pattern
  ResultManager() { ringBuffer.resize(BUFFER_SIZE); }

public:
  static ResultManager& GetInstance();

  // change the buffer size if needed, but be aware of memory usage and performance implications
  void SetBufferSize(size_t new_size);

  /** Retrieves the last error code value.
   * it returns code whatever recorded, for fine grain control or filtering
   * see GetLastInfoResult() or GetLastWarningResult() for more specific retrieval
   */
  SResult GetLastResult(void);
  SResult GetLastInfoResult(void);
  SResult GetLastWarningResult(void);
  SResult GetLastFatalResult(void);

  // Thread-safe method accessible by ANY class or method
  void SetResult(SResult status);

  // Retrieve full log for analysis or telemetry transmission
  std::vector<SResult> DumpLogs()
  {
    std::lock_guard<std::mutex> lock(log_mutex);
    return ringBuffer; // In production, sort this by timestamp before returning
  }
};

SLXIO_ABI_NAMESPACE_END
};

#endif // RESULTMANAGER_H