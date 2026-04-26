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

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief base parser for encoded data type strings
class APIEXPORT SimulinkDataTypeParser final
  : public SimulinkParserBase<std::string, SimulinkDataType>
{
public:
  SimulinkDataTypeParser() = default;
  ErrorCode setInputData(const std::string data) override;
  ErrorCode setInputData(const char* data);
  ErrorCode parse() override;
  ~SimulinkDataTypeParser() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKDATATYPEPARSER_H
