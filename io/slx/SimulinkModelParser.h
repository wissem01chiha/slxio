// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMUMINKMODELPARSER_H
#define SIMUMINKMODELPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorCode.h"
#include "Libxml2.h"
#include "SimulinkModel.h"
#include "SimulinkParserBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief model Parser class.
 * This class is responsible for constructing the complete model
 * representation, including Simulink components, Stateflow charts,
 * configuration sets, model libraries (if present), and the data
 * dictionary. It serves as the top-level orchestrator for assembling
 * all model elements from external sources such as XML, JSON, or
 * other supported formats.
 */
class SimulinkModelParser : public SimulinkParserBase<xmlNodePtr, SimulinkModel>
{
public:
    SimulinkModelParser() = default;
    HError setInputData(const xmlNodePtr data) override;
    HError parse() override;
    ~SimulinkModelParser() = default;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMUMINKMODELPARSER_H
