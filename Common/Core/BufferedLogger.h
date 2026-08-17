// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BUFFEREDLOGGER_H
#define BUFFEREDLOGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "ILogMessage.h"
#include "ILogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class BufferedLogger
 * @brief A logger implementation that buffers log messages in memory.
 */
class SLXIO_APIEXPORT BufferedLogger : public ILogger
{
public:
    BufferedLogger();
    void Init() override;
    void Log(const ILogMessage& msg) override;
    void SetLogLevel(LogLevelType level) override;
    LogLevelType GetLogLevel() const override;

    ~BufferedLogger();

    /// @brief  prevent copy as std::unique_ptr delete his copy constructor so
    /// we just access by reference
    const std::vector<std::unique_ptr<ILogMessage>>& GetBuffer() const;

private:
    mutable std::mutex m_mutex;
    std::vector<std::unique_ptr<ILogMessage>> m_buffer;
    LogLevelType m_level{LogLevelType::LOG_INFO};
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BUFFEREDLOGGER_H
