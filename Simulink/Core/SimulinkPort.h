// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPORT_H
#define SIMULINKPORT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Logger.h"
#include "SimulinkBlock.h"
#include "SimulinkElementBase.h"
#include "SimulinkPortType.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkLine;

/**
 * @class SimulinkPort
 * @brief Base class for Simulink ports.
 */
class APIEXPORT SimulinkPort : public SimulinkElementBase
{
public:
  SimulinkPort() = delete;
  SimulinkPort(const SimulinkPort& other);
  SimulinkPort(std::shared_ptr<SimulinkBlock> block, SimulinkPortType pType);

  SimulinkPortType getPortType();
  SimulinkElementType GetElementType() const override;

  /// @brief Get a string representation of this port.
  std::string ToString() const override;

  /**
   * @brief Remove a line from this port.
   * @param element The element to remove (must be a SimulinkLine).
   * @return ReturnType indicating success or failure.
   */
  ReturnType RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;

  /**
   * @brief Add a line to this port.
   *  @details Only SimulinkLine elements are supported for add/remove
   * operations.
   */
  ReturnType AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Get the ID of the linked block.
  IdType GetElementId() const override;

  /**
   *  @brief Compare the given ID with this port's ID.
   *  @note A port can only be connected to one and only one block.
   */
  bool Contains(const IdType& id) const override;

  /// @brief Get the parent block of this port.
  std::shared_ptr<SimulinkBlock> getBlock();

  /// @brief Get all line handlers connected to this port.
  std::vector<std::shared_ptr<SimulinkLine>> getLines();

  /// @brief Get a specific line by its ID.
  /// @note Each line should have a unique identifier.
  std::shared_ptr<SimulinkLine> getLine(const IdType& lineId);

  /**
   * 
   */
  Logger& GetLogger();
  
private:
  Logger& logger;
  IdType blockId;
  SimulinkPortType type;
  std::shared_ptr<SimulinkBlock> block;
  std::vector<std::shared_ptr<SimulinkLine>> lines;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKPORT_H