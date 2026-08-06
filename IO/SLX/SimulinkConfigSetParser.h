// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONFIGSETPARSER_H
#define SIMULINKCONFIGSETPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Libxml2.h"
#include "SimulinkConfigSet.h"
#include "SimulinkParserBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkConfigurationSet Parser class.
 */
class SLXIO_APIEXPORT SimulinkConfigSetParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkConfigSet>
{
public:
  SimulinkConfigSetParser() = default;
  HError setInputData(const xmlNodePtr data) override;
  HError parse() override;
  ~SimulinkConfigSetParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKCONFIGSETPARSER_H
