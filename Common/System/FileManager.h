// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FileManager_h
#define FileManager_h

#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "ABINamespaceMacro.h"
#include <list>
#include <string>
#include <memory>
#include <vector>

class File;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class FileManager 
 * @brief A singleton class that manages multiple files in the software
 */
class APIEXPORT FileManager final
{
public:
  FileManager();
  ~FileManager() = default;

  FileManager(const FileManager&) = delete;
  FileManager& operator=(const FileManager&) = delete;

  FileManager(FileManager&& other) = delete;
  FileManager& operator=(FileManager&& other) = delete;

  FileManager(std::vector<File*> files);
  FileManager(std::list<File*> files);

  FileManager& operator=(std::vector<File*> files) = delete;
  FileManager& operator=(std::list<File*> files) = delete;

  FileManager(std::vector<std::shared_ptr<File>> files);

  /**
   * 
   */
  IdType GetFileMaxID();

  /**
   * 
   */
  IdType GetFileID(const std::string& _stFilename);

  /**
   * 
   */
  IdType GetFirstFreeFileID();

  /**
   * 
   */
  File* GetFile(IdType _iID);

  /**
   * 
   */
  IdType GetCurrentFile();

  /**
   * 
   */
  static bool IsOpened(const std::string& _stFilename);

  /**
   * 
   */
  ReturnType Add(File* _file);

  /**
   * 
   */
  ReturnType Remove(IdType _iID);

  /**
   * 
   */
  ReturnType Clear();

  UInt32 GetOpenedCount();
  wchar_t** GetTypesAsString();
  wchar_t** GetFilenames();
  Float32* GetModes();
  std::vector<Float32> GetSwaps();

  /**
   * 
   */
  IdType* GetFileIds();

private:
  typedef std::vector<File*> vectFile;
  static vectFile fileList;
  static UInt32 file;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* __FileManager_h__*/
