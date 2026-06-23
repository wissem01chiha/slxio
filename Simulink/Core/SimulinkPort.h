// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPORT_H
#define SIMULINKPORT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementBase.h"
#include "SimulinkPortType.h"
#include "SimulinkBlockType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkLine;
class Logger;
class SimulinkBlock;

/**
 * @class SimulinkPort
 * @brief Base class for Simulink ports.
 */
class SLXIO_APIEXPORT SimulinkPort : public SimulinkElementBase
{
public:
  /** Default constructor.*/
  SimulinkPort();

  SimulinkPort* New() const override;

  SimulinkPort(std::shared_ptr<SimulinkBlock> block, SimulinkPortType pType);

  SimulinkPortType GetPortType();

  /** Accesses a child element by index with bound checking */
  std::shared_ptr<SimulinkElementBase> at(IdType index) override;

  /** Access specified element */
  std::shared_ptr<SimulinkElementBase> operator[](IdType index) override;

  /** Returns the number of child elements. */
  UInt32 Size() const override;

  /** Returns true if no child elements exist. */
  bool Empty() const override;

  /** Removes all child elements. */
  void Clear() override;

  /** Inserts a new child element. */
  ReturnType Insert(const std::shared_ptr<SimulinkElementBase>& element) override;

  /** Erases a child element by identifier. */
  ReturnType Erase(const IdType& id) override;

  /** Erases a child element by reference. */
  ReturnType Erase(const std::shared_ptr<SimulinkElementBase>& element) override;

  /** Finds a child element by identifier. */
  std::shared_ptr<SimulinkElementBase> Find(const IdType& id) override;

  /** Checks if this element or its children contain the given identifier. */
  bool Contains(const IdType& id) const override;

  /** Returns the generic type of this element. */
  SimulinkElementType GetType() const override;

  /** Returns the unique identifier of this element. */
  IdType GetId() const override;

  /** Returns a string representation of this element. */
  std::string ToString() const override;

  /** Retrieve the block type of the Simulink block.*/
  SimulinkBlockType GetBlockType();

  /** Get the block name.*/
  std::string GetName() override;

  /** Dim of a Simulink Block ????? */
  std::string GetDimension() override;

  /** Get the Parent block at the hiraciy .*/
  std::shared_ptr<SimulinkBlock> GetBlockParent();

  /** Return a pointer to a given parameter by name, if not
   * found a or the blcok has not paramters an empty parameter returned. */
  std::shared_ptr<SimulinkParameterBase> GetParameter(std::string name) override;

  /** Sets the element specifc parameter to given one  */
  ReturnType SetParameter(
    std::string name, std::shared_ptr<SimulinkParameterBase> parameter) override;

  /* Adds a Parameter to the array */
  ReturnType AddParameter(std::shared_ptr<SimulinkParameterBase> parameter) override;

  /** Get the parent block of this port.*/
  std::shared_ptr<SimulinkBlock> GetBlock();

  /** Get all line handlers connected to this port.*/
  std::vector<std::shared_ptr<SimulinkLine>> GetLines();

  /** Get a specific line by its Id */
  std::shared_ptr<SimulinkLine> GetLine(const IdType& lineId);

  /** Return the class internal logger object*/
  Logger& GetLogger();

private:
  Logger& logger;
  IdType BlockId;
  SimulinkPortType PortType;
  std::shared_ptr<SimulinkBlock> PortBlock;
  std::vector<std::shared_ptr<SimulinkLine>> PortLines;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKPORT_H
