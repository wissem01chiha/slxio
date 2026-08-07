// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWELEMENTBASE_H
#define STATEFLOWELEMENTBASE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "SimulinkElementBase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base class for all Stateflow elements.
 */
class StateflowElementBase : public SimulinkElementBase {
public:
  virtual ~StateflowElementBase() = default;
  StateflowElementBase &operator=(const StateflowElementBase &) = delete;

protected:
  StateflowElementBase() {}
  StateflowElementBase(const StateflowElementBase &orig);

  void setParent(std::shared_ptr<SimulinkElementBase> parent);
  virtual std::shared_ptr<StateflowElementBase> getParent() const = 0;
  std::shared_ptr<SimulinkElementBase> parent;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATEFLOWELEMENTBASE_H
