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

#ifndef STATEFLOWSTATE_H
#define STATEFLOWSTATE_H

#include "ABINamespace.h"
#include "StateflowElementBase.h"
#include "StateflowNodeBase.h"

SLXIO_ABI_NAMESPACE_BEGIN

/** @brief This class represents Stateflow states.*/
class StateflowState : public StateflowElementBase {
public:
  StateflowState();
  StateflowState(StateflowState &orig);

  void addNode(StateflowNodeBase node) {
    // nodes.add(node);
    // node.setParent(this);
  }

  std::string getLabel() {
    // return getParameter(SimulinkConstant.PARAM_labelString);
  }

  /** Get child nodes. */
  // UnmodifiableSet<StateflowNodeBase> getNodes() {
  //   return CollectionUtils.asUnmodifiable(nodes);
  //}

  void removeNode(StateflowNodeBase node) {
    // CCSMPre.isTrue(node.getParent() == this,
    //          "Node does not belong to this chart.");
    // nodes.remove(node);
    // node.setParent(null);
  }

  std::string toString() const override;

private:
  std::vector<StateflowNodeBase> nodes;
};

SLXIO_ABI_NAMESPACE_END

#endif // STATEFLOWSTATE_H