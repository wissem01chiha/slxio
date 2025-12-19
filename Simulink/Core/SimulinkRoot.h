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

#ifndef SIMULINKROOT_H
#define SIMULINKROOT_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT SimulinkRoot {
public:
  SimulinkRoot();
  void startSimulation();
  void stopSimulation();
  void resetModel();
  SimulinkArray &getSubsystems();
  SimulinkArray &getConfigSets();

private:
  SimulinkArray subsystems;
  SimulinkArray configSets;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKROOT_H