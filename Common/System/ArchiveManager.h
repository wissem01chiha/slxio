// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ARCHIVEMANAGER_H
#define ARCHIVEMANAGER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <memory>
#include <string>
#include <vector>

class Archive;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ArchiveManager final
{
public:
  /**  */
  ArchiveManager();

  /** Default destructor. */
  ~ArchiveManager() = default;

  /** Deleted copy constructor. */
  ArchiveManager(const ArchiveManager&) = delete;

  /** Deleted copy assignment operator. */
  ArchiveManager& operator=(const ArchiveManager&) = delete;

  /** Deleted move constructor. */
  ArchiveManager(ArchiveManager&& other) = delete;

  /** Deleted move assignment operator. */
  ArchiveManager& operator=(ArchiveManager&& other) = delete;

  /** Construct a FileManager with an initial set of files. */
  ArchiveManager(std::vector<std::shared_ptr<Archive>> archives);

  /** Get the unique Id of an archive by its name. */
  IdType GetArchiveId(const std::string& archivename) const;

private:
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // ARCHIVEMANAGER_H