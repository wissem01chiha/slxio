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

#ifndef SIMULINKBLOCK_H
#define SIMULINKBLOCK_H

#include "slxABINamespace.h"
#include "SimulinkBlockType.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "SimulinkPortType.h"
#include <map>
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/** @brief A Simulink block */
class SimulinkBlock : public SimulinkElementBase {
public:
  SimulinkBlock();
  ~SimulinkBlock() override;

  SimulinkBlock(SimulinkBlockType Type);
  SimulinkBlock(SimulinkBlockType *Type);

  SimulinkBlock(const SimulinkBlock &origBlock);
  SimulinkBlock &operator=(const SimulinkBlock &) = delete;

  SimulinkElementBase::ErrorCode
  add(std::shared_ptr<SimulinkElementBase> element) override;
  SimulinkElementBase::ErrorCode
  remove(std::shared_ptr<SimulinkElementBase> element) override;
  std::string toString() const override;
  SimulinkElementType getType() const override;
  uint32 getID() const override;

  std::shared_ptr<SimulinkBlock> getSubBlock(std::string name);
  std::shared_ptr<SimulinkBlock> getSubBlock(Index blockId);

  SimulinkBlockType getBlockType();

  std::shared_ptr<SimulinkBlock> getParent();
  SimulinkBlock::ErrorCode addPort(SimulinkPortType portType);

private:
  bool contains(Index id) const override;

  SimulinkBlockType type;
  std::string blockName;
  Index blockId;
  std::map<SimulinkPortType, Index> blockPorts;
  std::vector<std::shared_ptr<SimulinkBlock>> subBlocks;
  std::shared_ptr<SimulinkBlock> blockParent = nullptr;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKBLOCK_H