// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKDATATYPEPARSER_H
#define SIMULINKDATATYPEPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorCode.h"
#include "SimulinkDataType.h"
#include "SimulinkParserBase.h"

#include <string>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief base parser for encoded data type strings
class SLXIO_APIEXPORT SimulinkDataTypeParser final
  : public SimulinkParserBase<std::string, SimulinkDataType>
{
public:
  SimulinkDataTypeParser() = default;
  HError setInputData(const std::string data) override;
  HError setInputData(const char* data);
  HError parse() override;
  ~SimulinkDataTypeParser() = default;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKDATATYPEPARSER_H
