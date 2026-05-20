// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef EXCUTABLEMANAGER_H
#define EXCUTABLEMANAGER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ExecutableManager
 * @brief Manages executable files and their associated metadata within the system.
 */
class SLXIO_APIEXPORT ExecutableManager final
{
public:
  ExecutableManager() = default;
  ~ExecutableManager();

private:
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // EXCUTABLEMANAGER_H