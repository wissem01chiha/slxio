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

#include "ABINamespace.h"
#include "StateflowDeclContainerBase.h"
#include "StateflowElementBase.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base class for Stateflow declarations StateflowData and
 * StateflowEvent.
 */
class StateflowDeclBase
  : public StateflowElementBase
  , StateflowDeclContainerBase
{
public:
  StateflowDeclBase();

protected:
  StateflowDeclBase(StateflowDeclBase& orig);

  // std::string getName() { return
  // std::string(SimulinkConstant::PARAM_name); }

  std::string toString() const override
  {
    // return getName() + " [" + getStateflowId() + "]";
  }
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END