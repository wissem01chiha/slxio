// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LOGGER_H
#define LOGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "ILogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Logger
 * @brief Provides a synchronous implementation of the
 * ILogger interface.
 */
class SLXIO_APIEXPORT Logger final : public ILogger
{
public:
    Logger() = default;
    void Init() override;
    void Log(const ILogMessage& msg) override;
    void SetLogLevel(LogLevelType level) override;
    LogLevelType GetLogLevel() const override;
    ~Logger() {};

private:
    LogLevelType m_level;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // LOGGER_H