// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKOBJECTPARSER_H
#define SIMULINKOBJECTPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "LibXML2.h"
#include "SimulinkObject.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
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
class APIEXPORT SimulinkObjectParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkObject>
{
public:
  SimulinkObjectParser() = default;
  ReturnType setInputData(const xmlNodePtr data) override;
  ReturnType parse() override;
  ~SimulinkObjectParser() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKOBJECTPARSER_H