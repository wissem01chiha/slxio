// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKELEMENTBASE_H
#define SIMULINKELEMENTBASE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementType.h"
#include "SimulinkParameterBase.h"
#include <memory>
#include <string>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkElementBase
 * @brief Base class for Simulink elements.
 * @note Visual Simulink elements may differ from their actual XML
 * file representation. For example, a SimulinkArray is not a direct
 * component of the model, but rather a construct used to group
 * related settings, parameters, or serve other organizational
 * purposes. This class serves as a common base for both
 * visual and structural elements. The key characteristic for
 * inheriting from this class is that the child element must have a
 * unique integer-based ID across the entire model XML file. Elements
 * that rely on string-based identifiers or alternative indexing
 * mechanisms should not inherit from this class.
 * @todo Separate base interfaces for concrete Simulink model elements
 * and implementation-specific elements.
 */
class SLXIO_APIEXPORT SimulinkElementBase
{
public:
  /** Default destructor. */
  virtual ~SimulinkElementBase() = default;

  /** Creates a new instance of this element. */
  virtual SimulinkElementBase* New() const = 0;

  /** Deleted copy assignment operator. */
  SimulinkElementBase& operator=(const SimulinkElementBase&) = delete;

  /** Deleted move constructor. */
  SimulinkElementBase(SimulinkElementBase&& other) = delete;

  /** Deleted move assignment operator. */
  SimulinkElementBase& operator=(SimulinkElementBase&& other) = delete;

  /** Accesses a child element by index with bound checking */
  virtual std::shared_ptr<SimulinkElementBase> at(IdType index) = 0;

  /** Access specified element */
  virtual std::shared_ptr<SimulinkElementBase> operator[](IdType index) = 0;

  /** Returns the number of child elements. */
  virtual UInt32 Size() const = 0;

  /** Returns true if no child elements exist. */
  virtual bool Empty() const = 0;

  /** Removes all child elements. */
  virtual void Clear() = 0;

  /** Inserts a new child element. */
  virtual ReturnType Insert(const std::shared_ptr<SimulinkElementBase>& element) = 0;

  /** Erases a child element by identifier. */
  virtual ReturnType Erase(const IdType& id) = 0;

  /** Erases a child element by reference. */
  virtual ReturnType Erase(const std::shared_ptr<SimulinkElementBase>& element) = 0;

  /** Finds a child element by identifier. */
  virtual std::shared_ptr<SimulinkElementBase> Find(const IdType& id) = 0;

  /** Checks if this element or its children contain the given identifier. */
  virtual bool Contains(const IdType& id) const = 0;

  /** Returns the generic type of this element. */
  virtual SimulinkElementType GetType() const = 0;

  /** Returns the unique identifier of this element. */
  virtual IdType GetId() const = 0;

  /** Returns a string representation of this element. */
  virtual std::string ToString() const = 0;

  /** Returns the element specific name */
  virtual std::string GetName() = 0;

  /** Returns the elment dimensions string if supported else "" */
  virtual std::string GetDimension() = 0;

  /** Access the elment specifc parameter interface */
  virtual std::string GetParameter(std::string name) = 0;

protected:
  /** Default constructor. */
  SimulinkElementBase() = default;

  /** Deleted copy constructor. */
  SimulinkElementBase(const SimulinkElementBase&) = delete;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKELEMENTBASE_H
