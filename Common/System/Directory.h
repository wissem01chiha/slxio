// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "APIExportMacro.h"
#include "File.h"
#include "Libuv.h"
#include "PlatformTypes.h"
#include "ErrorTypes.h"
#include <map>
#include <vector>

/**
 * @brief Directory class
 * @details Cross-platform Directory abstraction.
 */
class APIEXPORT Directory final
{
public:
  /// @brief Default constructor.
  Directory() = default;

  /// @brief Construct a Directory object from a UTF‑8 path string.
  explicit Directory(const std::string& path);

  /// @brief Construct a Directory object from a wide string path.
  explicit Directory(const std::wstring& path);

  /// @brief Construct a Directory object from a C‑string path.
  explicit Directory(const char* path);

  /// @brief Construct a Directory object from a wide‑character
  /// C‑string path.
  /// @details Internally converted to std::string representation
  /// (UTF‑8/UTF‑16 supported).
  explicit Directory(const wchar_t* wpath);

  /// @brief Copy constructor.
  Directory(const Directory& dir);

  /// @brief Copy assignment operator.
  Directory& operator=(const Directory&);

  /// @brief Move constructor.
  Directory(Directory&& other) noexcept;

  /// @brief Move assignment operator.
  Directory& operator=(Directory&& other) noexcept;

  /// @brief Open the directory and initialize member variables.
  /// @details Populates the file map and file list attributes.
  int open();

  /// @brief Remove the directory and its contents recursively.
  int remove();

  /// @brief Get the number of files in the directory.
  /// @return Number of files, or -1 if the directory could not be
  /// opened.
  size_t getNumberOfFiles() const;

  /// @brief Get a file by index.
  /// @param index Position of the file in the list.
  /// @return Pointer to the File object at the given index.
  const File* getFile(const size_t& index) const;

  /// @brief Get a specific file by name.
  /// @param filename Name of the file to retrieve.
  /// @return Pointer to the File object if found, otherwise nullptr.
  const File* getFile(const std::string& filename) const;

  /// @brief Get the current working directory.
  static const char* getCurrentDirectory();

  /// @brief Get the system temporary directory.
  /// create and return a system unique temporary directory name
  /// prefix is optional, if given the temporary directory
  /// will start with the given prefix
  /// returns nullptr on failure
  /// @note only relative directory name is computed
  static const char* getTemporaryDirectory(const char* prefix = "");

  /// @brief Check if the given path is a directory.
  static bool isDirectory(const char* path);

  /// @brief Check if the given path is a directory (std::string
  /// variant).
  static bool isDirectory(const std::string& path);

  /// @brief Get subdirectories in the current directory.
  std::vector<Directory> getSubDirectories();

  /// @brief Get the directory name from the full path.
  std::string getDirectoryName();

  /// @brief Get the directory path.
  const std::string& getDirectoryPath() const;

  /// @brief Check if the directory is empty.
  bool empty();

  /// @brief Compress the directory content into a ZIP archive.
  /// @details Output file will be named <dirname>.zip.
  /// if the new archive name is given it will assume same as parent
  /// directory
  int zip(const char* dir = "");

  /// @brief Creates the directory structure for a given entry name.
  /// The entry name can be in one of the following formats:
  /// - "simulink/plugin/rels/" (a directory path)
  /// - "simulink/blockdiagram.xml" (a file path)
  /// This function ensures that the directory structure is created up
  /// to the specified root folder (`dir`). It is mainly used as a
  /// helper for unzip and zip utilities in newer versions.
  /// @note This function does not validate whether the `dir`
  /// parameter is an existing directory; it is the responsibility of
  /// the caller to ensure that.
  static int mkdir(const char* dir);

  /// @brief Destructor.
  ~Directory() = default;

private:
  std::string path_;
  std::vector<File> filelist;
  std::vector<Directory> subdirlist_;
  std::map<std::string, File> filemap;
  std::map<std::string, Directory> subdirs_;
};

#endif // DIRECTORY_H
