// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BACKGROUNDLOGGER_H
#define BACKGROUNDLOGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "ILogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class BackgroundLogger
 * @brief Provides a Asynchronous implementation of the ILogger interface,
 * asynchronous logging don't block the caller's process, pushes the raw logs
 * messages to a background thread enqueue the message and return immediately,
 * while another thread flushes logs to the destination, by default the logger
 * init a a global thread pool with queue size of 8192 and 1 worker thread but
 * this can be adjusted via Logger functions
 */
class SLXIO_APIEXPORT BackgroundLogger final : public ILogger
{
public:
    BackgroundLogger();
    void Init() override;
    void Log(const ILogMessage& msg) override;
    void SetLogLevel(LogLevelType level) override;
    LogLevelType GetLogLevel() const override;
    void SetQueueSize(UInt32 q);
    UInt32 GetQueueSize() const;
    ~BackgroundLogger();

private:
    LogLevelType m_level = LogLevelType::LOG_INFO;
    UInt32 m_queueSize = 8192;
    UInt32 m_nthreads = 1;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // BACKGROUNDLOGGER_H