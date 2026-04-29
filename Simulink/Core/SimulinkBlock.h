// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCK_H
#define SIMULINKBLOCK_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Logger.h"
#include "SimulinkBlockType.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "SimulinkPortType.h"
#include "PlatformTypes.h"
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
  /// @brief Default constructor
  SimulinkBlock();

  /// @brief Constructor with block type
  explicit SimulinkBlock(SimulinkBlockType::Type blockType);

  explicit SimulinkBlock(SimulinkBlockType* blockType);

  /// @brief Copy constructor
  SimulinkBlock(const SimulinkBlock& origBlock);

  /// @brief Deleted copy assignment operator to prevent copying
  SimulinkBlock& operator=(const SimulinkBlock&) = delete;

  /// @brief Constructor with block type, name, and Id
  SimulinkBlock(SimulinkBlockType::Type blockType, const char* blockName,
    const IdType& blockId);

  ///@brief Support adding Only SimulinkBlock and SimulinkParameter
  /// Object Types
  ReturnType AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Add a port to the block
  void AddElement(SimulinkPortType portType);

  ///@brief Support Removing Only SimulinkBlock and SimulinkParameter
  /// object types
  ReturnType RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;

  std::string ToString() const override;
  IdType GetElementId() const override;
  SimulinkElementType GetElementType() const override;

  /// @brief Retrieve the block type of the Simulink block.
  SimulinkBlockType getBlockType();

  std::string getName();

  /// @brief Retrieve a sub-block by name. Returns an empty shared_ptr if not
  /// found.
  std::shared_ptr<SimulinkBlock> getSubBlock(const std::string& blockName);

  /// @brief Retrieve a sub-block by Id. Returns an empty shared_ptr if not
  /// found.
  std::shared_ptr<SimulinkBlock> getSubBlock(const IdType& blockId);

  std::shared_ptr<SimulinkBlock> getParent();

  /// @brief Return a pointer to a given parameter by name, if not
  /// found a or the blcok has not paramters an empty parameter returned
  std::shared_ptr<SimulinkParameter> getParameter(const char* parameterName);

  void setID(const IdType& blockId);
  void setName(const std::string& blockName);
  void setBlockType(SimulinkBlockType::Type blockType);
  bool Contains(const IdType& blockId) const override;

private:
  Logger& l;
  IdType id;
  std::string name;
  SimulinkBlockType type;
  std::map<SimulinkPortType, IdType> ports;
  std::vector<std::shared_ptr<SimulinkBlock>> blocks;
  std::shared_ptr<SimulinkBlock> parent;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKBLOCK_H