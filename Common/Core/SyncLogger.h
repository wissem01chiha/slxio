// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SYNCLOGGER_H
#define SYNCLOGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "ILogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SyncLogger
 * @brief Provides a synchronous implementation of the ILogger interface.
 */
class SyncLogger final : public ILogger
{
public:
  SyncLogger() = default;
  void Log(const ILogMessage& msg) override;
  void SetLogLevel(LogLevelType level) override;
  LogLevelType GetLogLevel() const override;
  ~SyncLogger(){};

private:
  LogLevelType m_level;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SYNCLOGGER_H