// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __ErrorManager_h__
#define __ErrorManager_h__

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorMap.h"
#include "ErrorTypes.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ErrorService
 * @brief Centralized services for error code handling and diagnostics.
 */
class APIEXPORT ErrorManager final {
public:
    /** Get the error group name. */
    static const char* GetErrorGroupName(UInt32 code);

    /** Get the error module name. */
    static const char* GetErrorModuleName(UInt32 code);

    /** Decode explicit error message. */
    static const char* GetErrorMessage(UInt32 code);

    /** Simple, thread-unsafe string form. */
    static const char* GetErrorAsChar(UInt32 code);

    /** Get last error message (thread-local recommended). */
    static const char* GetLastErrorMessage();

    /** Print formatted error code. */
    static void PrintfError(const char* format, UInt32 code);

    /** Print error code. */
    static void PrintError(UInt32 code);

    ErrorManager() = default;
    ~ErrorManager() = default;
};


SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* __ErrorManager_h__ */
