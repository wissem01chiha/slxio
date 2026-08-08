// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWBLOCKPARSER_H
#define STATEFLOWBLOCKPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Libxml2.h"
#include "SimulinkParserBase.h"
#include "StateflowBlock.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkStateflowBlock Parser class.
 */
class StateflowBlockParser final
  : public SimulinkParserBase<xmlNodePtr, StateflowBlock>
{
public:
  StateflowBlockParser() = default;
  HError setInputData(const xmlNodePtr data) override;
  HError parse() override;
  ~StateflowBlockParser() = default;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATEFLOWBLOCKPARSER_H
