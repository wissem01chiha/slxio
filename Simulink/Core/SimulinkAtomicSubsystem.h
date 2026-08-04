// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKATOMICSUBSYSTEM_H
#define SIMULINKATOMICSUBSYSTEM_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementBase.h"
#include "SimulinkSubsystem.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;

/**
 * @class SimulinkAtomicSubsystem
 * @brief Represents a Simulink Atomic Subsystem element in a Simulink model.
 */
class SLXIO_APIEXPORT SimulinkAtomicSubsystem
  : public SimulinkElementBase
  , SimulinkSubsystem
{
public:
  SimulinkAtomicSubsystem() = default;

  /** Creates a new instance of this element. */
  SimulinkAtomicSubsystem* New() const override;

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

  /** Returns the element specific name */
  std::string GetName() override;

  /** Returns the elment dimensions string if supported else "" */
  std::string GetDimension() override;

  /** Access the element specifc parameter interface */
  std::shared_ptr<SimulinkParameterBase> GetParameter(std::string name) override;

  /** Sets the element specifc parameter to given one  */
  SResult SetParameter(std::string name, std::shared_ptr<SimulinkParameterBase> parameter) override;

  /** Adds the element specifc parameter  */
  SResult AddParameter(std::shared_ptr<SimulinkParameterBase> parameter) override;

private:
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKATOMICSUBSYSTEM_H