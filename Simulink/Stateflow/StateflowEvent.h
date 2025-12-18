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

#include "StateflowElementBase.h"
#include "slxABINamespace.h"

SLXIO_ABI_NAMESPACE_BEGIN

/** @brief A Stateflow event object.*/
class StateflowEvent : public StateflowElementBase {
public:
  StateflowEvent();

private:
  StateflowEvent(StateflowEvent &orig);
  SimulinkErrorType
  remove(std::shared_ptr<SimulinkElementBase> element) override {
    // CCSMPre.isFalse(getParent() == null,
    //                 "Event has no parent to be removed from.");
    // getParent().removeEvent(this);
  }
};

SLXIO_ABI_NAMESPACE_END