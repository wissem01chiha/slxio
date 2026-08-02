// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWBLOCKPARSER_H
#define STATEFLOWBLOCKPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Libxml2.h"
#include "SimulinkParserBase.h"
#include "StateflowBlock.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkStateflowBlock Parser class.
 */
class StateflowBlockParser final : public SimulinkParserBase<xmlNodePtr, StateflowBlock>
{
public:
  StateflowBlockParser() = default;
  ReturnType setInputData(const xmlNodePtr data) override;
  ReturnType parse() override;
  ~StateflowBlockParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // STATEFLOWBLOCKPARSER_H
