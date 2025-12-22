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
#include "Platform.h"
#include "Type.h"
#include <fstream>
#include <memory>
#include <string>
#ifdef PLATFORM_WINDOWS
#include <windows.h>
#endif

/**
 * @brief Cross-platform File abstraction.
 * Provides basic file operations: open, read, write, map/unmap, rename, move.
 * Supports both stream-based and memory-mapped I/O.
 * @todo this will be crefactored to Apache Portable Runtime (APR) file API
 * library
 */
class APIEXPORT File {
public:
  enum Type {
    Unknown = 0,
    Regular,
    Directory,
    Symlink,
    BlockDevice,
    CharacterDevice,
    FIFO,
    Socket
  };

  enum Mode { Truncate, Append, Read, Write };
  File() = default;

  File(const std::string &path, Mode mode = Read);
  File(const char *path, Mode mode = Read);

  File(const File &) = delete;
  File &operator=(const File &) = delete;

  File &operator=(File &&other) = delete;
  File(File &&other) = delete;

  /// @brief move it into the internal stream_ member.
  ErrorCode setInputStream(std::fstream &stream);

  /// @brief Open the specified file with given mode
  /// @note set the internal mode and file size
  ErrorCode open(File::Mode mode);

  /**
   * @brief Lazy file reader routine.
   * @details If the file is memory‑mapped, copy directly from the mapped
   * region. Otherwise, fall back to buffered I/O using std::fstream. Copies up
   * to @p buffsize bytes from the mapped view (or stream) into the internal
   * buffer. If the file is larger than @p buffsize, only the first chunk is
   * copied. To read the entire file, call read() repeatedly while advancing the
   * offset or processing successive chunks.
   * @note  This method does not automatically check or enforce full file size
   * coverage.
   */
  ErrorCode read(size_t buffsize = 65536);

  /// @brief Write data to the specified file region
  /// fsize_
  ErrorCode write(const char *message);

  /// @brief Close specified file.
  ErrorCode close();

  /// @brief Copy the specified file to another file.
  ErrorCode copy();

  /// @brief Append the specified file to another file.
  ErrorCode append();

  /**
   * @brief Rename the specified file.
   * @warning The old name will be lost with no backup, use with precaution.
   * @example path_ = "rootdir/filename.txt" -> path_ =
   * "rootdir/newfilename.csv"
   */
  ErrorCode rename(const char *filename);

  /// @brief Get the file name
  const std::string getFilename();

  /// @brief Get file acces mode as index type
  const Index getFileMode();

  /// @brief Get the file type
  std::string getFileType();

  /// @brief for compatibilty with old C APIs
  const char *getFileTypeAsChar();

  /**
   * @brief Check if we are at the end of the file.
   * @details This function operates only in stream mode.
   */
  bool eof();

  /// @brief Get Pointer to data buffer
  const char *getData();

  /// @brief Number of bytes actually read or written
  size_t getNBytes() const;

  /// @brief Swap tow File objects
  ErrorCode swap(File &other) noexcept;

  /// @brief for compatibilty
  Float getFileSwap() const;

  /// @brief Get file extension
  const char *getFileExtension() const;

  /// @brief Get file Parent directory path
  /// @example "rootdir/filename.txt" -> "rootdir/"
  std::string getFileDirectory();

  /// @brief move the file to other directory
  /// @details update path_ attribute
  /// @todo add a check if the given directory is fine
  /// and the file exsits in it-> add spec ErrorCode
  ErrorCode move(const char *dirpath);

  /// @brief Cast file extension to a given one
  /// @note if it the same return an AlreadyExists
  ErrorCode castFileExtension(const char *ext);

  /// @brief Get file size on disc in bytes
  size_t size() const;

  /// @brief Add the file to a given zip archive
  ErrorCode toZip();

  ~File() = default;

private:
  /**
   * @brief Map file to memory region.
   * @param writable Indicates whether the file should be mapped
   * as read‑only (false) or read‑write (true).
   */
  ErrorCode map(bool writable = false);

  /// @brief Delete file mapping
  ErrorCode unmap();

  File::Mode mode_;
  File::Type type_;
  std::fstream stream_;
  std::string path_;
  /// @brief The buffer to store the data to.
  void *buffer;
  /// @brief default 64KB buffer
  size_t buffsize_ = 65536;
  /// @brief Maximum buffer size allowed to allocate 100KB
  /// @note  Default fixed parameter cannot be modified by API
  size_t maxbuffsize_ = 102400;
  /// @brief the number of bytes to read
  size_t nbytes_;
  void *lpMapAddress = nullptr;
  size_t fsize_;
#ifdef PLATFORM_WINDOWS
  HANDLE hFile_ = nullptr;
  HANDLE hFileMap_ = nullptr;
  /// @brief for EOF imitation on mapped file
  size_t readOffset_ = 0;
#else
  uint8 fd_ = -1;
#endif
};
