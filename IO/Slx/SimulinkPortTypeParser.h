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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SIMULINKPORTTYPEPARSER_H
#define SIMULINKPORTTYPEPARSER_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "SimulinkParserBase.h"
#include "SimulinkPortType.h"
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief base parser for encoded port type strings
class APIEXPORT SimulinkPortTypeParser final
    : public SimulinkParserBase<std::string, SimulinkPortType> {
public:
  SimulinkPortTypeParser();
  ErrorCode setInputData(const std::string data) override;
  ErrorCode setInputData(const char *data);
  std::shared_ptr<SimulinkPortType> getOutputData() const override;
  ErrorCode parse() override;
  ~SimulinkPortTypeParser() = default;

private:
  std::shared_ptr<SimulinkPortType> ptr_;
  std::string dataObject;
};
SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // !SIMULINKPORTTYPEPARSER_H
