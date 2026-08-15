// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IERRORHANDLER_H
#define IERRORHANDLER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "ILogger.h" 
#include "CorePCH.h"   

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class IErrorHandler
 * @brief Abstract interface for error handling strategies.
 */
class SLXIO_APIEXPORT IErrorHandler
{
public:
    virtual ~IErrorHandler() = default;

    /// Record a new error/status result
    virtual void SetResult(HError status) = 0;

    /// Retrieve the last recorded error
    virtual HError GetLastResult() const = 0;

    /// Retrieve the full buffer/log of errors
    virtual std::vector<HError> GetBuffer() const = 0;

    /// Attach a logger sink (ILogger interface)
    virtual HError SetLogger(ILogger* logger) = 0;

    /// Get the current logger sink
    virtual const ILogger* GetLogger() const = 0;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IERRORHANDLER_H
