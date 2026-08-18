// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FILELOGGER_H
#define FILELOGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "ILogger.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class FileLogger
 * @brief By default, a new log file is created for each FileLogger instance.
 * Append mode is currently not supported.
 */
class SLXIO_APIEXPORT FileLogger final : public ILogger
{
public:
    FileLogger() = default;
    /* Explicit constructor: if no name is provided, a default name
     * and default path are set by the logger. this option provides flexibility
     * to override the default logging file sink in different cases.*/
    explicit FileLogger(const std::string& fileName = "slxio.log");
    ~FileLogger() noexcept;

    /* Create the file if not already exists*/
    void Init() override;
    void Log(const ILogMessage& msg) override;

    void SetLogLevel(LogLevelType level) override;
    LogLevelType GetLogLevel() const override;

private:
    std::string m_fileName;
    LogLevelType m_logLevel;
    std::ofstream m_file;
    mutable std::mutex m_mutex;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // FILELOGGER_H