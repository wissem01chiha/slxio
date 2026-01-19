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

#ifndef SIMUMINKMODELPARSER_H
#define SIMUMINKMODELPARSER_H

#include "ABINamespace.h"
#include "LibXML2.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "SimulinkModel.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief model Parser class.
 * This class is responsible for constructing the complete model representation,
 * including Simulink components, Stateflow charts, configuration sets, model
 * libraries (if present), and the data dictionary. It serves as the top-level
 * orchestrator for assembling all model elements from external sources such as
 * XML, JSON, or other supported formats.
 */
class SimulinkModelParser : public SimulinkParserBase<xmlNodePtr, SimulinkModel> {
public:
  SimulinkModelParser();

  ErrorCode setInputData(const xmlNodePtr data) override;
  std::shared_ptr<SimulinkModel> getDataObject() const override;
  ErrorCode parse() override;

  ~SimulinkModelParser() = default;

private:
  std::shared_ptr<SimulinkModel> ptr_;
  xmlNodePtr dataObject;
 
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMUMINKMODELPARSER_H