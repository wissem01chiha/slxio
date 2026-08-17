// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "ABINamespaceMacro.h"
#include "StateflowDeclContainerBase.h"
#include "StateflowElementBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base class for Stateflow declarations StateflowData and
 * StateflowEvent.
 */
class StateflowDeclBase : public StateflowElementBase,
                          StateflowDeclContainerBase
{
public:
    StateflowDeclBase();

protected:
    StateflowDeclBase(StateflowDeclBase& orig);

    // std::string getName() { return
    // std::string(SimulinkConstant::PARAM_name); }

    std::string ToString() const override
    {
        // return getName() + " [" + getStateflowId() + "]";
    }
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
