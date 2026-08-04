// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RESULTHANDLER_H
#define RESULTHANDLER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "ResultMap.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SLXIO_APIEXPORT UInt32 GetProjectIdentifier(SResult result);
SLXIO_APIEXPORT UInt32 GetGroupIdentifier(SResult result);
SLXIO_APIEXPORT UInt32 GetComponentIdentifier(SResult result);
SLXIO_APIEXPORT UInt32 GetLevelIdentifier(SResult result);
SLXIO_APIEXPORT UInt32 GetErrorIdentifier(SResult result);

SLXIO_APIEXPORT bool IsSuccess(SResult result);
SLXIO_APIEXPORT bool IsWarning(SResult result);
SLXIO_APIEXPORT bool IsFatal(SResult result);
SLXIO_APIEXPORT bool IsInfo(SResult result);

SLXIO_APIEXPORT bool IsSameLevel(SResult result1, SResult result2);
SLXIO_APIEXPORT bool IsSameProject(SResult result1, SResult result2);
SLXIO_APIEXPORT bool IsSameGroup(SResult result1, SResult result2);
SLXIO_APIEXPORT bool IsSameComponent(SResult result1, SResult result2);

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RESULTHANDLER_H
