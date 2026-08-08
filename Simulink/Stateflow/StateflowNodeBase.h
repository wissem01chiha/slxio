// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0
#ifndef STATEFLOWNODEBASE_H
#define STATEFLOWNODEBASE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorCode.h"
#include "StateflowElementBase.h"

#include <memory>
#include <vector>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class StateflowTransition;

/**
 * @brief Base class for Stateflow nodes (elements that can be
 * connected by transitions).
 */
class SLXIO_APIEXPORT StateflowNodeBase : public StateflowElementBase
{
public:
  virtual ~StateflowNodeBase() = default;

  void addInTransition(const std::shared_ptr<StateflowTransition>& transition);
  void addOutTransition(const std::shared_ptr<StateflowTransition>& transition);

  const std::vector<std::shared_ptr<StateflowTransition>>& getInTransitions()
    const;
  const std::vector<std::shared_ptr<StateflowTransition>>& getOutTransitions()
    const;

  void RemoveElement();
  void removeInTransition(
    const std::shared_ptr<StateflowTransition>& transition);
  void removeOutTransition(
    const std::shared_ptr<StateflowTransition>& transition);

protected:
  StateflowNodeBase() = default;
  StateflowNodeBase(const StateflowNodeBase& origNode) = default;

private:
  std::vector<std::shared_ptr<StateflowTransition>> inTransitions;
  std::vector<std::shared_ptr<StateflowTransition>> outTransitions;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATEFLOWNODEBASE_H
