// Copyright 2024-2026 Wissem Chiha
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

#ifndef SIMULINKBLOCKBUILDER_H
#define SIMULINKBLOCKBUILDER_H

#include "SLXParser.h"
#include "SimulinkArrayBuilder.h"
#include "SimulinkBlock.h"
#include "SimulinkObjectBuilder.h"
#include "SimulinkParameterBuilder.h"
#include "SlxioNamespace.h"

SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief  Builder for Simulink blocks
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
class SimulinkBlockBuilder : public SLXParser<SimulinkBlock> {
public:
  SimulinkBlockBuilder();
  SimulinkErrorType build(xmlNodePtr node) override;
  std::shared_ptr<SimulinkBlock> get() override;

private:
  std::shared_ptr<SimulinkBlock> p_;
};

SLXIO_ABI_NAMESPACE_END

#endif // SIMULINKBLOCKBUILDER_H