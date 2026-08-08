// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWTARGET_H
#define STATEFLOWTARGET_H

#include "ABINamespaceMacro.h"
#include "StateflowElementBase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Stateflow target object. Stateflow uses targets for
 * generating C-Code which is used for simulation.
 */
class SLXIO_APIEXPORT StateflowTarget final : public StateflowElementBase {
public:
  StateflowTarget();
  StateflowTarget(StateflowTarget &orig);

  HError RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;
  HError AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  std::string toString() const override;
  SId GetId() const override;

private:
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATEFLOWTARGET_H
