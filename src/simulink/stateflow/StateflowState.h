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
    class StateflowNodeBase;

    /**
     * @brief This class represents Stateflow states.
     */
    class SLXIO_APIEXPORT StateflowState final : public StateflowElementBase
    {
    public:
        StateflowState() = default;
        StateflowState(StateflowState& orig);

        /// @brief Add a StateflowNodeBase object
        HError AddElement(std::shared_ptr<SimulinkElementBase> element) override;

        /// @brief Remove a StateflowNodeBase object
        HError RemoveElement(std::shared_ptr<SimulinkElementBase> element) override;

        /// @brief Get Chat Parent of this StateflowTranstion
        std::shared_ptr<StateflowElementBase> getParent() const override;

        /** @brief Get Refrence to child nodes. */
        const std::vector<StateflowNodeBase>& getNodes() const;

        /// @brief Return SimulinkElementType::Chart
        SimulinkElementType GetType() const override;

        /// @brief get a String Reprsenation of the transistion
        std::string ToString() const override;

        /// @brief Id is not supported for StateflowState, fallback to 0
        SId GetId() const override;

        /// @brief Id is not supported for StateflowState, fallback to 0
        bool Contains(const SId& id) const override;

    private:
        std::vector<StateflowNodeBase> nodes;
    };

}; // namespace slxio
