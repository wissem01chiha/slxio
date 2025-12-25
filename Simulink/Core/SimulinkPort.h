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

class SimulinkLine;

/**
 * @brief Base class for Simulink ports.
 */
class APIEXPORT SimulinkPort final : public SimulinkElementBase {
public:
  SimulinkPort() =default;
  SimulinkPort(const SimulinkPort &other);
  SimulinkPort(std::shared_ptr<SimulinkBlock> block, SimulinkPortType pType);

  SimulinkPortType getPortType();
  SimulinkElementType getType() const override;

  /// @brief Get a string representation of this port.
  std::string toString() const override;

  /** 
   * @brief Remove a line from this port. 
   * @param element The element to remove (must be a SimulinkLine). 
   * @return ErrorCode indicating success or failure. 
   */
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;

/** 
 * @brief Add a line to this port. 
 *  @details Only SimulinkLine elements are supported for add/remove operations. 
 * @param element The element to add (must be a SimulinkLine). 
 * @return ErrorCode indicating success or failure. 
 */
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Get the ID of the linked block.
  Index getID() const override;

  /** 
   *  @brief Compare the given ID with this port's ID. 
   *  @note A port can only be connected to one and only one block. 
   *  @param id The identifier to compare against. 
   * @return True if the IDs match, false otherwise.
    */
  bool contains(const Index &id) const override;

  /// @brief Get the parent block of this port.
  std::shared_ptr<SimulinkBlock> getBlock();

  /// @brief Get all line handlers connected to this port.
  std::vector<std::shared_ptr<SimulinkLine>> getLines();

  /// @brief Get a specific line by its ID.
  /// @note Each line should have a unique identifier. 
  std::shared_ptr<SimulinkLine> getLine(const Index& lineId_);

private:
  Index portBlockId;
  SimulinkPortType portType;
  std::shared_ptr<SimulinkBlock> portBlock;
  std::vector<std::shared_ptr<SimulinkLine>> portLines;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKPORT_H