// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DIRECTORYMANAGER_H
#define DIRECTORYMANAGER_H

#include "ApiExportMacro.h"
#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"

class File;
class Directory;
class FileManager;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DirectoryManager final 
{
public:
    DirectoryManager();
    ~DirectoryManager();
private:
};
SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DIRECTORYMANAGER_H