// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULATIONSETTINGSPARSER_H
#define SIMULATIONSETTINGSPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "LibXML2.h"
#include "SimulationSettings.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkSimulationSettings Parser class.
 */
class APIEXPORT SimulationSettingsParser final
  : public SimulinkParserBase<xmlNodePtr, SimulationSettings>
{
public:
  SimulationSettingsParser() = default;
  ErrorCode setInputData(const xmlNodePtr data) override;
  ErrorCode parse() override;
  ~SimulationSettingsParser() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULATIONSETTINGSPARSER_H