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

#ifndef SIMULINKSUBSYSTEM_H
#define SIMULINKSUBSYSTEM_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "SimulinkPort.h"
#include "SimulinkBlock.h"
#include "SimulinkElementBase.h"
#include "Type.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A SimulinkSubsystem Object
 * @note this struct do not map to a concrete Simulink object in MATLAB API
 * rather then an extension for hiracical blcoks or models manipulatoation 
 * added as a feature in the librray 
 */
class APIEXPORT SimulinkSubsystem {
public:
  SimulinkSubsystem();
  ~SimulinkSubsystem() =default;
  std::vector<std::shared_ptr<SimulinkBlock>> getBlocks();
  std::vector<std::shared_ptr<SimulinkBlock>> getPorts();

private:
  std::vector<std::shared_ptr<SimulinkBlock>> subsystemBlocks;
  std::vector<std::shared_ptr<SimulinkBlock>> subsystemPorts;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKSUBSYSTEM_H