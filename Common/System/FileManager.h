// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FILEMANAGER_H
#define FILEMANAGER_H

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
 * @class FileManager
 * @brief A singleton class for managing multiple files.
 */
class SLXIO_APIEXPORT FileManager final
{
public:
  /** Default constructor. */
  FileManager();

  /** Default destructor. */
  ~FileManager() = default;

  /** Deleted copy constructor. */
  FileManager(const FileManager&) = delete;

  /** Deleted copy assignment operator. */
  FileManager& operator=(const FileManager&) = delete;

  /** Deleted move constructor. */
  FileManager(FileManager&& other) = delete;

  /** Deleted move assignment operator. */
  FileManager& operator=(FileManager&& other) = delete;

  /** Construct a FileManager with an initial set of files. */
  FileManager(std::vector<std::shared_ptr<File>> files);

  /** Get the unique Id of a file by its name. */
  IdType GetFileId(const std::string& filename) const;

  /** Get the maximum file Id currently in use. */
  IdType GetFileMaxId() const;

  /** Find the first available free file ID. */
  IdType GetFirstFreeFileId();

  /** Retrieve a file by its Id. */
  std::shared_ptr<File> GetFile(IdType id) const;

  /** Check if a file with the given name is opened. */
  bool IsOpened(const std::string& filename);

  /** Add a new file to the manager. */
  ReturnType Add(std::shared_ptr<File> file);

  /** Remove a file by its Id. */
  ReturnType Remove(const IdType id);

  /** Clear all managed files. */
  ReturnType Clear();

  /** Get the number of currently opened files. */
  UInt32 GetOpenedCount();

  /** Get the names of all managed files. */
  std::vector<std::string> GetFileNames();

  /** Get the modes of all managed files. */
  std::vector<int> GetFileModes() const;

  /** Get the IDs of all managed files. */
  std::vector<IdType> GetFileIds() const;

  /** Get the directories of all managned files */
  std::vector<Directory> GetFileDirectories() const;

private:
  std::vector<std::shared_ptr<File>> FileBuffer;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // FILEMANAGER_H
