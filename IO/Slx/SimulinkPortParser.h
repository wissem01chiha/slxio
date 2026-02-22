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

#ifndef SIMULINKPORTPARSER_H
#define SIMULINKPORTPARSER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "LibXML2.h"
#include "SimulinkParserBase.h"
#include "SimulinkPort.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief This class is responsible for building the ports of Simulink blocks as
 * defined in the SLX file, i.e. add the ports to a partially constructed model.
 * This class does not maintain state but is implemented in a non-static way to
 * match the implementation of  SimulinkLineParser.
 */
class APIEXPORT SimulinkPortParser final
    : public SimulinkParserBase<xmlNodePtr, SimulinkPort> {
public:
  SimulinkPortParser();

  ErrorCode setInputData(const xmlNodePtr data) override;
  std::shared_ptr<SimulinkPort> getOutputData() const override;
  ErrorCode parse() override;

  ~SimulinkPortParser() = default;

private:
  std::shared_ptr<SimulinkPort> ptr_;
  xmlNodePtr dataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKPORTPARSER_H