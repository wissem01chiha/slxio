// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWTARGET_H
#define STATEFLOWTARGET_H

#include "AbiNamespaceMacro.h"
#include "StateflowElementBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Stateflow target object. Stateflow uses targets for
 * generating C-Code which is used for simulation.
 */
class SLXIO_APIEXPORT StateflowTarget final : public StateflowElementBase
{
public:
  StateflowTarget();
  StateflowTarget(StateflowTarget& orig);

  ReturnType RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;
  ReturnType AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  std::string ToString() const override;
  IdType GetElementId() const override;

private:
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWTARGET_H