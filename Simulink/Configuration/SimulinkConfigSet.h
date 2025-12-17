// Copyright 2024-2026 Wissem Chiha
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

#ifndef SIMULINKCONFIGSET_H
#define SIMULINKCONFIGSET_H

#include "slxABINamespace.h"
#include "slxPlatform.h"
#include <memory>

class SimulinkSolver;
class SimulinkOptimization;
class SimulinkSFSim;
class SimulinkDebugging;
class SimulinkHardware;
class SimulinkModelReference;
class SimulinkRTW;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkConfigSet {
public:
  SimulinkConfigSet() = default;
  ~SimulinkConfigSet() = default;

private:
  std::shared_ptr<SimulinkSolver> solver;
  std::shared_ptr<SimulinkOptimization> optimization;
  std::shared_ptr<SimulinkSFSim> sfSim;
  std::shared_ptr<SimulinkDebugging> debugging;
  std::shared_ptr<SimulinkHardware> hardware;
  std::shared_ptr<SimulinkModelReference> modelReference;
  std::shared_ptr<SimulinkRTW> rtw;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKCONFIGSET_H