// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <memory>
#include <string>
#include <vector>

class File;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Directory class
 * @brief Cross-platform Directory abstraction.
 */
class SLXIO_APIEXPORT Directory final
{
public:
  /** Default constructor. */
  Directory() = default;

  /** Construct a Directory object from a UTF‑8 path string. */
  explicit Directory(const std::string& path);

  /** Open the directory and initialize member variables. */
  ReturnType Init();

  /* Add a file to this directory, it will copy the file into it on disk */
  void Add(const File& file);

  /** Remove a file from this directory. */
  void Remove(const File& file);

  /** Check if the directory contains a given file/directory, by name */
  bool Contains(std::string& entryname) const;

  /** Get subdirectories in the current directory. */
  std::vector<Directory> GetSubDirectories() const;

  /** Get files list in the subdiretcory  */
  std::vector<File> GetDirectoryFiles() const;

  /** Get a file by index.*/
  const std::shared_ptr<File> GetFile(const IdType& index) const;

  /** Get a specific file by name.*/
  const std::shared_ptr<File> GetFile(const std::string& filename) const;

  /** Get the number of files in the directory.*/
  UInt32 GetNumberOfFiles() const;

  /** Get the directory name from the full path. */
  std::string GetDirectoryName() const;

  /** Get the directory path. */
  const std::string GetDirectoryPath() const;

  /** Check if the given path is a directory. */
  static bool Exist(const std::string& path);

  /** Check if the directory is empty. */
  bool Empty() const;

  /** Check if the directory exist on disk. */
  bool Exist() const;

  /** Delete all files/subfolders inside the directory */
  ReturnType Clear();

  /** Move the directory to an other directory. */
  ReturnType Move(const Directory& directory);

  /** Delete the directory from disk */
  ReturnType Delete();

  /** Destructor. */
  ~Directory() = default;

private:
  std::string DirectoryPath;
  std::vector<File> DirectoryFileList;
  std::vector<Directory> SubDirList;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DIRECTORY_H
