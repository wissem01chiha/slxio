// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BUFFEREDERRORHANDLER_H
#define BUFFEREDERRORHANDLER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IErrorHandler.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class BufferedErrorHandler
 * @brief Buffer Based Implementation of IErrorHandler Interface
 */
class SLXIO_APIEXPORT BufferedErrorHandler : public IErrorHandler
{
public:
    BufferedErrorHandler();
    void SetResult(HError status) override;
    HError GetLastResult() const override;
    std::vector<HError> GetBuffer()const  override;
    HError SetLogger(ILogger* logger) override;
    const ILogger* GetLogger() const override;
    ~BufferedErrorHandler();

private:
    mutable std::mutex m_mutex;
    std::vector<HError> m_buffer;
    HError m_last{};
    ILogger* m_logger{nullptr};

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BUFFEREDERRORHANDLER_H