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

#ifndef SIMULINKPORT_H
#define SIMULINKPORT_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "SimulinkBlock.h"
#include "SimulinkElementBase.h"
#include "SimulinkPortType.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base class for Simulink ports.
 */
class APIEXPORT SimulinkPort : public SimulinkElementBase {
public:
  SimulinkPort() =default;
  SimulinkPort(const SimulinkPort &other);
  SimulinkPort(std::shared_ptr<SimulinkBlock> block, SimulinkPortType pType);

  SimulinkPortType getPortType();
  SimulinkElementType getType() const override;
  std::string toString() const override;

  ErrorCode remove(std::shared_ptr<SimulinkElementBase> elment) override;
  ErrorCode add(std::shared_ptr<SimulinkElementBase> elment) override;

  /// @brief Check if the port is connect to a line 
  bool isConnected();

  /// @brief return the id of the linked block
  Index getID() const override;

  /// @brief 
  bool contains(const Index &id) const override;

  /// @brief 
  std::shared_ptr<SimulinkBlock> getBlock();

private:
  Index portBlockId;
  SimulinkPortType portType;
  std::shared_ptr<SimulinkBlock> portBlock;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKPORT_H