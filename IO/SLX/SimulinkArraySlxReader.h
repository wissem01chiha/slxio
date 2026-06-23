// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKARRAYPARSER_H
#define SIMULINKARRAYPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "LibXML2.h"
#include "SimulinkArray.h"
#include "SimulinkParserBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Parser for Simulink Array
 * @code{.xml}
 * <Array PropName="logAsSpecifiedByModelsSSIDs_" Type="Cell"
 * Dimension="1*1"> <Cell Class="double">[]</Cell>
 * </Array>
 * @endcode
 */
class SLXIO_APIEXPORT SimulinkArrayParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkArray>
{
public:
  SimulinkArrayParser() = default;
  ReturnType setInputData(const xmlNodePtr data) override;
  ReturnType parse() override;
  ~SimulinkArrayParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKARRAYPARSER_H
