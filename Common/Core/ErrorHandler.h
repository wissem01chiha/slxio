// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorHandlerMacro.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SLXIO_APIEXPORT UInt32 GetProjectIdentifier(HError result);
SLXIO_APIEXPORT UInt32 GetGroupIdentifier(HError result);
SLXIO_APIEXPORT UInt32 GetComponentIdentifier(HError result);
SLXIO_APIEXPORT UInt32 GetLevelIdentifier(HError result);
SLXIO_APIEXPORT UInt32 GetErrorIdentifier(HError result);

SLXIO_APIEXPORT bool IsSuccess(HError result);
SLXIO_APIEXPORT bool IsWarning(HError result);
SLXIO_APIEXPORT bool IsFatal(HError result);
SLXIO_APIEXPORT bool IsInfo(HError result);

SLXIO_APIEXPORT bool IsSameLevel(HError result1, HError result2);
SLXIO_APIEXPORT bool IsSameProject(HError result1, HError result2);
SLXIO_APIEXPORT bool IsSameGroup(HError result1, HError result2);
SLXIO_APIEXPORT bool IsSameComponent(HError result1, HError result2);

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ERRORHANDLER_H