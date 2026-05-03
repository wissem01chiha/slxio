// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWCHART_H
#define STATEFLOWCHART_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "SimulinkElementType.h"
#include "StateflowElementBase.h"
#include "StateflowNodeBase.h"
#include <vector>

SLXIO_NAMESPACE_BEGIN
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
  ReturnType AddElement(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Remove a StateflowNodeBase object
  ReturnType RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Get Chat Parent
  std::shared_ptr<StateflowElementBase> getParent() const override;

  /// @brief Return SimulinkElementType::Chart
  SimulinkElementType GetElementType() const override;

  /** @brief Returns the name of the chart. */
  std::string getName();

  /** @brief Returns the nodes of this chart. */
  std::vector<StateflowNodeBase> getNodes();

  /** @brief Get Stateflow block this chart belongs to. */
  std::shared_ptr<StateflowBlock> getStateflowBlock();

  /**  @brief Returns the name of the chart. */
  std::string ToString() const override;

  /** @brief Set Stateflow block this chart belongs to. */
  ReturnType setStateflowBlock(StateflowBlock stateflowBlock);

  /** @brief Get the Stateflow machine this chart belongs to. */
  // StateflowMachine getMachine() {
  // return getParent();
  //}

  /// @brief Id is not supported for StateflowChart, fallback to 0
  IdType GetElementId() const override;

  /// @brief Id is not supported for StateflowChart, fallback to 0
  bool Contains(const IdType& id) const override;

private:
  std::shared_ptr<StateflowBlock> stateflowBlock;
  std::vector<StateflowNodeBase> nodes;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWCHART_H