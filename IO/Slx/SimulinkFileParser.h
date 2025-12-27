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

#ifndef SlxFilePARSER_H
#define SlxFilePARSER_H

#include "ABINamespace.h"
#include "ErrorCode.h"
#include "File.h"
#include "LibXML2.h"
#include "SimulinkParserBase.h"
#include "SlxFile.h"

/**
 * @brief to replat the SLXParser by this class
 */
class SlxFileParser : public Parser {
public:
  SlxFileParser(const File &path);
  SlxFileParser(const char *path);
  SlxFileParser(const SlxFileParser &other);
  SlxFileParser &operator=(const SlxFileParser &) = delete;

  ~SlxFileParser();
  // SimulinkErrorType open();
  // SimulinkErrorType close();
  bool isEOF() const;

  // SimulinkErrorType load(const std::string &name, void *buffer, size_t size);
  // SimulinkErrorType load();
  // SimulinkErrorType copy(SimulinkFile &destFile) const;
  // const char *get_extension() const;
  // SimulinkErrorType cast_extension();
  ErrorCode extract();
  void info();

private:
  std::vector<char> buffer_;
  bool isZip = 0;
  bool isSLX = 0;
  bool isMDL = 0;
  bool isOpen;
  bool isClose;
  std::time_t date = 0;
  uint32 filecount;
#ifdef PLATFORM_WIN32
  WIN32_FIND_DATAW entry;
#endif
  uint32 validentry;
  uint32 get_file_count();
  ErrorCode check_extension();
  const char *get_extension(const char *fPath) const;
  ErrorCode extract_to(const char *dir);
};

#endif // SlxFilePARSER_H