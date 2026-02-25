// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef SIMULINKHARDWAREPARSER_H
#define SIMULINKHARDWAREPARSER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "LibXML2.h"
#include "SimulinkHardware.h"
#include "SimulinkParserBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief Parser for SimulinkHardware
/// @note SimulinkHardware is a subset of SimulinkObject element in
/// slx file
class APIEXPORT SimulinkHardwareParser final
  : public SimulinkParserBase<xmlNodePtr, SimulinkHardware>
{
public:
  SimulinkHardwareParser() = default;
  ErrorCode setInputData(const xmlNodePtr data) override;
  ErrorCode parse() override;
  ~SimulinkHardwareParser() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKHARDWAREPARSER_H