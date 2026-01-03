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
#include "ErrorCode.h"
#include "File.h"
#include "LibXML2.h"
#include "APIExport.h"
#include "SimulinkParserBase.h"
#include "SimulinkFile.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Main Simulink File Parser class 
/// @note this is an internal API, a user friendly API will 
/// be implemented to simplify access of canonical elments 
/// without need to pass with this class 
class SimulinkFileParser final : public SimulinkParserBase<File, SimulinkFile> { 
public:
  SimulinkFileParser();

  ErrorCode setInputData(const File& fs) override;
  std::shared_ptr<SimulinkFile> getDataObject() const override;
  ErrorCode parse() override;

  ~SimulinkFileParser() =default;

private:
  std::shared_ptr<SimulinkFile> ptr_;
  File fs_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKFILEPARSER_H