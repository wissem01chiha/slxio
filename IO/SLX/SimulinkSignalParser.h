// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSIGNALPARSER_H
#define SIMULINKSIGNALPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Libxml2.h"
#include "SimulinkParserBase.h"
#include "SimulinkSignal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Parser for SimulinkSignal data object
class SLXIO_APIEXPORT SimulinkSignalParser final
    : public SimulinkParserBase<xmlNodePtr, SimulinkSignal> {
public:
  SimulinkSignalParser() = default;
  HError setInputData(const xmlNodePtr data) override;
  HError parse() override;
  ~SimulinkSignalParser() = default;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKSIGNALPARSER_H
