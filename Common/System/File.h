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

#ifndef FILE_H
#define FILE_H

#include "APIExport.h"
#include "ErrorCode.h"
#include "Type.h"
#include <memory>
#include <string>
#include <vector>

/**
 * @brief Cross‑platform file abstraction.
 * @details Provides a modern C++ interface over libuv routines with additional
 * file manipulation helpers. Designed as a lightweight alternative to the
 * C++17 <filesystem> utilities for compilers or platforms that do not support,
 * or prefer not to rely on, C++17 or third‑party dependencies (e.g.,
 * Boost::filesystem), which can be heavy to integrate or vendor. Supports basic
 * file operations such as open, read, write, rename, move, and close.
 */
class APIEXPORT File final {
public:
  /// @brief File access modes.
  enum Mode { Truncate, Append, Read, Write };

  /// @brief Default constructor. Creates an empty File object.
  File() = default;

  /// @brief Construct a File object from a path string.
  File(const std::string &path, Mode mode = Read);

  /// @brief Construct a File object from a C‑string path.
  File(const char *path, Mode mode = Read);

  /// @brief Copy constructor.
  File(const File &fs);

  /// @brief Copy assignment operator.
  File &operator=(const File &other) noexcept;

  /// @brief Move assignment operator.
  File &operator=(File &&other) noexcept;

  /// @brief Move constructor.
  File(File &&other) noexcept;

  /// @brief Check if the given path is an exsiting file.
  static bool isFile(const char *path);

  /// @brief Check if the given path is an exsiting file.
  static bool isFile(const std::string &path);

  /// @brief Member function version of isFile
  bool isFile();

  /// @brief Open the file with the initialized mode.
  ErrorCode open();

  /// @brief Read data from the file into the internal buffer.
  ErrorCode read();

  /// @brief Write data to the file.
  ErrorCode write(const char *message);

  /// @brief Close the file descriptor.
  ErrorCode close();

  /// @brief Copy the current file content to another file.
  /// @note If the destination file is not open, it will be opened
  /// automatically.
  ErrorCode copy(File &ofile);

  /// @brief Rename the file.
  /// @warning The old name will be lost with no backup.
  ErrorCode rename(const char *filename);

  /// @brief Get the filename component of the path.
  const std::string getFilename();

  /// @brief Get the file access mode as an integer type.
  /// as defined in "fcntl.h" standard header, not as the
  /// File::Mode data type
  const int getFileMode();

  /// @brief Get the file access mode as a human‑readable string.
  const char *getFileModeAsChar();

  /// @brief Check if the end of file has been reached.
  bool eof() const;

  /// @brief Get the internal data buffer.
  std::vector<char> getBuffer();

  /// @brief Get the number of bytes read or written.
  size_t getNBytes() const;

  /// @brief Move the file to another directory.
  /// @details Updates the internal path_ attribute.
  ErrorCode move(const char *dirpath);

  /// @brief Get the parent directory path.
  /// @example "rootdir/filename.txt" -> "rootdir/"
  /// @note if no parent directory found eg "filename.txt"
  /// return "."
  std::string getFileDirectory();

  /// @brief Get the file extension.
  const char *getFileExtension() const;

  /// @brief Set the file extension.
  /// @note If the extension is unchanged, returns ASLX_EDUPOBJ.
  /// @warning this function cast the extension on the local
  /// path_ refrence, without touching the filesystem, so
  /// we can run on dangling refrence to the file --> will be decapreed
  /// in new versions, DO NOT USE it only for libzip compatibilty
  ErrorCode setFileExtension(const char *ext);

  /// @brief for zip archives (e.g., ".zip" file extensions),
  /// extracts the current file to the given directory path.
  /// @note Checks whether the provided path is a valid directory
  ///       using the Directory class utility.
  /// @note this function right now do not check the validity of the
  /// given path as a system directory
  ErrorCode unzip(const char *dir);

  /// @brief Replace the current file in a compressed ZIP archive
  ///        (e.g., "archive.zip").
  /// @param file Path to the target ZIP archive file.
  /// @param zname Logical entry name inside the archive to be replaced
  ///        (e.g., "simulink/blockdiagram.xml").
  /// @return ErrorCode::SLX_OK on success, or an appropriate error code
  ///         if the operation fails.
  /// @note The archive must be a valid ZIP file. It will be opened
  ///       internally by this function; the caller does not need to
  ///       open it beforehand.
  /// @note If the specified entry name @p zname does not exist in the
  ///       archive, an error is returned.
  /// @example
  /// Replace the block diagram in an SLX file with a new one:
  /// @code
  /// File f(".../path/to/new/blockdiagram.xml");
  /// f.zip("../full/path/to/archive.zip", "simulink/blockdiagram.xml");
  /// @endcode
  ErrorCode zip(const char *file, const char *zname);

  /// @brief Retrieve the size of the current file on disk.
  /// @return The file size in bytes if the file is open and valid,
  ///         or -1 if the file has not been opened.
  size_t size() const;

  /// @brief Destructor.
  ~File() = default;

private:
  std::string path_;
  Mode mode_;
  int fd_;
  std::vector<char> buffer_;
  size_t nbytes_ = 0;
};

#endif // !FILE_H
