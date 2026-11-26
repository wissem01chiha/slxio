/*
 * Copyright 2025-2026 Wissem Chiha
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

#include "StateflowChart.h"
#include "StateflowBlock.h"

namespace slxio
{

    std::string StateflowChart::GetName()
    {
        return std::string("");
    }

    std::shared_ptr<StateflowElementBase> StateflowChart::GetParent() const
    {
        return std::shared_ptr<StateflowElementBase>();
    }

    std::vector<std::shared_ptr<StateflowNodeBase>> StateflowChart::GetNodes()
    {
        return std::vector<std::shared_ptr<StateflowNodeBase>>();
    }

    std::shared_ptr<StateflowBlock> StateflowChart::GetStateflowBlock()
    {
        return m_block;
    };

    std::string StateflowChart::ToString() const
    {
        return std::string("");
    }

    void StateflowChart::SetStateflowBlock(StateflowBlock stateflowBlock)
    {
        // if (stateflowBlock != null) {
        //   CCSMPre.isTrue(this.stateflowBlock == null,
        //                  "Cannot set new Stateflow block.");
        // }
        // this.stateflowBlock = stateflowBlock;
        return;
    }

    std::shared_ptr<StateflowMachine> StateflowChart::GetMachine()
    {
        return std::shared_ptr<StateflowMachine>();
    }

}; // namespace slxio
