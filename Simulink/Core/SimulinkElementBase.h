// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKELEMENTBASE_H
#define SIMULINKELEMENTBASE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorTypes.h"
#include "SimulinkElementType.h"
#include "PlatformTypes.h"
#include <memory>
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Base class for Simulink elements.
 * @note Visual Simulink elements may differ from their actual XML
 * file representation. For example, a SimulinkArray is not a direct
 * component of the model, but rather a construct used to group
 * related settings, parameters, or serve other organizational
 * purposes. This class currently serves as a common base for both
 * visual and structural elements. The key characteristic for
 * inheriting from this class is that the child element must have a
 * unique integer-based ID across the entire model XML file. Elements
 * that use string-based identifiers or other indexing mechanisms
 * should not inherit from this class.
 * @todo Separate base interfaces for concrete Simulink model elements
 * and implementation-specific elements.
 * @note this file do not provide any implementation
 */
class APIEXPORT SimulinkElementBase
{
public:
  virtual ~SimulinkElementBase() = default;
  SimulinkElementBase& operator=(const SimulinkElementBase&) = delete;
  virtual SimulinkElementType getType() const = 0;
  virtual IdType GetID() const = 0;
  virtual std::string toString() const = 0;
  virtual bool Contains(const IdType& id) const = 0;

protected:
  SimulinkElementBase() = default;
  SimulinkElementBase(const SimulinkElementBase&) = delete;
  virtual UInt32 Remove(
    const std::shared_ptr<SimulinkElementBase> element) = 0;
  virtual UInt32 add(const std::shared_ptr<SimulinkElementBase> element) = 0;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKELEMENTBASE_H