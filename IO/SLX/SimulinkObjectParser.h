// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKOBJECTPARSER_H
#define SIMULINKOBJECTPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Libxml2.h"
#include "SimulinkObject.h"
#include "SimulinkParserBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Parser for SimulinkObject
 * @code{.xml}
 * <Object ObjectID="2" Version="19.0.0"
 ClassName="Simulink.SolverCC"> <P Name="DisabledProps">[]</P> <P
 Name="Description"/>
    </Object>
 * @endcode
 */
class SLXIO_APIEXPORT SimulinkObjectParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkObject>
{
public:
  SimulinkObjectParser() = default;
  SResult setInputData(const xmlNodePtr data) override;
  SResult parse() override;
  ~SimulinkObjectParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKOBJECTPARSER_H
