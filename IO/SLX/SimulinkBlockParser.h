// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCKPARSER_H
#define SIMULINKBLOCKPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Libxml2.h"
#include "SimulinkBlock.h"
#include "SimulinkParserBase.h"

namespace slxio
{
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
class SLXIO_APIEXPORT SimulinkBlockParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkBlock>
{
public:
  SimulinkBlockParser() = default;
  HError setInputData(const xmlNodePtr data) override;
  HError parse() override;
  ~SimulinkBlockParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKBLOCKPARSER_H
