// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKARRAY_H
#define SIMULINKARRAY_H

#include "AbiNamespaceMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include <memory>

class Logger;

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkArray
 * @brief Base class for Simulink Array.
 * An slx Array can contain nested arrays as well as objects derived
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

  /** Return the element type. */
  SimulinkElementType GetElementType() const override;

  /** Return the array as a string. */
  std::string ToString() const override;

  /** Check if the array contains a subarray with the given Id. */
  bool Contains(const IdType& id) const override;

  /** Return the number of elements in the array. */
  UInt32 Size() const override;

  /** Return true if the array is empty. */
  bool Empty() const override;

  /** Remove all elements from the array. */
  void Clear() override;

  /** Insert an element into the array. */
  ReturnType Insert(
    const std::shared_ptr<SimulinkElementBase>& element) override;

  /** Erase an element by Id. */
  ReturnType Erase(const IdType& id) override;

  /** Erase an element by reference. */
  ReturnType Erase(
    const std::shared_ptr<SimulinkElementBase>& element) override;

  /** Find an element by Id. */
  std::shared_ptr<SimulinkElementBase> Find(const IdType& id) override;

  /** Return the element at the specified index. */
  std::shared_ptr<SimulinkElementBase> at(IdType index) override;

  /** Return the element at the specified index. */
  std::shared_ptr<const SimulinkElementBase> at(IdType index) const override;

  /** Return the array's element Id. */
  IdType GetElementId() const override;

  /** Return the array name. */
  std::string GetArrayName();

  /** Return the array dimension. */
  std::string GetArrayDimension();

  /** Return the array type. */
  std::string GetArrayType();

  /** Return the parameter with the given name. */
  std::shared_ptr<SimulinkParameter> GetArrayParameter(std::string name);

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
