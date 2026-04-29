// Copyright 2025 Wissem Chiha
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

#ifndef SIMULINKPARAMETERWRITER_H
#define SIMULINKPARAMETERWRITER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Json-c.h"
#include "SimulinkParameter.h"
#include "SimulinkParserBase.h"
#include "SimulinkWriterBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief write a Simulink Parameter data object to a json element
 */
class APIEXPORT SimulinkParameterWriter final
  : public SimulinkWriterBase<SimulinkParameter, json_object*>
{
public:
  SimulinkParameterWriter() = default;
  ReturnType Write() override;
  ReturnType setInputData(const SimulinkParameter data) override;
  ~SimulinkParameterWriter() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKPARAMETERWRITER_H