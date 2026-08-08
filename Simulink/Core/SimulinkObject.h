// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKOBJECT_H
#define SIMULINKOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkBlockType.h"
#include "SimulinkElementBase.h"
#include <memory>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;
class SimulinkParameter;
class SimulinkArray;
class SimulinkBlock;

/**
 * @brief Class for Simulink objects, which are a construct for
 * structured storage of meta-data in the model.
 */
class SLXIO_APIEXPORT SimulinkObject : public SimulinkElementBase {
public:
  /** Default Constructor */
  SimulinkObject();

  SimulinkObject *New() const override;

  /** Constructor given explicit parameters  */
  SimulinkObject(SId id, std::string name, std::string className);

  /**  */
  SimulinkObject(SId id, std::string version, std::string name,
                 std::string className);

  /**  */
  SimulinkObject(std::string version, std::string className);

  /** Accesses a child element by index with bound checking */
  std::shared_ptr<SimulinkElementBase> at(SId index) override;

  /** Access specified element */
  std::shared_ptr<SimulinkElementBase> operator[](SId index) override;

  /** Returns the number of child elements. */
  UInt32 Size() const override;

  /** Returns true if no child elements exist. */
  bool Empty() const override;

  /** Removes all child elements. */
  void Clear() override;

  /** Inserts a new child element. */
  HError Insert(const std::shared_ptr<SimulinkElementBase> &element) override;

  /** Erases a child element by identifier. */
  HError Erase(const SId &id) override;

  /** Erases a child element by reference. */
  HError Erase(const std::shared_ptr<SimulinkElementBase> &element) override;

  /** Finds a child element by identifier. */
  std::shared_ptr<SimulinkElementBase> Find(const SId &id) override;

  /** Checks if this element or its children contain the given identifier. */
  bool Contains(const SId &id) const override;

  /** Returns the generic type of this element. */
  SimulinkElementType GetType() const override;

  /** Returns the unique identifier of this element. */
  SId GetId() const override;

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
  std::shared_ptr<SimulinkParameterBase>
  GetParameter(std::string name) override;

  /** Sets the element specifc parameter to given one  */
  HError
  SetParameter(std::string name,
               std::shared_ptr<SimulinkParameterBase> parameter) override;

  /* Adds a Parameter to the array */
  HError
  AddParameter(std::shared_ptr<SimulinkParameterBase> parameter) override;

protected:
  Logger &logger;
  SId ObjectId;
  std::string ObjectVersion;
  std::string PropName;
  std::string ClassName;
  std::vector<std::shared_ptr<SimulinkObject>> SubObjects;
  std::vector<std::shared_ptr<SimulinkArray>> SubArrays;
  std::vector<std::shared_ptr<SimulinkParameter>> ObjectParameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKOBJECT_H
