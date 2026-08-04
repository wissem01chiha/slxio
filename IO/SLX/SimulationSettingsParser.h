// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULATIONSETTINGSPARSER_H
#define SIMULATIONSETTINGSPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Libxml2.h"
#include "SimulationSettings.h"
#include "SimulinkParserBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkSimulationSettings Parser class.
 */
class SLXIO_APIEXPORT SimulationSettingsParser final
  : public SimulinkParserBase<xmlNodePtr, SimulationSettings>
{
public:
  SimulationSettingsParser() = default;
  SResult setInputData(const xmlNodePtr data) override;
  SResult parse() override;
  ~SimulationSettingsParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULATIONSETTINGSPARSER_H
