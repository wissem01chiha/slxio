// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPORTPARSER_H
#define SIMULINKPORTPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Libxml2.h"
#include "SimulinkParserBase.h"
#include "SimulinkPort.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief This class is responsible for building the ports of Simulink
 * blocks as defined in the SLX file, i.e. add the ports to a
 * partially constructed model. This class does not maintain state but
 * is implemented in a non-static way to match the implementation of
 * SimulinkLineParser.
 */
class SLXIO_APIEXPORT SimulinkPortParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkPort>
{
public:
  SimulinkPortParser() = default;
  SResult setInputData(const xmlNodePtr data) override;
  SResult parse() override;
  ~SimulinkPortParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKPORTPARSER_H
