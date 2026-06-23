// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DIRECTORYMANAGER_H
#define DIRECTORYMANAGER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <memory>
#include <string>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class File;
class Directory;

/**
 * @class DirectoryManager
 * @brief A singleton class for managing multiple directories.
 */
class SLXIO_APIEXPORT DirectoryManager final
{
public:
  /** Default Constructor */
  DirectoryManager();

  /** Default destructor. */
  ~DirectoryManager() = default;

  /** Deleted copy constructor. */
  DirectoryManager(const DirectoryManager&) = delete;

  /** Deleted copy assignment operator. */
  DirectoryManager& operator=(const DirectoryManager&) = delete;

  /** Deleted move constructor. */
  DirectoryManager(DirectoryManager&& other) = delete;

  /** Deleted move assignment operator. */
  DirectoryManager& operator=(DirectoryManager&& other) = delete;

  /** Construct a DirectoryManager with an initial set of directories. */
  DirectoryManager(std::vector<std::shared_ptr<Directory>> directories);

  /** Get the names of all managed directories. */
  std::vector<std::string> GetDirectoryNames();

private:
  std::vector<std::shared_ptr<Directory>> DirectoryBuffer;
};
SLXIO_ABI_NAMESPACE_END
};

#endif // DIRECTORYMANAGER_H
