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

#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "APIExport.h"
#include "ErrorCode.h"
#include "File.h"
#include "Type.h"
#include <list>
#include <string>
#include <vector>

/**
 * @brief FileManager class
 * @details
 * A singleton class that manages multiple files in the system, usful for
 * manging I/O from multiple files original version from :
 * https://github.com/scilab/scilab/blob/master/scilab/modules/fileio/includes/filemanager.hxx
 */
class APIEXPORT FileManager {
public:
  FileManager();
  ~FileManager() = default;

  FileManager(const FileManager &) = delete;
  FileManager &operator=(const FileManager &) = delete;

  FileManager(FileManager &&other) = delete;
  FileManager &operator=(FileManager &&other) = delete;

  FileManager(std::vector<File *> files);
  FileManager(std::list<File *> files);

  FileManager &operator=(std::vector<File *> files);
  FileManager &operator=(std::list<File *> files);

  FileManager(std::vector<std::shared_ptr<File>> files);

  Index getFileMaxID();
  Index getFileID(const std::string &_stFilename);
  Index getFirstFreeFileID();

  File *getFile(Index _iID);
  Index getCurrentFile();

  static bool isOpened(const std::string &_stFilename);

  Index push_back(File *_file);
  void remove(Index _iID);
  ErrorCode clear();

  Index getOpenedCount();
  wchar_t **getTypesAsString();
  wchar_t **getFilenames();
  Float *getModes();
  std::vector<Float> getSwaps();
  Index *getIDs();

private:
  typedef std::vector<File *> vectFile;
  static vectFile fileList;
  static Index file;
};

#endif // FILEMANAGER_H