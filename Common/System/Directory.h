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
#include "Libuv.h"
#include <map>
#include <vector>

/**
 * @brief Directory class
 * Cross-platform Directory abstraction.
 */
class APIEXPORT Directory final {
public:
  /// @brief Default constructor
  Directory() = default;

  explicit Directory(const std::string &path);
  explicit Directory(const std::wstring &path);
  explicit Directory(const char *path);

  /// @brief support wide char -> convert to implict
  /// std::string inetranl reprsenation contin UTF8, UTF16 chars
  explicit Directory(const wchar_t *wpath);

  Directory(const Directory &dir);
  Directory &operator=(const Directory &);

  Directory(Directory &&other);
  Directory &operator=(Directory &&other) noexcept;

  ///@brief open the directory and init memeber varaibles
  /// fils filemap and filelist  attributes
  ErrorCode open();

  /// @brief Get the number of files in the directory
  /// in failed to open the directory retuen -1
  sint32 getNumberOfFiles() const;

  /// @brief Get file at index, file index is the
  /// the as the file
  const File *getFile(const size_t &index) const;

  /// @brief Get spefic file by name
  const File *getFile(const std::string &filename) const;

  /// @brief Get the current working directory
  static const char *getCurrentDirectory();

  /// @brief Check if the path is a directory
  static bool isDirectory(const char *path);

  /// @brief varient with modern string
  static bool isDirectory(const std::string &path);

  /// @brief Get sub-directories in the current directory
  std::vector<Directory> getSubDirectories();

  /// @brief Get directory name from full path
  std::string getDirectoryName();

  /// @brief Check if the directory is empty
  bool empty();

  /// @brief Compress the directory content in zip format
  /// output dirname.zip
  ErrorCode toZip();

  ~Directory() = default;

private:
  std::string path_;
  std::vector<File> filelist;
  std::vector<Directory> subdirlist_;
  std::map<std::string, File> filemap;
  std::map<std::string, Directory> subdirs_;
};

#endif // DIRECTORY_H