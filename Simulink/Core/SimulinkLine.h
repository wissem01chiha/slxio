// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKLINE_H
#define SIMULINKLINE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkBlockType.h"
#include "SimulinkElementBase.h"
#include "SimulinkElementType.h"
#include "SimulinkPort.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;

/**
 * @class SimulinkLine
 * @brief A Simulink line.
 */
class SLXIO_APIEXPORT SimulinkLine final : public SimulinkElementBase
{
public:
  /** Default constructor.*/
  SimulinkLine();

  SimulinkLine* New() const override;

  /** Construct a SimulinkLine given the Inport and OutPort blocks */
  SimulinkLine(
    std::shared_ptr<SimulinkPort> pOut, std::shared_ptr<SimulinkPort> pIn);

  SimulinkLine(SimulinkPort sourcePort_, SimulinkPort destPort);

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
  HError Insert(const std::shared_ptr<SimulinkElementBase>& element) override;

  /** Erases a child element by identifier. */
  HError Erase(const IdType& id) override;

  /** Erases a child element by reference. */
  HError Erase(const std::shared_ptr<SimulinkElementBase>& element) override;

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
  HError SetParameter(
    std::string name, std::shared_ptr<SimulinkParameterBase> parameter) override;

  /* Adds a Parameter to the array */
  HError AddParameter(std::shared_ptr<SimulinkParameterBase> parameter) override;

  /**
   * Check if the line is connected to both source and
   * destination ports. A line is considered connected if both the source and
   * destination ports are non-null (set during creation).
   */
  bool IsConnected();

  /** Returns the Line Source Port */
  std::shared_ptr<SimulinkPort> GetSourcePort();

  /** Returns the Line Destination Port */
  std::shared_ptr<SimulinkPort> GetDestPort();

  /** Return the class internal logger object*/
  Logger& GetLogger();

private:
  IdType LineId;
  Logger& logger;
  std::shared_ptr<SimulinkPort> SourcePort;
  std::shared_ptr<SimulinkPort> DestPort;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKLINE_H
