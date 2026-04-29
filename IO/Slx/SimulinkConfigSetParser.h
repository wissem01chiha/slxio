// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONFIGSETPARSER_H
#define SIMULINKCONFIGSETPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "LibXML2.h"
#include "SimulinkConfigSet.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkConfigurationSet Parser class.
 */
class APIEXPORT SimulinkConfigSetParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkConfigSet>
{
public:
  SimulinkConfigSetParser() = default;
  ReturnType setInputData(const xmlNodePtr data) override;
  ReturnType parse() override;
  ~SimulinkConfigSetParser() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKCONFIGSETPARSER_H