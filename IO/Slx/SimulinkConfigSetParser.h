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

#ifndef SIMULINKCONFIGSETPARSER_H
#define SIMULINKCONFIGSETPARSER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "LibXML2.h"
#include "SimulinkConfigSet.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Main Model Configuration Set Parser class.
 */
class APIEXPORT SimulinkConfigSetParser final
    : public SimulinkParserBase<xmlNodePtr, SimulinkConfigSet> {
public:
  SimulinkConfigSetParser();
  ErrorCode setInputData(const xmlNodePtr data) override;
  std::shared_ptr<SimulinkConfigSet> getDataObject() const override;
  ErrorCode parse() override;

  ~SimulinkConfigSetParser() = default;

private:
  std::shared_ptr<SimulinkConfigSet> ptr_;
  xmlNodePtr dataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKCONFIGSETPARSER_H