// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "ApiExportMacro.h"
#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include <map>
#include <vector>
#include <string>

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

  /** Construct a Directory object from a wide string path. */
  explicit Directory(const std::wstring& path);

  /** Construct a Directory object from a C‑string path. */
  explicit Directory(const char* path);

  /**
   * Construct a Directory object from a wide‑character C‑string path.
   * Internally converted to std::string representation (UTF‑8/UTF‑16 supported).
   */
  explicit Directory(const wchar_t* wpath);

  /** Copy constructor. */
  Directory(const Directory& dir);

  /** Copy assignment operator. */
  Directory& operator=(const Directory&);

  /** Move constructor. */
  Directory(Directory&& other) noexcept;

  /** Move assignment operator. */
  Directory& operator=(Directory&& other) noexcept;

  /**
   * Open the directory and initialize member variables.
   * Populates the file map and file list attributes.
   */
  ReturnType Open();

  /** Remove the directory and its contents recursively. */
  ReturnType Remove();

  /**
   * Get the number of files in the directory.
   * Returns number of files, or -1 if the directory could not be opened.
   */
  UInt32 GetNumberOfFiles() const;

  /**
   * Get a file by index.
   * @param index Position of the file in the list.
   * @return Pointer to the File object at the given index.
   */
  const File* GetFile(const size_t& index) const;

  /**
   * Get a specific file by name.
   * @param filename Name of the file to retrieve.
   * @return Pointer to the File object if found, otherwise nullptr.
   */
  const File* GetFile(const std::string& filename) const;

  /** Get the current working directory. */
  static const char* GetCurrentWorkingDirectory();

  /**
   * Get the system temporary directory.
   * Creates and returns a system unique temporary directory name.
   * Prefix is optional; if given, the temporary directory will start with the prefix.
   * Returns nullptr on failure.
   * Note: only relative directory name is computed.
   */
  static const char* GetTemporaryDirectory(const char* prefix = "");

  /** Check if the given path is a directory. */
  static bool IsDirectory(const char* path);

  /** Check if the given path is a directory (std::string variant). */
  static bool IsDirectory(const std::string& path);

  /** Get subdirectories in the current directory. */
  std::vector<Directory> GetSubDirectories();

  /** Get the directory name from the full path. */
  std::string GetDirectoryName();

  /** Get the directory path. */
  const std::string& GetDirectoryPath() const;

  /** Check if the directory is empty. */
  bool Empty();

  /**
   * Compress the directory content into a ZIP archive.
   * Output file will be named <dirname>.zip.
   * If a new archive name is given, it will assume same as parent directory.
   */
  UInt32 Zip(const char* dir = "");

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
  static UInt32 Create(const char* dir);

  /** Destructor. */
  ~Directory() = default;

private:
  std::string Path;
  std::vector<File> FileList;
  std::vector<Directory> SubDirList;
  std::map<std::string, File> FileMap;
  std::map<std::string, Directory> SubDirs;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // DIRECTORY_H 