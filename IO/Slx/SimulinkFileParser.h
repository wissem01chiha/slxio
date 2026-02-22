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

#ifndef SIMULINKFILEPARSER_H
#define SIMULINKFILEPARSER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "File.h"
#include "SimulinkFile.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @class SimulinkFileParser
/// @brief Parses and constructs a SimulinkFile instance from an input file.
/// This class is responsible for reading a Simulink file and building both
/// its metadata (as defined in SimulinkFileBase) and its content
/// representation. Parsing of the files internal subdocuments is delegated to
/// SimulinkContentParser, which extracts and organizes the relevant data.
/// The builder then fills the metadata fields and content pointers required
/// to produce a complete SimulinkFile object.
class SimulinkFileParser final : public SimulinkParserBase<File, SimulinkFile> {
public:
  SimulinkFileParser();

  ErrorCode setInputData(const File fs) override;
  std::shared_ptr<SimulinkFile> getOutputData() const override;
  ErrorCode parse() override;

  ~SimulinkFileParser() = default;

private:
  std::shared_ptr<SimulinkFile> ptr_;
  File dataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKFILEPARSER_H
