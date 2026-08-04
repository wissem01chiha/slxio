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

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Archive;

/**
 * @class ArchiveManager
 * @brief Manages a collection of Archive objects.
 */
class SLXIO_APIEXPORT ArchiveManager final
{
public:
  /** Default Constructor */
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

  /** Get the maximum archive Id currently in use. */
  IdType GetArchiveMaxId() const;

  /** Find the first available free archive Id. */
  IdType GetFirstFreeArchiveId();

  /** Retrieve an archive by its Id. */
  std::shared_ptr<Archive> GetArchive(IdType id) const;

  /** Check if an archive with the given name is opened. */
  bool IsArchiveOpened(const std::string& archivename) const;

  /** Add a new archive to the manager. */
  ReturnType Add(std::shared_ptr<Archive> archive);

  /** Remove an archive by its Id. */
  ReturnType Remove(const IdType id);

private:
  std::vector<std::shared_ptr<Archive>> ArchiveBuffer;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ARCHIVEMANAGER_H
