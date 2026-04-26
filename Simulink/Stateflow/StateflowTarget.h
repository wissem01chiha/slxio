// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWTARGET_H
#define STATEFLOWTARGET_H

#include "ABINamespaceMacro.h"
#include "StateflowElementBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Stateflow target object. Stateflow uses targets for
 * generating C-Code which is used for simulation.
 */
class APIEXPORT StateflowTarget final : public StateflowElementBase
{
public:
  StateflowTarget();
  StateflowTarget(StateflowTarget& orig);

  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;

  std::string toString() const override;
  Index getID() const override;

private:
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWTARGET_H