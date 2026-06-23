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

#ifndef SIMULINKARRAYWRITER_H
#define SIMULINKARRAYWRITER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Json-c.h"
#include "SimulinkArray.h"
#include "SimulinkWriterBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SimulinkArrayWriter : public SimulinkWriterBase<SimulinkArray, json_object*>
{
public:
  SimulinkArrayWriter() = default;
  ~SimulinkArrayWriter() = default;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKARRAYWRITER_H
