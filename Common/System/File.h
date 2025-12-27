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

#include "APIExport.h"
#include "Compiler.h"
#include "ErrorCode.h"
#include "Libuv.h"
#include "Type.h"
#include <memory>
#include <string>
#include <vector>

/**
 * @brief Cross‑platform File abstraction.
 * @details Provides a modern C++ interface over libuv routines with additional
 * file manipulation helpers. Designed as a lightweight alternative to the
 * C++17 <filesystem> utilities.
 * Supports basic file operations such as open, read, write, rename, move, and
 * close. Also provides helpers for stream‑based and memory‑mapped I/O.
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

  /// @brief Get the file access mode as an index type.
  const Index getFileMode();

  /// @brief Get the file access mode as a human‑readable string.
  const char *getFileModeAsChar();

  /// @brief Check if the end of file has been reached.
  bool eof();

  /// @brief Get the internal data buffer.
  std::vector<char> getBuffer();

  /// @brief Get the number of bytes read or written.
  size_t getNBytes() const;

  /// @brief Move the file to another directory.
  /// @details Updates the internal path_ attribute.
  ErrorCode move(const char *dirpath);

  /// @brief Get the parent directory path.
  /// @example "rootdir/filename.txt" -> "rootdir/"
  std::string getFileDirectory();

  /// @brief Get the file extension.
  const char *getFileExtension() const;

  /// @brief Set the file extension.
  /// @note If the extension is unchanged, returns ASLX_EDUPOBJ.
  ErrorCode setFileExtension(const char *ext);

  /// @brief Add the file to a zip archive.
  ErrorCode toZip();

  /// @brief Get the file size on disk.
  /// @return File size in bytes, or -1 if not opened.
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
