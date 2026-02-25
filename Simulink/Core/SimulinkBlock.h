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

#ifndef SIMULINKBLOCK_H
#define SIMULINKBLOCK_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "SimulinkBlockType.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "SimulinkPortType.h"
#include "Type.h"
#include <map>
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Simulink Block
 */
class APIEXPORT SimulinkBlock : public SimulinkElementBase
{
public:
  SimulinkBlock();
  ~SimulinkBlock() = default;

  explicit SimulinkBlock(SimulinkBlockType::Type blockType_);
  explicit SimulinkBlock(SimulinkBlockType* blockType_);

  SimulinkBlock(const SimulinkBlock& origBlock);
  SimulinkBlock& operator=(const SimulinkBlock&) = delete;

  SimulinkBlock(SimulinkBlockType::Type blockType_, const char* blockName_,
    const Index& blockId_);

  ///@brief Support adding Only SimulinkBlock and SimulinkParameter
  /// Object Types
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;

  ///@brief Support Removing Only SimulinkBlock and SimulinkParameter
  /// Object
  /// Types
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;

  std::string toString() const override;

  Index getID() const override;
  SimulinkElementType getType() const override;
  SimulinkBlockType getBlockType();
  std::string getName();

  std::shared_ptr<SimulinkBlock> getSubBlock(const std::string& blockName_);
  std::shared_ptr<SimulinkBlock> getSubBlock(const Index& blockId_);

  void setID(const Index& blockId_);
  void setName(const std::string& blockName_);
  void setBlockType(SimulinkBlockType::Type blockType_);

  bool contains(const Index& blockId_) const override;

  std::shared_ptr<SimulinkBlock> getParent();
  ErrorCode addPort(SimulinkPortType portType_);

  /// @brief return a pointer to a given parameter by name, if not
  /// found a or the blcok has not paramters a nullptr returned
  std::shared_ptr<SimulinkParameter> getParameter(
    const char* blockParameterName_);

private:
  Index blockId;
  std::string blockName;
  SimulinkBlockType blockType;
  std::map<SimulinkPortType, Index> blockPorts;
  std::vector<std::shared_ptr<SimulinkBlock>> subBlocks;
  std::shared_ptr<SimulinkBlock> blockParent = nullptr;
  std::vector<std::shared_ptr<SimulinkParameter>> blockParameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKBLOCK_H