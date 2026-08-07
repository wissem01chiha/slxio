// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKHARDWAREPARSER_H
#define SIMULINKHARDWAREPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "ErrorCode.h"
#include "Libxml2.h"
#include "SimulinkHardware.h"
#include "SimulinkParserBase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Parser for SimulinkHardware
/// @note SimulinkHardware is a subset of SimulinkObject element in
/// slx file
class SLXIO_APIEXPORT SimulinkHardwareParser final
    : public SimulinkParserBase<xmlNodePtr, SimulinkHardware> {
public:
  SimulinkHardwareParser() = default;
  HError setInputData(const xmlNodePtr data) override;
  HError parse() override;
  ~SimulinkHardwareParser() = default;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKHARDWAREPARSER_H
