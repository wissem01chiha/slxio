// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONTENTPARSER_H
#define SIMULINKCONTENTPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Directory.h"
#include "ErrorCode.h"
#include "File.h"
#include "SimulinkContent.h"
#include "SimulinkParserBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Parser for SimulinkContent
class SLXIO_APIEXPORT SimulinkContentParser
    : public SimulinkParserBase<File, SimulinkContent>
{
public:
    SimulinkContentParser() = default;
    HError setInputData(const File fs) override;
    HError parse() override;
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
    HError initTempDirectory();

    /// @brief Unzip the slx file into the temporary directory.
    /// cast the slx extension to zip for libzip compatibility
    HError unzip();

    /// @brief Load XML documents from the extracted slx files into the
    /// SimulinkContent object.
    HError loadXmlTargets(const std::string& tempdirfullpath);

    /// @brief delete the temporary directory and its contents,
    /// this is called at the end of the parsing process if successful
    HError clearTempDirectory();
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKCONTENTPARSER_H
