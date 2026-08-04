// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FILE_H
#define FILE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <string>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Directory;

/**
 * @class File
 * @brief Cross‑platform file system abstraction.
 */
class SLXIO_APIEXPORT File final
{
public:
  /** File access modes. */
  enum class Mode
  {
    Read,
    Write,
    Append,
    Truncate
  };

  /** Construct a File with path and mode. */
  File(const std::string& path, Mode mode);

  /** Construct a File with path only. */
  explicit File(const std::string& path);

  /** Open the file. */
  SResult Open();

  /** Close the file. */
  SResult Close();

  /** Read data from the file. */
  SResult Read();

  /** Check if a path exists as a file. */
  static bool Exist(const std::string& path);

  /** Check if file is empty. */
  bool Empty() const;

  /** Get full file path. */
  std::string GetFilePath() const;

  /** Get filename from path. */
  const std::string GetFileName() const;

  /** Check if current file exists. */
  bool Exist() const;

  /** Write string data to file. */
  SResult Write(const char* message);

  /** Write vector of strings to file. */
  SResult Write(std::vector<std::string>& message);

  /** Copy file to a directory. */
  SResult Copy(const Directory& directory);

  /** Rename the file. if not opened */
  SResult Rename(const std::string& filename);

  /** Get file mode flags. */
  const int GetFileMode();

  /** Set file mode. */
  void SetFileMode(const File::Mode mode);

  /** Move file to a directory. */
  SResult Move(const Directory& directory);

  /** Delete the file from disk */
  SResult Delete();

  /** Get parent directory object. */
  Directory GetFileDirectory() const;

  /** Get the file internal buffer, after reading the file */
  std::vector<char> GetInternalBuffer() const;

  /** Check Whatever the file is still open or not */
  bool IsOpened() const;

  /** Get file size on disk. */
  UInt32 Size() const;

  /** Destructor. */
  ~File() = default;

  /** Default Constructor */
  File() = default;

private:
  std::string FilePath;
  Mode InternalFileMode;
  int FileDescriptor = -1;
  std::vector<char> InternalBuffer;
  UInt32 NumberOfBytes = 0;
  UInt32 CachedSize;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // FILE_H
