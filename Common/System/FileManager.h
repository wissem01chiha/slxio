// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "AbiNamespaceMacro.h"
#include <list>
#include <string>
#include <memory>
#include <vector>

class File;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class FileManager 
 * @brief A singleton class for managing multiple files 
 */
class SLXIO_APIEXPORT FileManager final
{
public:
  /**
   * Default Construtor
   */
  FileManager();

  /**
   * Default Destructor
   */
  ~FileManager() = default;

  /**
   * Copy Constructor 
   */
  FileManager(const FileManager&) = delete;

  /**
   * Copy Operator 
   */
  FileManager& operator=(const FileManager&) = delete;

  /**
   * Move Constructor
   */
  FileManager(FileManager&& other) = delete;

  /**
   * Move Operator 
   */
  FileManager& operator=(FileManager&& other) = delete;

  FileManager(std::vector<File*> files);
  FileManager(std::list<File*> files);

  FileManager(std::vector<std::shared_ptr<File>> files);

  /**
   * 
   */
  slxIdType GetFileId(const std::string& filename);

  /**
   * 
   */
  slxIdType GetFileMaxId();



  /**
   * 
   */
  slxIdType GetFirstFreeFileId();

  /**
   * 
   */
  File* GetFile(slxIdType _iID);

  /**
   * 
   */
  slxIdType GetCurrentFile();

  /**
   * 
   */
  bool IsOpened(const std::string& filename);

  /**
   * 
   */
  slxReturnType Add(File* _file);

  /**
   * 
   */
  slxReturnType Remove(slxIdType _iID);

  /**
   * 
   */
  slxReturnType Clear();

  UInt32 GetOpenedCount();
  wchar_t** GetTypesAsString();
  wchar_t** GetFilenames();
  Float32* GetModes();
  std::vector<Float32> GetSwaps();

  /**
   * 
   */
  slxIdType* GetFileIds();

private:
  typedef std::vector<File*> vectFile;
  static vectFile fileList;
  static UInt32 file;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // FILEMANAGER_H
