// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONTENTPARSER_H
#define SIMULINKCONTENTPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Directory.h"
#include "ErrorTypes.h"
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
  ReturnType setInputData(const File fs) override;
  ReturnType parse() override;
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
  ReturnType initTempDirectory();

  /// @brief Unzip the slx file into the temporary directory.
  /// cast the slx extension to zip for libzip compatibility
  ReturnType unzip();

  /// @brief Load XML documents from the extracted slx files into the
  /// SimulinkContent object.
  ReturnType loadXmlTargets(const std::string& tempdirfullpath);

  /// @brief delete the temporary directory and its contents,
  /// this is called at the end of the parsing process if successful
  ReturnType clearTempDirectory();
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKCONTENTPARSER_H
