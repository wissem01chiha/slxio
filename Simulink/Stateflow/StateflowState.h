// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWSTATE_H
#define STATEFLOWSTATE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "ErrorCode.h"
#include "PlatformTypes.h"
#include "SimulinkElementType.h"
#include "StateflowElementBase.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class StateflowNodeBase;

/**
 * @brief This class represents Stateflow states.
 */
class SLXIO_APIEXPORT StateflowState final : public StateflowElementBase {
public:
  StateflowState() = default;
  StateflowState(StateflowState &orig);

  /// @brief Add a StateflowNodeBase object
  HError AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Remove a StateflowNodeBase object
  HError RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Get Chat Parent of this StateflowTranstion
  std::shared_ptr<StateflowElementBase> getParent() const override;

  /** @brief Get Refrence to child nodes. */
  const std::vector<StateflowNodeBase> &getNodes() const;

  /// @brief Return SimulinkElementType::Chart
  SimulinkElementType GetType() const override;

  /// @brief get a String Reprsenation of the transistion
  std::string ToString() const override;

  /// @brief Id is not supported for StateflowState, fallback to 0
  SId GetId() const override;

  /// @brief Id is not supported for StateflowState, fallback to 0
  bool Contains(const SId &id) const override;

private:
  std::vector<StateflowNodeBase> nodes;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATEFLOWSTATE_H
