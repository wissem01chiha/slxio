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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef STATEFLOWCHART_H
#define STATEFLOWCHART_H

#include "StateflowBlock.h"
#include "StateflowElementBase.h"
#include "StateflowMachine.h"
#include "StateflowNodeBase.h"
#include "ABINamespace.h"
#include <vector>

SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief This class represents Stateflow charts.
 * There is a one-to-one association between StateflowBlock
 * and StateflowChart.
 */
class StateflowChart : public StateflowElementBase {
public:
  StateflowChart() {}
  StateflowChart(StateflowChart &origChart);

  void addNode(StateflowNodeBase node) {
    // nodes.add(node);
    // node.setParent(this);
  }

  /** Get the Stateflow machine this chart belongs to. */
  // StateflowMachine getMachine() {
  // return getParent();
  //}

  /** Returns the name of the chart. */
  std::string getName() {
    // return getParameter(SimulinkConstant.PARAM_name);
  }

  /** Returns the nodes of this chart. */
  std::vector<StateflowNodeBase> getNodes() {
    // return CollectionUtils.asUnmodifiable(nodes);
  }

  /** Get Stateflow block this chart belongs to. */
  StateflowBlock getStateflowBlock(){
      // return stateflowBlock;
  };

  /**
   * This method throws an {@link UnsupportedOperationException}. You must
   * remove the associated {@link StateflowBlock} to remove a chart.
   */
  void remove() {
    // throw new UnsupportedOperationException(
    //    "Cannot remove chart without removing Stateflow block!");
  }

  /** Returns the name of the chart. */
  std::string toString() const override {
    // return getName();
  }

  void removeNodes() {
    // for (StateflowNodeBase node : new ArrayList<StateflowNodeBase>(nodes)) {
    //   node.remove();
    // }
  }

  // void removeNode(StateflowNodeBase node) {
  //   CCSMPre.isTrue(node.getParent() == this,
  //                  "Node does not belong to this chart.");
  //   nodes.remove(node);
  //   node.setParent(null);
  // }

  /** Set Stateflow block this chart belongs to. */
  void setStateflowBlock(StateflowBlock stateflowBlock) {
    // if (stateflowBlock != null) {
    //   CCSMPre.isTrue(this.stateflowBlock == null,
    //                  "Cannot set new Stateflow block.");
    // }
    // this.stateflowBlock = stateflowBlock;
  }

private:
  StateflowBlock stateflowBlock;
  std::vector<StateflowNodeBase> nodes;
};

SLXIO_ABI_NAMESPACE_END

#endif // STATEFLOWCHART_H