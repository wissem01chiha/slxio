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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef STATEFLOWCHART_H
#define STATEFLOWCHART_H

#include "ABINamespace.h"
#include "APIExport.h"
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
class APIEXPORT StateflowChart final : public StateflowElementBase
{
public:
  StateflowChart() = default;
  StateflowChart(StateflowChart& origChart) = delete;

  /// @brief Add a StateflowNodeBase object
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Remove a StateflowNodeBase object
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;

  /// @brief Get Chat Parent
  std::shared_ptr<StateflowElementBase> getParent() const override;

  /// @brief Return SimulinkElementType::Chart
  SimulinkElementType getType() const override;

  /** @brief Returns the name of the chart. */
  std::string getName();

  /** @brief Returns the nodes of this chart. */
  std::vector<StateflowNodeBase> getNodes();

  /** @brief Get Stateflow block this chart belongs to. */
  std::shared_ptr<StateflowBlock> getStateflowBlock();

  /**  @brief Returns the name of the chart. */
  std::string toString() const override;

  /** @brief Set Stateflow block this chart belongs to. */
  ErrorCode setStateflowBlock(StateflowBlock stateflowBlock);

  /** @brief Get the Stateflow machine this chart belongs to. */
  // StateflowMachine getMachine() {
  // return getParent();
  //}

  /// @brief Id is not supported for StateflowChart, fallback to 0
  Index getID() const override;

  /// @brief Id is not supported for StateflowChart, fallback to 0
  bool contains(const Index& id) const override;

private:
  std::shared_ptr<StateflowBlock> stateflowBlock;
  std::vector<StateflowNodeBase> nodes;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // STATEFLOWCHART_H