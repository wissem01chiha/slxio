// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPORTTYPEPARSER_H
#define SIMULINKPORTTYPEPARSER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "ErrorCode.h"
#include "SimulinkParserBase.h"
#include "SimulinkPortType.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Base parser for encoded port type strings
class SLXIO_APIEXPORT SimulinkPortTypeParser final
  : public SimulinkParserBase<std::string, SimulinkPortType>
{
public:
  SimulinkPortTypeParser() = default;
  slxReturnType setInputData(const std::string data) override;
  slxReturnType setInputData(const char* data);
  slxReturnType parse() override;
  ~SimulinkPortTypeParser() = default;
};
SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKPORTTYPEPARSER_H
