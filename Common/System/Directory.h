// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef Directory_h__
#define Directory_h__

#include "APIExportMacro.h"
#include "ABINamespaceMacro.h"
#include "PlatformTypes.h"

#include <map>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class File;

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
  int Open();

  /// @brief Remove the directory and its contents recursively.
  int Remove();

  /// @brief Get the number of files in the directory.
  /// @return Number of files, or -1 if the directory could not be
  /// opened.
  size_t GetNumberOfFiles() const;

  /// @brief Get a file by index.
  /// @param index Position of the file in the list.
  /// @return Pointer to the File object at the given index.
  const File* GetFile(const size_t& index) const;

  /// @brief Get a specific file by name.
  /// @param filename Name of the file to retrieve.
  /// @return Pointer to the File object if found, otherwise nullptr.
  const File* GetFile(const std::string& filename) const;

  /// @brief Get the current working directory.
  static const char* GetCurrentDirectory();

  /// @brief Get the system temporary directory.
  /// create and return a system unique temporary directory name
  /// prefix is optional, if given the temporary directory
  /// will start with the given prefix
  /// returns nullptr on failure
  /// @note only relative directory name is computed
  static const char* GetTemporaryDirectory(const char* prefix = "");

  /// @brief Check if the given path is a directory.
  static bool IsDirectory(const char* path);

  /// @brief Check if the given path is a directory (std::string
  /// variant).
  static bool IsDirectory(const std::string& path);

  /// @brief Get subdirectories in the current directory.
  std::vector<Directory> getSubDirectories();

  /// @brief Get the directory name from the full path.
  std::string GetDirectoryName();

  /// @brief Get the directory path.
  const std::string& GetDirectoryPath() const;

  /// @brief Check if the directory is empty.
  bool Empty();

  /// @brief Compress the directory content into a ZIP archive.
  /// @details Output file will be named <dirname>.zip.
  /// if the new archive name is given it will assume same as parent
  /// directory
  UInt32 Zip(const char* dir = "");

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
  static UInt32 Mkdir(const char* dir);

  /// @brief Destructor.
  ~Directory() = default;

private:
  std::string path_;
  std::vector<File> filelist;
  std::vector<Directory> subdirlist_;
  std::map<std::string, File> filemap;
  std::map<std::string, Directory> subdirs_;
};


SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* Directory_h__ */
