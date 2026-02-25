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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef SIMULINKCONTENTPARSER_H
#define SIMULINKCONTENTPARSER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "Directory.h"
#include "ErrorCode.h"
#include "File.h"
#include "SimulinkContent.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Parser for SimulinkContent
class APIEXPORT SimulinkContentParser
  : public SimulinkParserBase<File, SimulinkContent>
{
public:
  SimulinkContentParser() = default;
  ErrorCode setInputData(const File fs) override;
  ErrorCode parse() override;
  ~SimulinkContentParser() = default;

private:
  /// @brief Temporary directory used for all operations.
  Directory tempDirectory;

  /// @brief Structure to map XML file paths to their corresponding
  /// xmlDocPtr targets in SimulinkContent, mapping is provided in
  /// implementation file.
  struct XmlTarget
  {
    const char* path;
    xmlDocPtr* target;
  };

  /// @brief Initialize the temporary directory, creates unique paths
  /// for the directory and the copied slx file into it.
  ErrorCode initTempDirectory();

  /// @brief Unzip the slx file into the temporary directory.
  /// cast the slx extension to zip for libzip compatibility
  ErrorCode unzip();

  /// @brief Load XML documents from the extracted slx files into the
  /// SimulinkContent object.
  ErrorCode loadXmlTargets(const std::string& tempdirfullpath);

  /// @brief delete the temporary directory and its contents,
  /// this is called at the end of the parsing process if successful
  ErrorCode clearTempDirectory();
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKCONTENTPARSER_H
