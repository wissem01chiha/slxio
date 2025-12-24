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

#ifndef SIMULINKMODEL_H
#define SIMULINKMODEL_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ModelWorkspace.h"
#include "SimulationSettings.h"
#include "SimulinkArray.h"
#include "SimulinkBlock.h"
#include "SimulinkElementBase.h"
#include "SimulinkLine.h"
#include "SimulinkModelType.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"
#include "SimulinkPort.h"
#include "Type.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/** @brief A Simulink model  */
class SimulinkModel : public SimulinkElementBase {
public:
  SimulinkModel();
  SimulinkModel(SimulinkModelType Type);
  SimulinkModel(const SimulinkModel &other);
  SimulinkElementBase &operator=(const SimulinkElementBase &) = delete;
  SimulinkElementType getType() const override;
  Index getID() const override;
  std::string toString() const override;
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element);
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element);

  SimulinkBlock getBlock(uint32 blockIdx);
  SimulinkModelType getModelType();
  std::shared_ptr<SimulationSettings> getSimulationSettings();
  
  std::vector<std::shared_ptr<SimulinkParameter>> getParameters();

  uint32 getVersion();
  bool contains(const Index &id) const override;

  std::shared_ptr<ModelWorkspace> getWorkspace();

private:
  SimulinkModelType modelType;
  Index modelId;
  uint32 modelVersion;
  std::shared_ptr<ModelWorkspace> modelWorkspace;
  std::shared_ptr<SimulationSettings> modelSimSet;
  std::vector<std::shared_ptr<SimulinkBlock>> modelBlocks;
  std::vector<std::shared_ptr<SimulinkLine>> modelLines;
  std::vector<std::shared_ptr<SimulinkParameter>> modelParameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKMODEL_H