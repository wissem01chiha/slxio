// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKARRAY_H
#define SIMULINKARRAY_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementBase.h"
#include <memory>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;
class SimulinkParameter;

/**
 * @class SimulinkArray
 * @brief Base class for Simulink Array.
 * A Simulink Array can contain nested arrays as well as objects derived
 * from the SimulinkObject class. for object references, it maintains
 * a list of object Ids to avoid mutable inclusion, forward
 * declarations, and compiler conflicts.
 */
class SLXIO_APIEXPORT SimulinkArray final : public SimulinkElementBase
{
public:
  /** Default constructor. */
  SimulinkArray();

  /** Create a new SimulinkArray instance. */
  SimulinkArray* New() const override;

  /** Construct a SimulinkArray with type, name, and dimension. */
  SimulinkArray(std::string type, std::string name, std::string dimension);

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
  SResult Insert(const std::shared_ptr<SimulinkElementBase>& element) override;

  /** Erases a child element by identifier. */
  SResult Erase(const IdType& id) override;

  /** Erases a child element by reference. */
  SResult Erase(const std::shared_ptr<SimulinkElementBase>& element) override;

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

  /** Return the array name. */
  std::string GetName() override;

  /** Return the array dimension. */
  std::string GetDimension() override;

  /** Return the array type. */
  std::string GetArrayType();

  /** Return the parameter with the given name. */
  std::shared_ptr<SimulinkParameterBase> GetParameter(std::string name) override;

  /** Sets the element specifc parameter to given one  */
  SResult SetParameter(
    std::string name, std::shared_ptr<SimulinkParameterBase> parameter) override;

  /* Adds a Parameter to the array */
  SResult AddParameter(std::shared_ptr<SimulinkParameterBase> parameter) override;

  /** Return the class logger. */
  Logger& GetLogger();

private:
  IdType ArrayId;
  Logger& logger;
  std::string ArrayType;
  std::string ArrayName;
  std::string ArrayDimension;
  std::vector<IdType> ArrayObjectIds;
  std::vector<std::shared_ptr<SimulinkArray>> SubArrays;
  std::vector<std::shared_ptr<SimulinkParameter>> ArrayParameters;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKARRAY_H
