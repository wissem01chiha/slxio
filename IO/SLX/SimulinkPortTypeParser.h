// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPORTTYPEPARSER_H
#define SIMULINKPORTTYPEPARSER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorCode.h"
#include "SimulinkParserBase.h"
#include "SimulinkPortType.h"

#include <string>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Base parser for encoded port type strings
class SLXIO_APIEXPORT SimulinkPortTypeParser final
  : public SimulinkParserBase<std::string, SimulinkPortType>
{
public:
  SimulinkPortTypeParser() = default;
  HError setInputData(const std::string data) override;
  HError setInputData(const char* data);
  HError parse() override;
  ~SimulinkPortTypeParser() = default;
};
SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKPORTTYPEPARSER_H
