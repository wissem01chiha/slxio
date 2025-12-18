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

#include "File.h"
#include "slxAPIExport.h"
#include "slxErrorCode.h"
#include "slxType.h"
#include <list>
#include <string>
#include <vector>

/**
 * @brief original version from :
 * https://github.com/scilab/scilab/blob/master/scilab/modules/fileio/includes/filemanager.hxx
 */
class SLXEXPORT slxFileManager {
public:
  static slxErrorId init();
  static slxErrorId clear();

  static Index getFileMaxID();
  static bool isOpened(const std::string &_stFilename);
  static Index getFileID(const std::string &_stFilename);
  static File *getFile(Index _iID);
  static Index getCurrentFile();
  static Index addFile(File *_file);
  static Index getFirstFreeFileID();
  static void deleteFile(Index _iID);
  static Index getOpenedCount();
  static wchar_t **getTypesAsString();
  static wchar_t **getFilenames();
  static Float *getModes();
  static std::vector<Float> getSwaps();
  static Index *getIDs();

private:
  typedef std::vector<File *> vectFile;
  static vectFile fileList;
  static Index file;
};

#endif // FILEMANAGER_H