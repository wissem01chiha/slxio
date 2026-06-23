// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSIGNALPARSER_H
#define SIMULINKSIGNALPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "LibXML2.h"
#include "SimulinkParserBase.h"
#include "SimulinkSignal.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Parser for SimulinkSignal data object
class SLXIO_APIEXPORT SimulinkSignalParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkSignal>
{
public:
  SimulinkSignalParser() = default;
  ReturnType setInputData(const xmlNodePtr data) override;
  ReturnType parse() override;
  ~SimulinkSignalParser() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKSIGNALPARSER_H
