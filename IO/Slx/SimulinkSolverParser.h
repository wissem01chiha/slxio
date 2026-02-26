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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef SIMULINKSOLVERPARSER_H
#define SIMULINKSOLVERPARSER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "LibXML2.h"
#include "SimulinkParserBase.h"
#include "SimulinkSolver.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkSolver Parser class.
 */
class APIEXPORT SimulinkSolverParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkSolver>
{
public:
  SimulinkSolverParser() = default;
  ErrorCode setInputData(const xmlNodePtr data) override;
  ErrorCode parse() override;
  ~SimulinkSolverParser() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKSOLVERPARSER_H