// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SIMULINKELEMENTBASE_H
#define SIMULINKELEMENTBASE_H

#include "SimulinkElementType.h"
#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "Type.h"
#include <memory>
#include <string>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Base class for Simulink elements.
 * @note Visual Simulink elements may differ from their actual XML file
 * representation. For example, a SimulinkArray is not a direct component of the
 * model, but rather a construct used to group related settings, parameters, or
 * serve other organizational purposes.
 * This class currently serves as a common base for both visual and structural
 * elements. The key characteristic for inheriting from this class is that the
 * child element must have a unique integer-based ID across the entire model XML
 * file.
 * Elements that use string-based identifiers or other indexing mechanisms
 * should not inherit from this class.
 * @todo Separate base interfaces for concrete Simulink model elements and
 * implementation-specific elements.
 * @note this file do not provide any implementation
 */
class APIEXPORT SimulinkElementBase {
public:
  virtual ~SimulinkElementBase() = default;
  SimulinkElementBase(const SimulinkElementBase &) = delete;
  SimulinkElementBase &operator=(const SimulinkElementBase &) = delete;
  
  virtual SimulinkElementType getType() const = 0;
  virtual Index getID() const = 0;
  virtual std::string toString() const = 0;
  virtual bool contains(Index id) const = 0;

protected:
  SimulinkElementBase() = default;
  virtual ErrorCode
  remove(const std::shared_ptr<SimulinkElementBase> element) = 0;
  virtual ErrorCode
  add(const std::shared_ptr<SimulinkElementBase> element) = 0;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKELEMENTBASE_H