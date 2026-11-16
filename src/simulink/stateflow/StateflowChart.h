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
#include "StateflowElementBase.h"

namespace slxio
{
    class StateflowBlock;
    class StateflowMachine;
    class StateflowNodeBase;

    /**
     * This class represents Stateflow charts.
     * There is a one-to-one association between StateflowBlock
     * and StateflowChart.
     */
    class StateflowChart final : public StateflowElementBase
    {
    public:
        StateflowChart() = default;
        StateflowChart(StateflowChart& origChart);

        // Returns the name of the chart.
        std::string GetName();

        std::shared_ptr<StateflowElementBase> GetParent() const override;

        // Returns the nodes of this chart.
        std::vector<std::shared_ptr<StateflowNodeBase>> GetNodes();

        // Get Stateflow block this chart belongs to.
        std::shared_ptr<StateflowBlock> GetStateflowBlock();

        std::string ToString() const override;

        // Set Stateflow block this chart belongs to.
        void SetStateflowBlock(StateflowBlock stateflowBlock);

        std::shared_ptr<StateflowMachine> GetMachine();

        ~StateflowChart() = default;

    private:
        std::shared_ptr<StateflowBlock> m_block;
        std::vector<std::shared_ptr<StateflowNodeBase>> m_nodes;
    };

}; // namespace slxio
