// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKLINEPARSER_H
#define SIMULINKLINEPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "LibXML2.h"
#include "SimulinkLine.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief This class is responsible for building the lines between
 Simulink
 * blocks as defined in the SLX file.
 * @code{.xml}
 * <Line>
    <P Name="ZOrder">116</P>
    <P Name="Src">35#out:1</P>
    <P Name="Points">[0, 0]</P>
    <P Name="Dst">54#in:1</P>
  </Line>
 * @endcode
 * 31#out:1: Block ID 31, output port 1
 * 36#in:1: Block ID 36, input port 1
 */
class APIEXPORT SimulinkLineParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkLine>
{
public:
  SimulinkLineParser() = default;
  ReturnType setInputData(const xmlNodePtr data) override;
  ReturnType parse() override;
  ~SimulinkLineParser() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKLINEPARSER_H