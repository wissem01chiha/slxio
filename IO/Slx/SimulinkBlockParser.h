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

#ifndef SIMULINKBLOCKPARSER_H
#define SIMULINKBLOCKPARSER_H


#include "ABINamespace.h"
#include "APIExport.h"
#include "SimulinkBlock.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief  Parser for Simulink blocks
 * @code{.xml}
 *<Block BlockType="Scope" Name="Scope" SID="2">
    <P Name="Ports">[1]</P>
    <P Name="Position">[360, 139, 390, 171]</P>
    <P Name="ZOrder">2</P>
    <P Name="ScopeSpecificationString">Simulink.scopes</P>
    <P Name="NumInputPorts">1</P>
    <P Name="Floating">off</P>
  </Block>
 * @endcode
 */
class APIEXPORT SimulinkBlockParser final : public SimulinkParserBase {
public:
  SimulinkBlockParser();
  ErrorCode setInputData(void *data) override;
  std::shared_ptr<SimulinkElementBase> getDataObject() const override;
  ErrorCode parse() override;
  ~SimulinkBlockParser() = default;

private:
  std::shared_ptr<SimulinkBlock> ptr_;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END 

#endif // SIMULINKBLOCKPARSER_H