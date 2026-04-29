// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCK_H
#define SIMULINKBLOCK_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Logger.h"
#include "PlatformTypes.h"
#include "SimulinkBlockType.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "SimulinkPortType.h"
#include <map>
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkBlock
 */
class APIEXPORT SimulinkBlock : public SimulinkElementBase
{
public:
  /**
   * Default constructor.
   */
  SimulinkBlock();

  /**
   * Constructor with block type.
   */
  explicit SimulinkBlock(SimulinkBlockType::Type blockType);

  /**
   * Constructor from a Pointer to a Block
   */
  explicit SimulinkBlock(SimulinkBlockType* blockType);

  /**
   * Copy constructor.
   */
  SimulinkBlock(const SimulinkBlock& origBlock);

  /**
   * Deleted copy assignment operator to prevent copying.
   */
  SimulinkBlock& operator=(const SimulinkBlock&) = delete;

  /**
   * Constructor with block type, name, and Id.
   */
  SimulinkBlock(SimulinkBlockType::Type blockType, const char* blockName,
    const IdType& blockId);

  /**
   * Support adding Only SimulinkBlock and SimulinkParameter 
   * Object Types.
   */
  ReturnType AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  /**
   * Add a port to the block.
   */
  void AddElement(SimulinkPortType portType);

  /**
   * Support Removing Only SimulinkBlock and SimulinkParameter
   * object types.
   */
  ReturnType RemoveElement(
    std::shared_ptr<SimulinkElementBase> element) override;

  /**
   * .Serliser the block to string
   */
  std::string ToString() const override;

  /**
   * .Return the block unqiue id 
   */
  IdType GetElementId() const override;

  /**
   * .override from SimulinkElmentBase
   */
  SimulinkElementType GetElementType() const override;

  /**
   * Retrieve the block type of the Simulink block.
   */
  SimulinkBlockType GetBlockType();

  /**
   * Get the block name.
   */
  std::string GetBlockName();

  /**
   * Retrieve a sub-block by name. Returns an empty shared_ptr if not 
   * found.
   */
  std::shared_ptr<SimulinkBlock> GetSubBlock(const std::string& blockName);

  /**
   * Retrieve a sub-block by Id. Returns an empty shared_ptr if not
   * found.
   */
  std::shared_ptr<SimulinkBlock> GetSubBlock(const IdType& blockId);

  /**
   * Get the Parent block at the hiraciy .
   */
  std::shared_ptr<SimulinkBlock> GetParent();

  /**
   * Return a pointer to a given parameter by name, if not
   * found a or the blcok has not paramters an empty parameter returned.
   */
  std::shared_ptr<SimulinkParameter> GetParameter(const char* parameterName);

  /**
   * Sets the block Id to a given one, shoule not used by public users, only 
   * for internal Peraser 
   */
  void SetBlockId(const IdType& blockId);

  /**
   * .Set the block name
   */
  void SetBlockName(const std::string& blockName);

  /**
   * Sets the bclok explict type.
   */
  void SetBlockType(SimulinkBlockType::Type blockType);

  /**
   * Check whatever a blcok contains an other block given it unqiue id.
   */
  bool Contains(const IdType& blockId) const override;

  /**
   * Return the class internal logger object
   */
  Logger& GetLogger();

private:
  IdType id;
  Logger& logger;
  std::string name;
  SimulinkBlockType type;
  std::map<IdType, SimulinkPortType> ports;
  std::vector<std::shared_ptr<SimulinkBlock>> blocks;
  std::shared_ptr<SimulinkBlock> parent;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKBLOCK_H
