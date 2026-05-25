// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSOLVERPARSER_H
#define SIMULINKSOLVERPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "LibXML2.h"
#include "SimulinkParserBase.h"
#include "SimulinkSolver.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkSolver Parser class.
 */
class SLXIO_APIEXPORT SimulinkSolverParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkSolver>
{
public:
  SimulinkSolverParser() = default;
  ReturnType setInputData(const xmlNodePtr data) override;
  ReturnType parse() override;
  ~SimulinkSolverParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKSOLVERPARSER_H
