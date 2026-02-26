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
#include "APIExport.h"
#include "SimulinkElementType.h"
#include "StateflowNodeBase.h"
#include "Type.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief This class represents Stateflow junctions.
 */
class StateflowJunction final : public StateflowNodeBase
{
public:
  StateflowJunction() = default;

private:
  StateflowJunction(StateflowJunction& orig)
  {

    // duplicate all default transitions to this one
    // for (StateflowTransition transition : orig.getInTransitions())
    // { if (transition.getSrc() == null) {
    // SimulinkUtils.copyParameters(transition, new
    // StateflowTransition(this));
    //}
    //}
  }

  /// @brief
  SimulinkElementType getType() const override;

  /// @brief Return
  std::string toString() const override;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END