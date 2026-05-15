// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <map>
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

  /**
   * Creates the directory structure for a given entry name.
   * The entry name can be in one of the following formats:
   * - "simulink/plugin/rels/" (a directory path)
   * - "simulink/blockdiagram.xml" (a file path)
   * This function ensures that the directory structure is created up
   * to the specified root folder (`dir`). It is mainly used as a helper
   * for unzip and zip utilities in newer versions.
   * Note: This function does not validate whether the `dir` parameter
   * is an existing directory; it is the responsibility of the caller.
   */
  static ReturnType Create(const char* dir);

  /**
   * Open the directory and initialize member variables.
   * Populates the file map and file list attributes.
   */
  ReturnType Open();

  /** Remove the directory and its contents recursively. */
  ReturnType Remove();

  /** Get the number of files in the directory.*/
  UInt32 GetNumberOfFiles() const;

  /** Get a file by index.*/
  const File* GetFile(const IdType& index) const;

  /** Get a specific file by name.*/
  const File* GetFile(const std::string& filename) const;

  /** Get the current working directory. */
  static const char* GetCurrentWorkingDirectory();

  /**
   * Get the system temporary directory.
   * Creates and returns a system unique temporary directory name.
   * Prefix is optional; if given, the temporary directory will start with the
   * prefix. Returns nullptr on failure. Note: only relative directory name is
   * computed.
   */
  static const char* CreateTemporaryDirectory(const char* prefix = "");

  /** Check if the given path is a directory. */
  static bool Exist(const std::string& path);

  /** Get subdirectories in the current directory. */
  std::vector<Directory> GetSubDirectories() const;

  /** Get the directory name from the full path. */
  std::string GetDirectoryName();

  /** Get the directory path. */
  const std::string& GetDirectoryPath() const;

  /** Check if the directory is empty. */
  bool Empty() const;

  /** Check if the directory exist on disk. */
  bool Exist() const;

  /** Destructor. */
  ~Directory() = default;

private:
  std::string DirectoryPath;
  std::vector<File> DirectoryFileList;
  std::vector<Directory> SubDirList;
  std::map<std::string, File> DirectoryFileMap;
  std::map<std::string, Directory> SubDirs;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DIRECTORY_H
