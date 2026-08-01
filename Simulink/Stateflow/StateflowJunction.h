// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementType.h"
#include "StateflowNodeBase.h"

namespace slxio
{
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
  SimulinkElementType GetType() const override;

  /// @brief Return
  std::string ToString() const override;
};

SLXIO_ABI_NAMESPACE_END
};
