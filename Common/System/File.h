// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FILE_H
#define FILE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <string>
#include <vector>

class Directory;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class File
 * @brief Cross‑platform file system abstraction.
 */
class APIEXPORT File final
{
public:
  /**
   * File access modes.
   */
  enum Mode
  {
    TRUNCATE,
    APPEND,
    READ,
    WRITE
  };

  /** Default constructor. */
  File() = default;

  /** Construct a File object from a path string */
  File(const std::string& path);

  /** Construct a File object from a C‑string path. */
  File(const char* path);

  /** Copy constructor. */
  File(const File& other);

  /** Copy assignment operator. */
  File& operator=(const File& other) noexcept;

  /** Move constructor. */
  File(File&& other) noexcept;

  /** Move assignment operator. */
  File& operator=(File&& other) noexcept;

  /** Check if the given path is an existing file. */
  static bool IsFile(const char* path);

  /** Check if the given path is an existing file. */
  static bool IsFile(const std::string& path);

  /** Member function version of IsFile. */
  bool IsFile();

  /** Const member function version of IsFile. */
  bool IsFile() const;

  /** Open the file with the initialized mode. */
  ReturnType Open();

  /** Read data from the file into the internal buffer. */
  ReturnType Read();

  /** Write data to the file. */
  ReturnType Write(const char* message);

  /** Close the file descriptor. */
  ReturnType Close();

  /** Copy the current file content to another file. */
  ReturnType Copy(File& otherFile);

  /** Copy the current file content to another directory. */
  ReturnType Copy(const char* destDir);

  /** Rename the file. */
  ReturnType Rename(const char* filename);

  /** Get the filename component of the path. */
  const std::string GetFileName();

  /** Get the full file path. */
  const std::string& GetFilePath() const;

  /** Get the file access mode as an integer (fcntl.h style). */
  const int GetFileMode();

  /** Check if the end of file has been reached. */
  bool Eof() const;

  /** Get the internal data buffer. */
  std::vector<char> GetInternalBuffer();

  /** Get the number of bytes read or written. */
  size_t GetNumberOfBytes() const;

  /** Move the file to another directory. */
  UInt32 Move(const char* dirPath);

  /** Get the parent directory path. */
  std::string GetFileDirectory();

  /** Get the file extension. */
  const char* GetFileExtension() const;

  /** Set the file extension. */
  UInt32 SetFileExtension(const char* ext);

  /** Extract the current file if it is a ZIP archive. */
  UInt32 Unzip(const char* dir);

  /** Replace the current file in a compressed ZIP archive. */
  UInt32 Zip(const char* file, const char* entryName);

  /** Retrieve the size of the current file on disk. */
  size_t Size() const;

  /** Destructor. */
  ~File() = default;

private:
  std::string FilePath;
  Mode FileMode;
  int FileDescriptor;
  std::vector<char> InternalBuffer;
  size_t NumberOfBytes = 0;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* FILE_H */
