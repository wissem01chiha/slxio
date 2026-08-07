// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ASYNCLOGGER_H
#define ASYNCLOGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "ILogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ASyncLogger
 * @brief Provides a Asynchronous implementation of the ILogger interface,
 * asynchronous logging don't block the caller's process, pushes the raw logs
 * messages to a background thread enqueue the message and return immediately, while
 * another thread flushes logs to the destination.
 */
class ASyncLogger final : public ILogger
{
public:
  ASyncLogger() = default;
  void Log(const ILogMessage& msg) override;
  void SetLogLevel(LogLevelType level) override;
  LogLevelType GetLogLevel() const override;
  ~ASyncLogger(){};

private:
  LogLevelType m_level;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ASYNCLOGGER_H