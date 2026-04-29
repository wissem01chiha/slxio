// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKFILEPARSER_H
#define SIMULINKFILEPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorTypes.h"
#include "File.h"
#include "SimulinkFile.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @class SimulinkFileParser
/// @brief Parses and constructs a SimulinkFile instance from an input
/// file. This class is responsible for reading a Simulink file and
/// building both its metadata (as defined in SimulinkFileBase) and
/// its content representation. Parsing of the files internal
/// subdocuments is delegated to SimulinkContentParser, which extracts
/// and organizes the relevant data. The builder then fills the
/// metadata fields and content pointers required to produce a
/// complete SimulinkFile object.
class SimulinkFileParser final : public SimulinkParserBase<File, SimulinkFile>
{
public:
  SimulinkFileParser() = default;
  ReturnType setInputData(const File fs) override;
  ReturnType parse() override;
  ~SimulinkFileParser() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKFILEPARSER_H
