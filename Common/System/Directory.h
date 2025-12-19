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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "APIExport.h"
#include "File.h"
#include <vector>

/**
 * @brief Directory class
 * Cross-platform Directory abstraction.
 */
class APIEXPORT Directory {
public:
  /// @brief Default constructor
  Directory() = default;

  Directory(std::string path);
  Directory(const char *path);
  Directory(const wchar_t *path);

  Directory(const Directory &) = delete;
  Directory &operator=(const Directory &) = delete;

  Directory(Directory &&other);
  Directory &operator=(Directory &&other) = delete;

  /// @brief Get the number of files in the directory
  uint64 getNumberOfFiles() const;

  /// @brief Get file at index
  const File &getFile(Index index) const;

  /// @brief Get file at index as string
  std::string const &getFileName(Index index) const;

  /// @brief Get the current working directory
  static const char *getCurrentDirectory();

  /// @brief Get the file path at index
  std::string getFilePath(Index index) const;

  /// @brief Check if the path is a directory
  static bool isDirectory(const char *path);

  static bool isDirectory(const std::string &path);

  /// @brief Get sub-directories in the current directory
  std::vector<Directory> getSubDirectories();

  /// @brief Get directory name
  std::string getDirectoryName();

  /// @brief Check if the directory is empty
  bool empty();

  ~Directory() = default;

private:
  std::string path_;
};

#endif // DIRECTORY_H