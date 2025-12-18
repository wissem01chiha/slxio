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

#ifndef STATEFLOWNODEBASE_H
#define STATEFLOWNODEBASE_H

#include "StateflowElementBase.h"
#include "StateflowTransition.h"
#include "slxABINamespace.h"

SLXIO_ABI_NAMESPACE_BEGIN

/**
 *  @brief Base class for Stateflow nodes (elements that can be connected by
 * transitions).
 */
class StateflowNodeBase : public StateflowElementBase {
private:
  std::vector<StateflowTransition> inTransitions;
  std::vector<StateflowTransition> outTransitions;

protected:
  StateflowNodeBase() {}
  StateflowNodeBase(StateflowNodeBase &element) {}

  void addInTransition(StateflowTransition transition) {
    // CCSMPre.isTrue(transition.getDst() == this,
    //             "Transition destination element does not match");
    // inTransitions.add(transition);
  }

  /** Add outgoing transition. */
  void addOutTransition(StateflowTransition transition) {
    // CCSMPre.isTrue(transition.getSrc() == this,
    //              "Transition source element does not match");
    // outTransitions.add(transition);
  }

public:
  std::vector<StateflowTransition> getInTransitions() {
    // return CollectionUtils.asUnmodifiable(inTransitions);
  }

  std::vector<StateflowTransition> getOutTransitions() {
    // return CollectionUtils.asUnmodifiable(outTransitions);
  }

  void remove() {
    // IStateflowNodeContainer < ? > parent = getParent();

    /// CCSMPre.isFalse(parent == null, "Node has no parent to be removed
    /// from.");

    // The reason for this instanceof-constrcut is the following: Java
    // interfaces support only public methods. Therefore adding the
    // removeNode-method to IStateFlowNodeContainr would make it visible to
    // all clients. As we usually only make the parameterless
    // remove()-method visible, this is undesirable.
    // if (parent instanceof StateflowChart) {
    //   ((StateflowChart)parent).removeNode(this);
    // } else if (parent instanceof StateflowState) {
    //   ((StateflowState)parent).removeNode(this);
    // } else {
    //   CCSMAssert.fail("Unknown Stateflow container: " + parent);
    // }

    // for (StateflowTransition transition :
    //      new ArrayList<StateflowTransition>(inTransitions)) {
    //   transition.remove();
    // }

    // for (StateflowTransition transition :
    //      new ArrayList<StateflowTransition>(outTransitions)) {
    //   transition.remove();
    // }
  }

  void removeInTransition(StateflowTransition transition) {
    // CCSMPre.isTrue(inTransitions.contains(transition),
    //               "Transition does not belong to this node.");
    // inTransitions.remove(transition);
  }

  void removeOutTransition(StateflowTransition transition) {
    // CCSMPre.isTrue(outTransitions.contains(transition),
    //              "Transition does not belong to this node.");
    // outTransitions.remove(transition);
  }
};

SLXIO_ABI_NAMESPACE_END

#endif // STATEFLOWNODEBASE_H