// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULATIONSETTINGSPARSER_H
#define SIMULATIONSETTINGSPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
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
    HError setInputData(const xmlNodePtr data) override;
    HError parse() override;
    ~SimulationSettingsParser() = default;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULATIONSETTINGSPARSER_H
