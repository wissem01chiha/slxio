// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWSTATE_H
#define STATEFLOWSTATE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorTypes.h"
#include "SimulinkElementType.h"
#include "StateflowElementBase.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class StateflowNodeBase;

/**
 * @brief This class represents Stateflow states.
 */
class APIEXPORT StateflowState final : public StateflowElementBase
{
public:
  StateflowState() = default;
  StateflowState(StateflowState& orig);

  /// @brief Add a StateflowNodeBase object
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Remove a StateflowNodeBase object
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Get Chat Parent of this StateflowTranstion
  std::shared_ptr<StateflowElementBase> getParent() const override;

  /** @brief Get Refrence to child nodes. */
  const std::vector<StateflowNodeBase>& getNodes() const;

  /// @brief Return SimulinkElementType::Chart
  SimulinkElementType getType() const override;

  /// @brief get a String Reprsenation of the transistion
  std::string toString() const override;

  /// @brief Id is not supported for StateflowState, fallback to 0
  Index getID() const override;

  /// @brief Id is not supported for StateflowState, fallback to 0
  bool contains(const Index& id) const override;

private:
  std::vector<StateflowNodeBase> nodes;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWSTATE_H