// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCK_H
#define SIMULINKBLOCK_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkBlockType.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "SimulinkPortType.h"
#include <map>
#include <memory>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;

/**
 * @class SimulinkBlock
 */
class SLXIO_APIEXPORT SimulinkBlock : public SimulinkElementBase
{
public:
  /** Default constructor.*/
  SimulinkBlock() = default;

  SimulinkBlock* New() const override;

  /** Constructor with block type.*/
  explicit SimulinkBlock(SimulinkBlockType::Type blockType);

  /**
   * Constructor from a Pointer to a Block*/
  explicit SimulinkBlock(SimulinkBlockType* blockType);

  /** Constructor with block type, name, and Id.*/
  SimulinkBlock(SimulinkBlockType::Type blockType, const char* blockName,
    const IdType& blockId);

  /**Return the block unqiue id */
  IdType GetElementId() const override;

  /**.override from SimulinkElmentBase*/
  SimulinkElementType GetElementType() const override;


  /** Serliser the block to string*/
  std::string ToString() const override;

ReturnType Erase(const IdType& id) override;
  ReturnType Erase(
    const std::shared_ptr<SimulinkElementBase>& element) override;
  std::shared_ptr<SimulinkElementBase> Find(const IdType& id) override;
  std::shared_ptr<SimulinkElementBase> at(IdType index) override;

  UInt32 Size() const override;
  bool Empty() const override;
  void Clear() override;
  ReturnType Insert(
    const std::shared_ptr<SimulinkElementBase>& element) override;


  /** Retrieve the block type of the Simulink block.*/
  SimulinkBlockType GetBlockType();

  /** Get the block name.*/
  std::string GetBlockName();

  /** Get the Parent block at the hiraciy .*/
  std::shared_ptr<SimulinkBlock> GetBlockParent();

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

  /** Sets the bclok explict type.*/
  void SetBlockType(SimulinkBlockType::Type blockType);

  /** Check whatever a blcok contains an other block given it unqiue id.*/
  bool Contains(const IdType& blockId) const override;

  /**Return the class internal logger object*/
  Logger& GetLogger();

private:
  IdType BlockId;
  Logger& logger;
  std::string BlockName;
  SimulinkBlockType BlockType;
  std::map<IdType, SimulinkPortType> BlockPorts;
  std::vector<std::shared_ptr<SimulinkBlock>> SubBlocks;
  std::shared_ptr<SimulinkBlock> BlockParent;
  std::vector<std::shared_ptr<SimulinkParameter>> BlockParameters;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKBLOCK_H
