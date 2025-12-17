// Copyright 2024-2026 Wissem Chiha
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

#ifndef STATEFLOWTARGET_H
#define STATEFLOWTARGET_H

#include "slxABINamespace.h"
#include "StateflowElementBase.h"

SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Stateflow target object. Stateflow uses targets for generating
 * C-Code which is used for simulation.
 */
class StateflowTarget : public StateflowElementBase {
public:
  StateflowTarget();
  StateflowTarget(StateflowTarget &orig);

  void remove() {
    // CCSMPre.isFalse(getParent() == null,
    //                "Target has no parent to be removed from.");
    // getParent().removeTarget(this);
  }
};

SLXIO_ABI_NAMESPACE_END

#endif // STATEFLOWTARGET_H