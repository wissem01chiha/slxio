/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "CommonPCH.h"

namespace slxio
{
    /**
     * @brief A Stateflow target object. Stateflow uses targets for
     * generating C-Code which is used for simulation.
     */
    class SLXIO_APIEXPORT StateflowTarget final : public StateflowElementBase
    {
    public:
        StateflowTarget();
        StateflowTarget(StateflowTarget& orig);

        HError RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;
        HError AddElement(std::shared_ptr<SimulinkElementBase> element) override;

        std::string toString() const override;
        SId GetId() const override;

    private:
    };

    SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATEFLOWTARGET_H
