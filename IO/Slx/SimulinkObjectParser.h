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

#ifndef SIMULINKOBJECTPARSER_H
#define SIMULINKOBJECTPARSER_H

#include "ABINamespace.h"
#include "SimulinkParserBase.h"
#include "SimulinkObject.h"
#include "LibXML2.h"
#include "APIExport.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Parser for SimulinkObject
 * @code{.xml}
 * <Object ObjectID="2" Version="19.0.0" ClassName="Simulink.SolverCC">
        <P Name="DisabledProps">[]</P>
        <P Name="Description"/>
    </Object>
 * @endcode
 */
class APIEXPORT SimulinkObjectParser final : public SimulinkParserBase<xmlNodePtr> {
public:
  SimulinkObjectParser();
  ErrorCode setInputData(void *data) override;
  std::shared_ptr<SimulinkElementBase> getDataObject() const override;
  ErrorCode parse() override;
  ~SimulinkObjectParser() =default;

private:
  std::shared_ptr<SimulinkObject> ptr_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKOBJECTPARSER_H