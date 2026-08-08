// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWCHART_H
#define STATEFLOWCHART_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "SimulinkElementType.h"
#include "StateflowElementBase.h"
#include "StateflowNodeBase.h"

#include <vector>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class StateflowBlock;
class StateflowMachine;

/**
 * @brief This class represents Stateflow charts.
 * There is a one-to-one association between StateflowBlock
 * and StateflowChart.
 */
class SLXIO_APIEXPORT StateflowChart final : public StateflowElementBase
{
public:
  StateflowChart() = default;
  StateflowChart(StateflowChart& origChart) = delete;

  /// @brief Add a StateflowNodeBase object
  HError AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Remove a StateflowNodeBase object
  HError RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Get Chat Parent
  std::shared_ptr<StateflowElementBase> getParent() const override;

  /// @brief Return SimulinkElementType::Chart
  SimulinkElementType GetType() const override;

  /** @brief Returns the name of the chart. */
  std::string getName();

  /** @brief Returns the nodes of this chart. */
  std::vector<StateflowNodeBase> getNodes();

  /** @brief Get Stateflow block this chart belongs to. */
  std::shared_ptr<StateflowBlock> getStateflowBlock();

  /**  @brief Returns the name of the chart. */
  std::string ToString() const override;

  /** @brief Set Stateflow block this chart belongs to. */
  HError setStateflowBlock(StateflowBlock stateflowBlock);

  /** @brief Get the Stateflow machine this chart belongs to. */
  // StateflowMachine getMachine() {
  // return getParent();
  //}

  /// @brief Id is not supported for StateflowChart, fallback to 0
  SId GetId() const override;

  /// @brief Id is not supported for StateflowChart, fallback to 0
  bool Contains(const SId& id) const override;

private:
  std::shared_ptr<StateflowBlock> stateflowBlock;
  std::vector<StateflowNodeBase> nodes;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATEFLOWCHART_H
